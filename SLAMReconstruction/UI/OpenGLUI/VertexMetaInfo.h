
#ifndef SLAMRECONSTRUCTION_VERTEXMETAINFO_H
#define SLAMRECONSTRUCTION_VERTEXMETAINFO_H

namespace gf {

#define Meta_Vert                  0x00
#define Meta_Vert_Index            0x01
#define Meta_Vert_Color            0x02
#define Meta_Vert_Color_Index      0x03
#define Meta_Vert_UV               0x04
#define Meta_Vert_UV_Index         0x05
#define Meta_Vert_Norm             0x08
#define Meta_Vert_Norm_Index       0x09
#define Meta_Vert_Color_Norm       0x0A
#define Meta_Vert_Color_Norm_Index 0x0B
#define Meta_Vert_Norm_UV          0x0C
#define Meta_Vert_Norm_UV_Index    0x0D

#define NumVertPerFace(x)          (x>>4)

    typedef struct VertMeta_ {
        unsigned char info;
    } VertMeta;
}


#endif //SLAMRECONSTRUCTION_VERTEXMETAINFO_H
