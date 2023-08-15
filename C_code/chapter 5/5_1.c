
#define PI 3.14

int main()
{
	double f;
	printf("PI =%lf\n",PI);
	#undef PI
	
	#define PI 3.1415926
	f=PI;
	
	return 0;
}