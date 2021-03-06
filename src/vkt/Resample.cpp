// This file is distributed under the MIT license.
// See the LICENSE file for details.

#include <vkt/config.h>

#include <vkt/Resample.hpp>

#include "macros.hpp"
#include "Resample_serial.hpp"

#if VKT_HAVE_CUDA
#include "Resample_cuda.hpp"
#endif

//-------------------------------------------------------------------------------------------------
// C++ API
//

namespace vkt
{
    VKTAPI Error Resample(
            StructuredVolume& dst,
            StructuredVolume& src,
            Filter filter
            )
    {
        VKT_CALL__(Resample, dst, src, filter);

        return NoError;
    }
}
