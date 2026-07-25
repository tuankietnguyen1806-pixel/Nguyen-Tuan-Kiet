#include <stdio.h>

typedef struct {
	char light;
	char fan;
	char motor;
} smartHome_t;

const char* data = "HTTP1.1 200 OK{"\
"\"light\": \"on\","\
"\"fan\" : \"off\","\
"\"motor\" : \"off\"}";

smartHome_t pair_data(const char* data)
{
	smartHome_t result = { 0, 0, 0 };

	for (int i = 0; data[i] != '\0'; i++) 
	{
		if (data[i] == 'l' && data[i + 1] == 'i' && data[i + 2] == 'g' && data[i + 3] == 'h' && data[i + 4] == 't') 
		{
			for (int j = i + 5; j < i + 10 && data[j] != '\0'; j++) 
			{
				if (data[j] == 'o' && data[j + 1] == 'n') 
				{
					result.light = 1;
					break;
				}
				if (data[j] == 'o' && data[j + 1] == 'f' && data[j + 2] == 'f') 
				{
					result.light = 0;
					break;
				}
			}
		}
			
		if (data[i] == 'f' && data[i + 1] == 'a' && data[i + 2] == 'n') 
		{
			for (int j = i + 3; j < i + 10 && data[j] != '\0'; j++) 
			{
				if (data[j] == 'o' && data[j + 1] == 'n') 
				{
					result.fan = 1;
					break;
				}
				if (data[j] == 'o' && data[j + 1] == 'f' && data[j + 2] == 'f') 
				{
					result.fan = 0;
					break;
				}
			}
		}
			
		if (data[i] == 'm' && data[i + 1] == 'o' && data[i + 2] == 't' && data[i + 3] == 'o' && data[i + 4] == 'r') 
		{
			for (int j = i + 5; j < i + 10 && data[j] != '\0'; j++) 
			{
				if (data[j] == 'o' && data[j + 1] == 'n') 
				{
					result.motor = 1;
					break;
				}
				if (data[j] == 'o' && data[j + 1] == 'f' && data[j + 2] == 'f') 
				{
					result.motor = 0;
					break;
				}
			}
		}
	}

	return result;
}

int main()
{
	smartHome_t x = pair_data(data);

	printf("Light : %d\n", x.light);
	printf("Fan   : %d\n", x.fan);
	printf("Motor : %d\n", x.motor);

	return 0;
}