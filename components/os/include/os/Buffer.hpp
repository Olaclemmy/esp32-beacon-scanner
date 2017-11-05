// Copyright (C) 2017 Rob Caelers <rob.caelers@gmail.com>
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#ifndef OS_BUFFER_HPP
#define OS_BUFFER_HPP

#include <string>

namespace os
{
  class Buffer
  {
  public:
    Buffer(std::string s) noexcept
      : data_(s.size() ? reinterpret_cast<uint8_t *>(&s[0]) : nullptr), size_(s.size())
    {
    }

    Buffer(uint8_t *data, std::size_t size) noexcept
      : data_(data), size_(size)
    {
    }

    uint8_t *data() const noexcept
    {
      return data_;
    }

    std::size_t size() const noexcept
    {
      return size_;
    }

  private:
    uint8_t *data_;
    std::size_t size_;
  };
}

#endif // OS_BUFFER_HPP
