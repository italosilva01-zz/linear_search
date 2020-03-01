#include <iostream>

typedef int value_type;

value_type* lsearch3( value_type* first, value_type *last, value_type target )
{

    //check if the first is less than the last and increase one in first
        for( ; first < last; ++first){
            //if the value of first is equal to the target return first address
            if(*first == target)
                return first;
        };

    return nullptr; // This is just a STUB. Replace it accordingly.
}

void print2( value_type *first, value_type *last)
{
    
    //while first address of first is different form the address of last,
    // the block is executed
    while (first != last)
    {
       std::cout << *first <<" ";

       first++;

    }
    
}

int main()
{
    value_type A[]{ 9, 2, 1, 4, -2, 0, 5, 12 };
    size_t n = sizeof(A)/sizeof(value_type);

    value_type targets[]{ 2, -3, 4, 5, -12, 0, 7, 9 };// The target we are looking for.
    
    std::cout<<"[";
    print2(A,A+n);
    std::cout<<"]"<<std::endl;
    
    for ( value_type key : targets )
    {
        // The linear search.
        // int idx = lsearch2( A, left, right, key );
        // TODO: This is the new version you need to implement.

        value_type *result = lsearch3( std::begin(A), std::end(A), key );

        // TODO: Adapt the code below to work with the new version of lsearch().
        // Show the search result.

        if ( result == nullptr )
            std::cout << "\t-- Could not find " << key << " in the range"<< std::endl;
        else
            std::cout << "\t-- Found " << key << " at location "
                << (result - A) << std::endl;
    }

    
    return 0;
}
