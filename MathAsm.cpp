#include "MathAsm.h"

MathAsm::MathAsm()
{
    //ctor
}
float MathAsm::sumNumbers(float $value, float $value1)
{
    float $result = 0.0;
    asm volatile(
        "FADDS %2\n"
        :"=&t"($result)
        :"0" ($value), "m" ($value1)
    );
    return $result;
}

float MathAsm::restNumbers(float $value, float $value1)
{
    float $result = 0.0;
    asm volatile(
        "FSUBS %2\n"
        :"=&t"($result)
        :"0" ($value), "m" ($value1)
    );
    return $result;
}

float MathAsm::multNumbers(float $value, float $value1)
{
    float $result = 0.0;
    asm volatile(
        "FMULS %2\n"
        :"=&t"($result)
        :"0" ($value), "m" ($value1)
    );
    return $result;
}

float MathAsm::divNumbers(float $value, float $value1)
{
    float $result = 0.0;
    asm volatile(
        "FDIVS %2\n"
        :"=&t"($result)
        :"0" ($value), "m" ($value1)
    );
    return $result;
}
float MathAsm::sinNumber(float $value)
{
    float $result;
    asm volatile("fsin" : "=t" ($result) : "0" ($value));
    return $result;
}

float MathAsm::cosNumber(float $value)
{
    float $result;
    asm volatile("fcos" : "=t" ($result) : "0" ($value));
    return $result;
}

float MathAsm::tangNumber(float $value)
{
    float $result;
    float $sin = sinNumber($value);
    float $cos = cosNumber($value);
    $result = divNumbers($sin, $cos);
    return $result;
}

float MathAsm::secNumber(float $value)
{
    float $result;
    $value = cosNumber($value);
    $result = divNumbers(1.0, $value);
    return $result;
}

float MathAsm::cosecNumber(float $value)
{
    float $result;
    $value = sinNumber($value);
    $result = divNumbers(1.0, $value);
    return $result;
}

float MathAsm::cotangNumber(float $value)
{
    float $result;
    $value = tangNumber($value);
    $result = divNumbers(1.0, $value);
    return $result;
}

float MathAsm::arcTangNumber(float $value)
{
    float $result;
    asm volatile(
        "fld1\n"
        "fpatan\n"
        : "=t" ($result)
        : "0" ($value));
    return $result;
}
float MathAsm::sqrtOfNumber(float $value)
{
    float $result;
    asm volatile(
        "fsqrt"
        : "=t" ($result)
        : "0" ($value)
    );
    return $result;
}
float MathAsm::arcTangNumbers(float $y, float $x)
{
    float $result;
	asm volatile("fpatan" : "=t" ($result) : "0" ($x), "u" ($y) : "st(1)");
	return $result;
}
float MathAsm::arcSinNumber(float $value)
{
    float $prevalue = multNumbers(-$value, $value);
    $prevalue = sumNumbers(1.0, $prevalue);
    $prevalue = sqrtOfNumber($prevalue);
    return arcTangNumbers($value, $prevalue);
}

float MathAsm::arcCosNumber(float $value)
{
    float $prevalue = multNumbers(-$value, $value);
    $prevalue = sumNumbers(1.0, $prevalue);
    $prevalue = sqrtOfNumber($prevalue);
    return arcTangNumbers($prevalue, $value);
}



float MathAsm::exponentialFunction(float $value)
{
    float $result;
    asm volatile(
        "fldl2e\n"
        "fmulp\n"
        "fld %%st(0)\n"
        "frndint\n"
        "fsubr %%st(0),%%st(1)\n" /* bug-binutils/19054 */
        "fxch %%st(1)\n"
        "f2xm1\n"
        "fld1\n"
        "faddp\n"
        "fscale\n"
        "fstp %%st(1)\n"
        : "=t" ($result)
        : "0" ($value));
    return $result;
}
float MathAsm::pow_number(float $x, float $y)
{
    float $result;
    asm volatile(
        "fyl2x\n"
        "fld %%st(0)\n"
        "frndint\n"
        "fsub %%st,%%st(1)\n"
        "fxch\n"
        "fchs\n"
        "f2xm1\n"
        "fld1\n"
        "faddp\n"
        "fxch\n"
        "fld1\n"
        "fscale\n"
        "fstp %%st(1)\n"
        "fmulp\n"
        : "=t" ($result)
        : "0" ($x), "u" ($y)
        : "st(1)");
    return $result;
}
float MathAsm::logaritmNatural(float $value)
{
    float $result;
	asm volatile(
		"fldln2\n"
		"fxch\n"
		"fyl2x\n"
		: "=t" ($result)
		: "0" ($value));
	return $result;
}

float MathAsm::logaritmBase2(float $value)
{
    float $result;
	asm volatile(
		"fld1\n"
		"fld %%st(1)\n"
		"fyl2x\n"
		: "=t" ($result)
		: "0" ($value));
	return $result;
}

float MathAsm::logaritmBase10(float $value)
{
    float $result;
	asm volatile(
		"fldlg2\n"
		"fld %1\n"
		"fyl2x\n"
		: "=t" ($result)
		: "m" ($value));
	return $result;
}
int MathAsm::factorialNumber(int $value)
{
    int $result = 1;
    int $preResult = 1;
    for(int index = 2; index <= $value; index++){
        $result = multNumberInt($result, index);
    }
    return $result;
}

int MathAsm::multNumberInt(int $number, int $number1)
{
    int $result;
	asm volatile(
		"movl %1, %%eax;"
		"movl %2, %%ebx;"
		"imul %%ebx, %%eax;"
		"movl %%eax, %0;": "=g"($result): "g"($number), "g"($number1));
	return $result;
}









