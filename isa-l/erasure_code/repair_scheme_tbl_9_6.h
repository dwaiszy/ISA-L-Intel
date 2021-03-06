unsigned char parity[256];
unsigned char h_rtbl_tr[9][9][6];


unsigned char h_htbl[9][9][9] = {
{{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00},
    { 0x04, 0x71, 0xEC, 0xBA, 0x68, 0x00, 0x00, 0x00,  0x00},
    { 0x04, 0x71, 0x7C, 0xC6, 0xCD, 0x00, 0x00, 0x00,  0x00},
    { 0x06, 0xD4, 0x90, 0x6D, 0x6F, 0xC6, 0x52, 0x00,  0x00},
    { 0x04, 0x4E, 0x6F, 0x79, 0x9F, 0x00, 0x00, 0x00,  0x00},
    { 0x02, 0x7C, 0xCD, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00},
    { 0x04, 0x26, 0xEC, 0x4D, 0x19, 0x00, 0x00, 0x00,  0x00},
    { 0x04, 0x6F, 0x84, 0x56, 0xAB, 0x00, 0x00, 0x00,  0x00},
    { 0x04, 0x93, 0x84, 0x4B, 0x56, 0x00, 0x00, 0x00,  0x00}},


    {{ 0x02, 0x26, 0x9E, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00},
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00},
    { 0x04, 0x7C, 0x68, 0xCD, 0xFE, 0x00, 0x00, 0x00,  0x00},
    { 0x04, 0x38, 0x7C, 0xCD, 0x21, 0x00, 0x00, 0x00,  0x00},
    { 0x04, 0xB0, 0xDA, 0x28, 0xE0, 0x00, 0x00, 0x00,  0x00},
    { 0x04, 0x41, 0x1B, 0x4B, 0x59, 0x00, 0x00, 0x00,  0x00},
    { 0x04, 0x20, 0x8D, 0x52, 0x0C, 0x00, 0x00, 0x00,  0x00},
    { 0x04, 0x50, 0xDA, 0x12, 0xE0, 0x00, 0x00, 0x00,  0x00},
    { 0x06, 0x24, 0x50, 0xB5, 0xC6, 0x12, 0x51, 0x00,  0x00}},


    {{ 0x06, 0x38, 0x1C, 0x98, 0x93, 0xC5, 0xE0, 0x00,  0x00},
    { 0x04, 0x71, 0x26, 0x24, 0xB8, 0x00, 0x00, 0x00,  0x00},
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00},
    { 0x02, 0xB7, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00},
    { 0x04, 0x4C, 0x26, 0x70, 0xC8, 0x00, 0x00, 0x00,  0x00},
    { 0x06, 0x10, 0x88, 0x26, 0x49, 0xC6, 0xB8, 0x00,  0x00},
    { 0x04, 0x71, 0x93, 0x04, 0xCF, 0x00, 0x00, 0x00,  0x00},
    { 0x02, 0x6D, 0x94, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00},
    { 0x04, 0x6D, 0x94, 0xC8, 0xFE, 0x00, 0x00, 0x00,  0x00}},


    {{ 0x04, 0xDA, 0x17, 0xE5, 0x99, 0x00, 0x00, 0x00,  0x00},
    { 0x06, 0x69, 0xC6, 0x19, 0x55, 0xF5, 0xFC, 0x00,  0x00},
    { 0x04, 0x74, 0x9A, 0x0F, 0x8F, 0x00, 0x00, 0x00,  0x00},
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00},
    { 0x06, 0xC4, 0x1C, 0x23, 0x45, 0x55, 0xFA, 0x00,  0x00},
    { 0x04, 0xF8, 0x19, 0xF5, 0x8F, 0x00, 0x00, 0x00,  0x00},
    { 0x04, 0x47, 0x8B, 0xC1, 0xFC, 0x00, 0x00, 0x00,  0x00},
    { 0x04, 0x76, 0xB7, 0xFA, 0x7D, 0x00, 0x00, 0x00,  0x00},
    { 0x04, 0x91, 0x49, 0x76, 0xFA, 0x00, 0x00, 0x00,  0x00}},


    {{ 0x02, 0x09, 0x53, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00},
    { 0x02, 0xDA, 0xF2, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00},
    { 0x04, 0xEE, 0x71, 0x4E, 0xCB, 0x00, 0x00, 0x00,  0x00},
    { 0x06, 0x71, 0x38, 0x0E, 0x76, 0xD8, 0x6C, 0x00,  0x00},
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00},
    { 0x04, 0x91, 0x0E, 0x4E, 0x6C, 0x00, 0x00, 0x00,  0x00},
    { 0x04, 0x4C, 0xB7, 0x3C, 0x0B, 0x00, 0x00, 0x00,  0x00},
    { 0x04, 0xE2, 0x74, 0xE3, 0x83, 0x00, 0x00, 0x00,  0x00},
    { 0x04, 0x1D, 0xB7, 0xD8, 0x0B, 0x00, 0x00, 0x00,  0x00}},


    {{ 0x06, 0x3A, 0x88, 0x38, 0x5F, 0x9F, 0xFE, 0x00,  0x00},
    { 0x04, 0x24, 0xE3, 0x83, 0x57, 0x00, 0x00, 0x00,  0x00},
    { 0x04, 0xDA, 0x68, 0xFD, 0x40, 0x00, 0x00, 0x00,  0x00},
    { 0x04, 0x71, 0x1B, 0xB9, 0x18, 0x00, 0x00, 0x00,  0x00},
    { 0x06, 0x88, 0x98, 0x93, 0x24, 0xB4, 0xE0, 0x00,  0x00},
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00},
    { 0x04, 0x6A, 0xC2, 0x4B, 0xA2, 0x00, 0x00, 0x00,  0x00},
    { 0x06, 0x81, 0x24, 0x04, 0x8D, 0xAC, 0xFE, 0x00,  0x00},
    { 0x04, 0x88, 0x26, 0x49, 0x5F, 0x00, 0x00, 0x00,  0x00}},



    {{ 0x06, 0x1A, 0xEE, 0x26, 0x24, 0x55, 0x3D, 0x00,  0x00},
    { 0x04, 0x3A, 0xB0, 0xE2, 0x75, 0x00, 0x00, 0x00,  0x00},
    { 0x04, 0x1D, 0xB7, 0xD8, 0xBC, 0x00, 0x00, 0x00,  0x00},
    { 0x04, 0x10, 0x03, 0xB7, 0x1B, 0x00, 0x00, 0x00,  0x00},
    { 0x02, 0x09, 0x53, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00},
    { 0x04, 0x3A, 0xB0, 0xE2, 0x97, 0x00, 0x00, 0x00,  0x00},
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00},
    { 0x06, 0x71, 0x74, 0xB5, 0x61, 0x95, 0x8F, 0x00,  0x00},
    { 0x04, 0x74, 0x69, 0x61, 0xD8, 0x00, 0x00, 0x00,  0x00}},


    {{ 0x04, 0xD9, 0x68, 0xA5, 0xFE, 0x00, 0x00, 0x00,  0x00},
    { 0x06, 0x88, 0x38, 0xA9, 0xF7, 0xAB, 0x01, 0x00,  0x00},
    { 0x04, 0xDA, 0x6D, 0x94, 0xF2, 0x00, 0x00, 0x00,  0x00},
    { 0x04, 0x74, 0x0D, 0x6F, 0x7A, 0x00, 0x00, 0x00,  0x00},
    { 0x04, 0x6D, 0x7B, 0xFB, 0x02, 0x00, 0x00, 0x00,  0x00},
    { 0x04, 0xF7, 0xAC, 0xFE, 0x01, 0x00, 0x00, 0x00,  0x00},
    { 0x04, 0x8D, 0xB4, 0x0C, 0xAB, 0x00, 0x00, 0x00,  0x00},
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00},
    { 0x04, 0x6D, 0x14, 0xF9, 0x02, 0x00, 0x00, 0x00,  0x00}},


    {{ 0x04, 0x33, 0x68, 0xEA, 0xFE, 0x00, 0x00, 0x00, 0x00},
    { 0x04, 0xC0, 0x49, 0xC6, 0xAE, 0x00, 0x00, 0x00,  0x00},
    { 0x06, 0x71, 0x24, 0x4A, 0x0C, 0xFC, 0xFE, 0x00,  0x00},
    { 0x04, 0x91, 0x07, 0xB4, 0xA7, 0x00, 0x00, 0x00,  0x00},
    { 0x04, 0xB7, 0x4A, 0xBC, 0xFC, 0x00, 0x00, 0x00,  0x00},
    { 0x06, 0x1A, 0xEE, 0x38, 0x49, 0xD8, 0xAE, 0x00,  0x00},
    { 0x06, 0x88, 0x38, 0xDA, 0xD8, 0x25, 0x28, 0x00,  0x00},
    { 0x04, 0xD6, 0x96, 0xA9, 0x14, 0x00, 0x00, 0x00,  0x00},
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00}}
};


