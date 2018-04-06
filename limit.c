#include <stdio.h>
#include <float.h>
#include <limits.h>


#define print_type_s(type, min, max) \
printf("%-20s%-15lu%-25lld%-25lld\n",#type,sizeof(type), (long long)min, (long long)max)

#define print_type_u(type, min, max) \
printf("%-20s%-15lu%-25llu%-25llu\n",#type,sizeof(type), (unsigned long long)min, (unsigned long long)max)

#define print_float_type(type, min, max) \
printf("%-20s%-15lu%-25Le%-25Le\n",#type,sizeof(type), (long double)min, (long double)max)


int main(int argc, const char * argv[]) {
    
    printf("%-20s%-15s%-25s%-25s\n","type","size","max","min");
    
    print_type_s(char, CHAR_MIN, CHAR_MAX);
    print_type_u(unsigned char, 0, UCHAR_MAX);
    
    print_type_s(short, SHRT_MIN, SHRT_MAX);
    print_type_u(unsigned short, 0, USHRT_MAX);
    
    print_type_s(int, INT_MIN, INT_MAX);
    print_type_u(unsigned int, 0, UINT_MAX);
    
    print_type_s(long, LONG_MIN, LONG_MAX);
    print_type_u(unsigned long, 0, ULONG_MAX );
    
    print_type_s(long long, LLONG_MIN, LLONG_MAX);
    print_type_u(unsigned long long, 0, ULLONG_MAX);
    
    print_float_type(float, FLT_MIN, FLT_MAX);
    print_float_type(double, DBL_MIN, DBL_MAX);
    print_float_type(long double, LDBL_MIN, LDBL_MAX);
    
    return 0;
}
