#!/usr/bin/python3

import volkit as vkt

def main():
    dims = vkt.Vec3i()
    dims.x = 32
    dims.y = 32
    dims.z = 32

    dataFormat = vkt.DataFormat_UInt8
    volume1 = vkt.StructuredVolume(dims.x, dims.y, dims.z, dataFormat)

    # CPU rendering
    renderState = vkt.RenderState()
    renderState.renderAlgo = vkt.RenderAlgo_MultiScattering
    vkt.Render(volume1, renderState)

if __name__ == '__main__':
    main()
