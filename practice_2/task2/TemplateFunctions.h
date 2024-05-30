#pragma once
#ifndef TEMPLATEFUNCTIONS_H
#define TEMPLATE_FUNCTION_H

template <typename Type1>
double RoundToTwoDigits(Type1 value) {
	return ceil(value * 100) / 100;
}

#endif // TEMPLATE_FUNCTION_H