unsigned char h_rtbl[9][9][8] = {
{{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
,
{0x00, 0x00, 0x01, 0x04, 0x00, 0x00, 0x0D, 0x0E}
,
{0x02, 0x08, 0x04, 0x0F, 0x0A, 0x02, 0x0C, 0x05}
,
{0x01, 0x03, 0x23, 0x08, 0x2C, 0x11, 0x23, 0x08}
,
{0x00, 0x00, 0x02, 0x04, 0x0A, 0x05, 0x0B, 0x0C}
,
{0x00, 0x00, 0x01, 0x02, 0x03, 0x01, 0x01, 0x02}
,
{0x00, 0x00, 0x08, 0x0A, 0x00, 0x00, 0x04, 0x03}
,
{0x02, 0x04, 0x01, 0x0E, 0x00, 0x00, 0x01, 0x0E}
,
{0x02, 0x08, 0x0C, 0x05, 0x00, 0x00, 0x02, 0x08}}
,
{{0x00, 0x00, 0x02, 0x03, 0x00, 0x00, 0x00, 0x00}
,
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
,
{0x01, 0x04, 0x07, 0x0C, 0x00, 0x00, 0x04, 0x05}
,
{0x02, 0x04, 0x07, 0x08, 0x00, 0x00, 0x00, 0x00}
,
{0x00, 0x00, 0x02, 0x04, 0x00, 0x00, 0x03, 0x0F}
,
{0x04, 0x05, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0A}
,
{0x02, 0x08, 0x0C, 0x0D, 0x0C, 0x0D, 0x0D, 0x01}
,
{0x04, 0x05, 0x02, 0x0E, 0x0B, 0x0D, 0x02, 0x0E}
,
{0x10, 0x12, 0x04, 0x20, 0x08, 0x2D, 0x3B, 0x07}},

{{0x20, 0x04, 0x01, 0x14, 0x3D, 0x2A, 0x0C, 0x0B}
,
{0x08, 0x02, 0x01, 0x0E, 0x07, 0x03, 0x0C, 0x05}
,
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
,
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x01}
,
{0x04, 0x01, 0x00, 0x00, 0x0C, 0x02, 0x00, 0x00}
,
{0x20, 0x04, 0x06, 0x08, 0x34, 0x07, 0x20, 0x04}
,
{0x00, 0x00, 0x08, 0x0A, 0x06, 0x03, 0x00, 0x00}
,
{0x02, 0x03, 0x03, 0x01, 0x03, 0x01, 0x00, 0x00}
,
{0x02, 0x03, 0x03, 0x01, 0x04, 0x0A, 0x00, 0x00}
}
,
{{0x00, 0x00, 0x08, 0x0A, 0x06, 0x01, 0x0F, 0x0C}
,
{0x10, 0x14, 0x05, 0x0C, 0x2D, 0x12, 0x3A, 0x21}
,
{0x04, 0x02, 0x00, 0x00, 0x08, 0x07, 0x0A, 0x01}
,
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
,
{0x04, 0x08, 0x14, 0x34, 0x15, 0x2B, 0x24, 0x1C}
,
{0x04, 0x06, 0x06, 0x02, 0x08, 0x03, 0x00, 0x00}
,
{0x01, 0x02, 0x00, 0x00, 0x00, 0x00, 0x04, 0x0B}
,
{0x04, 0x01, 0x00, 0x00, 0x09, 0x02, 0x01, 0x05}
,
{0x08, 0x04, 0x04, 0x0C, 0x01, 0x0B, 0x01, 0x0B}
}
,
{{0x02, 0x01, 0x00, 0x00, 0x01, 0x03, 0x01, 0x03}
,
{0x00, 0x00, 0x00, 0x00, 0x02, 0x01, 0x02, 0x01}
,
{0x00, 0x00, 0x08, 0x02, 0x04, 0x07, 0x00, 0x00}
,
{0x04, 0x20, 0x04, 0x20, 0x25, 0x30, 0x0D, 0x26}
,
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
,
{0x00, 0x00, 0x02, 0x08, 0x04, 0x07, 0x00, 0x00}
,
{0x08, 0x02, 0x0A, 0x08, 0x03, 0x0E, 0x00, 0x00}
,
{0x00, 0x00, 0x08, 0x0C, 0x05, 0x0F, 0x05, 0x0F}
,
{0x00, 0x00, 0x08, 0x02, 0x09, 0x06, 0x09, 0x06}
}
,
{{0x08, 0x02, 0x04, 0x0D, 0x05, 0x0B, 0x1B, 0x28}
,
{0x04, 0x06, 0x0E, 0x03, 0x00, 0x00, 0x00, 0x00}
,
{0x04, 0x08, 0x0E, 0x03, 0x06, 0x0F, 0x06, 0x0F}
,
{0x08, 0x0A, 0x0E, 0x0F, 0x0E, 0x0F, 0x0B, 0x0C}
,
{0x20, 0x02, 0x24, 0x2C, 0x16, 0x03, 0x2E, 0x2A}
,
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
,
{0x08, 0x09, 0x00, 0x00, 0x09, 0x01, 0x02, 0x0E}
,
{0x00, 0x00, 0x01, 0x08, 0x04, 0x11, 0x28, 0x2A}
,
{0x00, 0x00, 0x08, 0x01, 0x05, 0x0E, 0x00, 0x00}
}
,
{{0x01, 0x02, 0x23, 0x33, 0x1B, 0x36, 0x29, 0x24}
,
{0x02, 0x03, 0x08, 0x0C, 0x07, 0x09, 0x00, 0x00}
,
{0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x06, 0x0D}
,
{0x02, 0x08, 0x04, 0x0D, 0x02, 0x08, 0x02, 0x08}
,
{0x01, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
,
{0x02, 0x03, 0x00, 0x00, 0x0B, 0x05, 0x07, 0x0D}
,
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
,
{0x08, 0x0A, 0x12, 0x32, 0x1C, 0x25, 0x00, 0x00}
,
{0x04, 0x05, 0x00, 0x00, 0x04, 0x05, 0x08, 0x0B}
}
,
{{0x08, 0x0C, 0x0C, 0x04, 0x0D, 0x0A, 0x00, 0x00}
,
{0x08, 0x20, 0x00, 0x00, 0x04, 0x09, 0x10, 0x32}
,
{0x08, 0x01, 0x0A, 0x05, 0x00, 0x00, 0x00, 0x00}
,
{0x02, 0x0A, 0x00, 0x00, 0x0B, 0x05, 0x00, 0x00}
,
{0x04, 0x06, 0x06, 0x02, 0x0C, 0x01, 0x08, 0x07}
,
{0x01, 0x08, 0x04, 0x03, 0x00, 0x00, 0x04, 0x03}
,
{0x04, 0x05, 0x08, 0x0B, 0x0D, 0x0A, 0x0B, 0x03}
,
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
,
{0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x08, 0x06}
}
,
{{0x04, 0x05, 0x00, 0x00, 0x00, 0x00, 0x06, 0x0A}
,
{0x02, 0x0A, 0x0A, 0x08, 0x04, 0x05, 0x0D, 0x03}
,
{0x10, 0x14, 0x08, 0x19, 0x0F, 0x24, 0x36, 0x0E}
,
{0x00, 0x00, 0x04, 0x08, 0x02, 0x09, 0x0D, 0x03}
,
{0x08, 0x0A, 0x0C, 0x0F, 0x0D, 0x0B, 0x0B, 0x06}
,
{0x08, 0x28, 0x29, 0x22, 0x2B, 0x21, 0x18, 0x05}
,
{0x04, 0x20, 0x34, 0x35, 0x16, 0x28, 0x39, 0x3B}
,
{0x02, 0x08, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0C}
,
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
}
};

unsigned char h_dtbl[9][8] =
{
    { 78, 147, 212, 102, 26, 174, 184, 155 },
    { 129, 141, 197, 81, 107, 229, 10, 79 },
    { 36, 160, 25, 201, 100, 3, 82, 243 },
    { 97, 170, 199, 224, 154, 245, 51, 89 },
    { 168, 122, 63, 216, 56, 192, 116, 226 },
    { 10, 79, 233, 15, 3, 103, 134, 149 },
    { 242, 119, 182, 171, 180, 26, 78, 147 },
    { 123, 4, 33, 9, 124, 28, 242, 119 },
    { 224, 39, 117, 52, 223, 255, 96, 124 } ,
};


