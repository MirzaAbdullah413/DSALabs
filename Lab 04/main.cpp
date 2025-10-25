#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>
using namespace std;
//Algorithm 1
int subSumProb1(int a[], int size)
{
    int maxSum = 0;
    for(int i = 0; i < size; i++)
    {
        for(int j = i; j< size; j++)
        {
            int thisSum = 0;
            for(int k = i; k <=j ; k++)
            {
                thisSum += a[k];
            }
            if(thisSum > maxSum)
            {
                maxSum = thisSum;
            }
        }
    }
    return maxSum;
}

//Algorithm 2
int subSumProb2(int a[],int size)
{
    int maxSum = 0;
    for(int i = 0; i< size; i++)
    {
        int thisSum = 0;
        for(int j = i; j< size; j++)
        {
            thisSum += a[j];
            if(thisSum > maxSum)
            {
                maxSum = thisSum;
            }
        }
    }
    return maxSum;
}

void long_Operation()
{
    using namespace std::chrono_literals;
    std::this_thread::sleep_for(150ms);
}

//max3 method
int max3(int maxLeft, int maxRight, int sumOfBorders)
{
    if (maxLeft > maxRight && maxLeft > sumOfBorders)
        return maxLeft;
    else if (maxRight > sumOfBorders)
        return maxRight;
    else
        return sumOfBorders;
}

//Algorithm 3
int subSumProb3(int a[], int left, int right)
{
    int mid;
    if(left == right) return a[left];
    else
        mid = (left + right) / 2;
        int maxLeft = subSumProb3(a, left , mid);
        int maxRight = subSumProb3(a, mid + 1, right);

        int newLeftBorder = 0;int leftBorder = 0;
        for(int i = mid; i>=left; i--)
        {
                leftBorder += a[i];
                if(leftBorder >  newLeftBorder)
                    newLeftBorder = leftBorder;
        }
        int newRightBorder = 0;
        int rightBorder = 0;
        for(int i = mid + 1; i <= right; i++)
        {
            rightBorder += a[i];
            if(rightBorder > newRightBorder)
                newRightBorder = rightBorder;
        }

    return max3(maxLeft, maxRight, newLeftBorder + newRightBorder);
}




int main()
{
    int size = 50000;
    int a[size];
    int left = 0;
    int right = size - 1;
    for(int i = 0; i < size; i++){
        a[i] = rand() % size;
        a[i * rand() % size] = -1 * rand() % size;

    }
        cout << subSumProb1(a, size) << endl;
        cout << subSumProb2(a, size) << endl;
        cout << subSumProb3(a, left, right) << endl;
        using std::chrono::high_resolution_clock;
        using std::chrono::duration_cast;
        using std::chrono::duration;
        using std::chrono::milliseconds;

        cout << "\nThe time taken for algorithm 1\n";
        auto t1 = high_resolution_clock::now();
        subSumProb1(a, size);

        auto t2 = high_resolution_clock::now();

        auto ms_int = duration_cast<milliseconds>(t2-t1);

        duration<double, std::milli> ms_double = t2 - t1;
        cout << ms_int.count() << "ms\n";
        cout << ms_double.count() << "ms\n";

        cout << "\n\nThe time taken for algorithm 2\n";
        auto t3 = high_resolution_clock::now();
        subSumProb2(a, size);
        auto t4 = high_resolution_clock::now();
        auto ms_int2 = duration_cast<milliseconds>(t4-t3);
        duration<double, std::milli>ms_double2 = t4 - t3;
        cout << ms_int2.count() << "ms\n";
        cout << ms_double2.count() <<"ms\n";


        cout << "\n\nThe time taken for algorithm 3\n";
         auto t5 = high_resolution_clock::now();
        subSumProb3(a, left, right);
        auto t6 = high_resolution_clock::now();
        auto ms_int3 = duration_cast<milliseconds>(t6-t5);
        duration<double, std::milli>ms_double3 = t6 - t5;
        cout << ms_int3.count() << "ms\n";
        cout << ms_double3.count() <<"ms";
}
