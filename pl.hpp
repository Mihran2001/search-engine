#ifndef pl_hpp
#define pl_hpp
#include <iostream>
#include <curl/curl.h>
#include <string>
#include <boost/regex.hpp>
#include "parser/parser.hpp"
using namespace std;

class PageInfo{
	private:
		string data;
		long http_status;
};

static size_t cb(void *data, size_t size, size_t nmemb, void *userp);
void Load(const string http);
#endif
