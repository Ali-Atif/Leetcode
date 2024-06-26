class Solution {
public:
    double average(vector<int>& salary) {
        int minSalary = *min_element(salary.begin(), salary.end());
        int maxSalary = *max_element(salary.begin(), salary.end());

        // Calculate the sum excluding the minimum and maximum salary
        int totalSum = accumulate(salary.begin(), salary.end(), 0);
        int sumExcludingMinMax = totalSum - minSalary - maxSalary;

        // Calculate the average
        double averageSalary = static_cast<double>(sumExcludingMinMax) / (salary.size() - 2);
        
        return averageSalary;
    }
};