class Solution { // Defines a class named Solution
public: // Specifies that the following members are accessible from outside the class
    int tribonacci(int n) { // Declares a public member function named tribonacci that returns an int and takes an int parameter n
        if (n == 0) return 0; // If n is 0, return 0 (base case)
        if (n == 1 || n == 2) return 1; // If n is 1 or 2, return 1 (base cases)

        vector<int> memo(n + 1, 0); // Creates a vector named memo with n+1 elements, all initialized to 0
        memo[1] = 1; // Sets the second element (index 1) of memo to 1 (T1 = 1)
        memo[2] = 1; // Sets the third element (index 2) of memo to 1 (T2 = 1)

        for (int i = 3; i <= n; ++i) { // Starts a loop from i = 3 to i = n
            memo[i] = memo[i - 1] + memo[i - 2] + memo[i - 3]; // Calculates the i-th Tribonacci number and stores it in memo[i]
        }

        return memo[n]; // Returns the n-th Tribonacci number
    }
};

