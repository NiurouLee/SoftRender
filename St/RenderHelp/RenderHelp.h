#ifndef _RENDER_HELP_H_
#define _RENDER_HELP_H_

#include <assert.h>
#include <math.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include <functional>
#include <initializer_list>
#include <iostream>
#include <map>
#include <ostream>
#include <sstream>
#include <stdexcept>
#include <vector>

//----
//-数学库：矢量定义
//----
// 通用矢量：N是矢量维度，T为数据类型
template <size_t N, typename T>
struct Vector {
  T m[N];  // 元素数组
  inline Vector() {
    for (size_t i = 0; i < N; i++) m[i] = T();
  }
  inline Vector(const T* ptr)
  {
    for (size_t i = 0; i < N; i++) m[i] = ptr[i];
  }
  inline Vector(const Vector<N,T>&u)
  {
    for (size_t i=0;i<N; i++)
    {
        
    }
  }
};

#endif