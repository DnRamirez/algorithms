# Hashing
A hash function is a function that takes an input and converts it to an integer that is less than a fixed size. Inputs are called **keys**. Once a key is converted, we can index to assign or retrieve values from hash map efficiently.

The only constraint on hash map's key is that it has to be **immutable**. 

# Advantages 
A hash map is an unordered data structure that stores key-value pairs. We can perform operations such as remove elements, check if a key exists, and update values given a key in **0(1)**.

Hash maps provide a more flexible and cleaner way to store key-value pairs compared to arrays. With arrays, if you don’t know what the maximum key value is, you can’t determine the size of the array upfront. Since hash tables have a limited size **N**, the hashed value is mapped into the range **[0, N-1]** using the modulus operator **%**.

Note: An unordered data structure is one where the insertion order is not relevant. 

# Disadvantages
Hash maps can be slower due to overhead when working with small input sizes. Hash tables can take up alot of space. For example, a hash table may use an array that is significantly larger than the number of elements stored, resulting in a huge **waste of space**. 

We also need to **minimize** collisions. 