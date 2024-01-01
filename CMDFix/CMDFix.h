#pragma once
#include <format>
#include <iostream>
#include <Windows.h>

std::string GetFormatStr(const char* text) {
	std::string echocmd = (std::string)"echo ";
	std::string format_text = std::format("{}", text);
	std::string get_str = echocmd + format_text;
	return get_str;
}

void PrintCMD(const char* txt) 
{
	system(GetFormatStr(txt).c_str());
}