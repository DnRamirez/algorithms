# Sliding Window 
Sliding window is implmented using two pointers. There is a common group of problems that can be solved using sliding window. This group of problems involves subarrays. Here is how you can identify such problems. 

First, the problem will implicilty or explicitly define criteria that make a subarray "valid". A valid subarray is determined by a constraint metric and numeric restriction on that constraint. 

A constraint metric is some attribute of a subarray. This could be the sum, number of unique elements, frequency of an element, etc. A numeric restriction is then applied to this constraint metric. 

Example: Subarray is valid if sum is less than or equal to 10. Constraint metric: sum, numeric restriction: <= 10.


Second, the problem will ask you to find valid subarrays in some way. The objective could be finding the best valid subarray. The problem will describe what makes a subarray better than another. Another objective could be to find the total number of valid subarrays. 