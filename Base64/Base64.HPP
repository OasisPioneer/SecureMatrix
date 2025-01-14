/*******************************************************************************
 * 作者: 龙森
 * 日期: 2025/1/14
 * 描述: Base64 编码与解码
 * 联系方式:
 * 邮箱: OasisPioneerStudio@Gmail.com
 * 电报: @OasisPioneer
 * GitHub: HTTPS://GitHub.com/OasisPioneer
 *
 * 本文件是 SecureMatrix 的一部分。
 * 
 * SecureMatrix 是自由软件：您可以重新分发它和/或修改
 * 它在遵循由自由软件基金会发布的GNU通用公共许可证的条款下，
 * 版本3或2任何后续版本。
 *
 * SecureMatrix 分发的目的是希望它能够有用，
 * 但没有任何保证；甚至没有适销性或特定用途的隐含保证。
 * 更多细节请参考GNU通用公共许可证。
 *
 * 您应该已经收到了GNU通用公共许可证的副本，
 * 如果没有，请参阅 <https://www.gnu.org/licenses/>。
 *
 * -----------------------------------------------------------------------------
 *
 * Author: Long Sen
 * Date: 2025/1/14
 * Description: Encoding and decoding
 * Contact Information:
 * Email: OasisPioneerStudio@Gmail.com
 * Telegram: @OasisPioneer
 * GitHub: HTTPS://GitHub.com/OasisPioneer
 *
 * This file is part of SecureMatrix.
 * 
 * SecureMatrix is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * 2 any later version.
 *
 * SecureMatrix is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with SecureMatrix.  If not, see <https://www.gnu.org/licenses/>.
 ******************************************************************************/



#ifndef BASE64_H
#define BASE64_H

#include <string>

class Base64
{
private:
    static bool is_base64(unsigned char c);
    static unsigned char Decode_char(unsigned char c);
    static std::string Encode(const unsigned char* bytes_to_Encode, unsigned int in_len);
    static std::string Decode(const unsigned char* bytes_to_Decode, unsigned int in_len);

public:
    static std::string Encode(const std::string& input);
    static std::string Decode(const std::string& input);
};

#endif