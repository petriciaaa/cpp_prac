#ifndef TEMPLATE_FUNCTION_H
#define TEMPLATE_FUNCTION_H

using namespace std;

template<typename Type> 
pair<Type, Type> ReduceNum(Type a, Type b, Type c, Type d) {
	return pair<Type, Type>(a * d + c * b, b * d);
}


#endif // TEMPLATE_FUNCTION_H
