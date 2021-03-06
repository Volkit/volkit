// This file is distributed under the MIT license.
// See the LICENSE file for details.

#pragma once

#include <vkt/linalg.hpp>
#include <vkt/StructuredVolume.hpp>

namespace vkt
{
    void FillRange_cuda(StructuredVolume& volume, Vec3i first, Vec3i last, float value);

} // vkt
