// This file is distributed under the MIT license.
// See the LICENSE file for details.

#pragma once

#include <cstddef>
#include <cstdint>

// Shared header for VKTAPI
#include <vkt/Compiler.h>

namespace vkt
{
    /*! Boolean */
    typedef uint8_t Bool;
    static constexpr Bool False = 0;
    static constexpr Bool True  = 1;

    /*! Error constants */
    enum Error
    {
        InvalidValue      = -1,
        NoError           =  0,
        InvalidDataSource =  1,
        ReadError         =  2,
        WriteError        =  3,
    };

    enum class ColorFormat
    {
        Unspecified,

        R8,
        RG8,
        RGB8,
        RGBA8,
        R16UI,
        RG16UI,
        RGB16UI,
        RGBA16UI,
        R32UI,
        RG32UI,
        RGB32UI,
        RGBA32UI,
        R32F,
        RG32F,
        RGB32F,
        RGBA32F,

        // Keep last!
        Count,
    };

    enum class DataFormat
    {
        Unspecified,

        Int8,
        Int16,
        Int32,
        UInt8,
        UInt16,
        UInt32,
        Float32,

        // Keep last!
        Count,
    };


    enum class OpenMode
    {
        Read,
        Write,
        ReadWrite,
    };

    /*!
     * @brief  Data source base class for file I/O
     */
    class DataSource
    {
    public:
        virtual ~DataSource() {}
        virtual std::size_t read(char* buf, std::size_t len) = 0;
        virtual std::size_t write(char const* buf, std::size_t len) = 0;
        virtual bool seek(std::size_t pos) = 0;
        virtual bool flush() = 0;
        virtual bool good() const = 0;

    };

} // vkt
