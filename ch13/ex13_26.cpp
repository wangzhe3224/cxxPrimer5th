/*
  ex13_26.cpp
  
  Exercise 13.26

  Created by Wang Zhe on Mon Aug 17 14:56:33 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include "ex13_26.h"

ConstStrBlobPtr StrBlob::begin() const // should add const
{
    return ConstStrBlobPtr(*this);
}
ConstStrBlobPtr StrBlob::end() const // should add const
{
    return ConstStrBlobPtr(*this, data->size());
}

StrBlob& StrBlob::operator=(const StrBlob& sb)
{
    data = std::make_shared<vector<string>>(*sb.data);
    return *this;
}

int main()
{
    return 0;
}
