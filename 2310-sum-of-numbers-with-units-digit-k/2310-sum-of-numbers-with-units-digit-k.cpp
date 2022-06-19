class Solution
{
    public:
        int minimumNumbers(int num, int k)
        {
            if (num == 0)
                return 0;
            for (int i = 1; i <= 10; i++)
            {
                if ((i *k) % 10 == num % 10 and i*k <= num)//A1 + A2 + . + An = n*k + 10*(a1 + a2 + . + an) = num
                    return i;
            }
            return -1;
        }
};