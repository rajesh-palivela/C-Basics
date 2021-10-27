#include<stdio.h>
#include<limits.h>
main()
{
	printf("Short int:\n signed:%hd to %hd\n",SHRT_MIN,SHRT_MAX);
	printf("Short int:\n un signed:%hu to %hu\n",0,USHRT_MAX);
	printf("int:\n signed:%d tO %d\n",INT_MIN,INT_MAX);
	printf("int:\n unsigned:%d TO %u\n",0,UINT_MAX);
	printf("long int:\n signd:%ld to %ld\n",LONG_MIN,LONG_MAX);
    printf("long int:\n unsignd:%lu to %lu\n",0,ULONG_MAX);
	printf("long long int:\n signd:%lld to %lld",LONG_LONG_MIN,LONG_LONG_MAX);
    printf("long long int:\n unsignd:%llu to %llu",0,ULONG_LONG_MAX);
	
}
