int main()
{

#pragma region Data Type

	// Data Type (byte=8bits)
	// char(1) short(2) int(4) long(4) long long (4)
	// float(4) double(8)

	// unsigned => only positive numbers
	// c is one byte means you can put a number between 0 - 255
	unsigned char c = 0;

	// this will return 0 as c can contain up to 255
	// 1 0000 0000 and 1 will be discarded becoming just 0
	// c = 256
	
	// char allows negative numbers
	// -128 ~ 0 ~ 127 
	// first bit will be using for check negative and positive number
	// (0 (positive), 1 (negative) ) 0000 000
	// 0 and 1 are called MSB (most significant bit)
	// But negative number is interpreted differently from CPU. 
	// CPU treats subtractions as plus 127 + (-127) = 0 thus we need to find what number is 127 to make it as 0
	// 0 (negative) 0000 000 -> 127
	// 1 (positive) 0000 001 -> -127      (+)
	// 0            0000 000 -> 0
	// 0 (negative) 0000 001 -> 1
	// 1 (positive) 1111 111 -> -1        (+)
	// 0            0000 000 -> 0

	char c1 = 0;
	c1 = -1;

	// this will be come -1 as it is 1111 1111 -> -1

	c1 = 255 

#pragma endregion



	return 0;
}