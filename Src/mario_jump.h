const char mario_jump_raw[] = {
  0x7f, 0x54, 0x5f, 0x54, 0x7f, 0x54, 0x5f, 0x54, 0x7f, 0x54, 0x5f, 0x54,
  0x7f, 0x54, 0x5f, 0x54, 0x7f, 0x54, 0x5f, 0x54, 0x7f, 0x54, 0x5f, 0x54,
  0x7f, 0x54, 0x5f, 0x54, 0x7f, 0x54, 0x5f, 0x54, 0x7f, 0x54, 0x5f, 0x54,
  0x7f, 0x54, 0x5f, 0x54, 0x78, 0x74, 0x5f, 0x54, 0x7f, 0x5c, 0x5f, 0x54,
  0x7f, 0x5c, 0x5f, 0x54, 0x7f, 0x5c, 0x5f, 0x54, 0x7f, 0x5c, 0x5f, 0x54,
  0x7f, 0x5c, 0x5f, 0x54, 0x7f, 0x5c, 0x5f, 0x54, 0x7f, 0x5c, 0x5f, 0x54,
  0x7f, 0x5c, 0x5f, 0x54, 0x7f, 0x5c, 0x5f, 0x54, 0x7f, 0x5c, 0x58, 0x6c,
  0x7f, 0x54, 0x5f, 0x54, 0x7f, 0x54, 0x5f, 0x54, 0x7f, 0x54, 0x5f, 0x54,
  0x58, 0x7c, 0x7f, 0xbe, 0x42, 0xfa, 0x43, 0xf2, 0xb4, 0x9b, 0xd5, 0x9b,
  0x7f, 0x54, 0x5f, 0x54, 0x7f, 0x54, 0x5f, 0x54, 0x31, 0xfe, 0x4e, 0xe5,
  0x77, 0xc5, 0x12, 0x94, 0x78, 0x74, 0x5f, 0x54, 0x7f, 0x5c, 0x5f, 0x54,
  0x7f, 0x5c, 0x5f, 0x54, 0x7f, 0x5c, 0x56, 0xdd, 0xaf, 0xa3, 0xa0, 0xf9,
  0xc0, 0xf9, 0xa0, 0xf9, 0xc0, 0xf9, 0xa0, 0xf1, 0xe0, 0xf9, 0x27, 0xfb,
  0x27, 0xfb, 0xe4, 0xf2, 0x65, 0xfb, 0x77, 0xc5, 0x11, 0x9c, 0x58, 0x6c,
  0x7f, 0x54, 0x5f, 0x54, 0x7f, 0x54, 0x5f, 0x54, 0x7f, 0x54, 0x5f, 0x54,
  0xb1, 0xe5, 0x68, 0x9b, 0x00, 0xd3, 0x00, 0xcb, 0x63, 0xf3, 0xa5, 0xfb,
  0x83, 0xeb, 0x01, 0xdb, 0xc7, 0xeb, 0xac, 0xfc, 0x26, 0xe4, 0x64, 0xcb,
  0xb2, 0x9c, 0x31, 0x8c, 0x78, 0x74, 0x5f, 0x54, 0x7f, 0x5c, 0x5f, 0x54,
  0x7f, 0x5c, 0x58, 0x6c, 0xbf, 0xbe, 0x69, 0xe5, 0x44, 0xc4, 0xc0, 0xb3,
  0x62, 0xcc, 0xc7, 0xf4, 0x28, 0xfd, 0xc5, 0xdc, 0x01, 0xcc, 0x2b, 0xf5,
  0x2f, 0xfe, 0x27, 0xd5, 0xe2, 0xb3, 0xe3, 0xa3, 0xa6, 0xbc, 0x58, 0x6c,
  0x7f, 0x54, 0x5f, 0x54, 0x7f, 0x54, 0x5f, 0x54, 0x37, 0xb6, 0xd6, 0xa5,
  0x64, 0xdc, 0xc6, 0xe4, 0xc0, 0xbb, 0xa5, 0xd4, 0x08, 0xfd, 0x09, 0xfd,
  0xe6, 0xec, 0x24, 0xcc, 0xc6, 0xec, 0x08, 0xf5, 0xc5, 0xdc, 0x23, 0xcc,
  0x67, 0xac, 0xea, 0xb4, 0x78, 0x74, 0x5f, 0x54, 0x7f, 0x5c, 0x5f, 0x54,
  0x7f, 0x5c, 0xb9, 0xce, 0xd5, 0xb5, 0x44, 0xd4, 0xc5, 0xec, 0xe0, 0xab,
  0xe0, 0xb3, 0x86, 0xec, 0x28, 0xfd, 0x09, 0xfd, 0xc7, 0xf4, 0xa1, 0xbb,
  0xe5, 0xe4, 0x09, 0xfd, 0x08, 0xfd, 0x15, 0xb5, 0x31, 0x94, 0x58, 0x6c,
  0x7f, 0x54, 0x5f, 0x54, 0x7f, 0x54, 0x5f, 0x54, 0x3a, 0x9e, 0x1b, 0x96,
  0x01, 0xbc, 0x63, 0xcc, 0xe7, 0xf4, 0xc7, 0xec, 0x08, 0xfd, 0x09, 0xfd,
  0x06, 0xe5, 0xe2, 0xc3, 0xe0, 0xb3, 0x21, 0xb4, 0x21, 0xc4, 0x22, 0xbc,
  0x16, 0x95, 0x54, 0x7c, 0x78, 0x74, 0x5f, 0x54, 0x7f, 0x5c, 0x5f, 0x54,
  0x7f, 0x5c, 0x5f, 0x54, 0x7f, 0x5c, 0x94, 0xee, 0x52, 0xee, 0x09, 0xfd,
  0x08, 0xfd, 0x09, 0xfd, 0x08, 0xfd, 0xe8, 0xf4, 0xa6, 0xec, 0xa6, 0xe4,
  0xa5, 0xec, 0x44, 0xbc, 0xe6, 0xd4, 0x5f, 0x9e, 0x9a, 0x64, 0x58, 0x6c,
  0x7f, 0x54, 0x5f, 0x54, 0x78, 0x6c, 0x1f, 0x9e, 0xef, 0xd5, 0xcf, 0xd5,
  0xee, 0xdd, 0x8d, 0xcd, 0x24, 0xec, 0xe4, 0xdb, 0x44, 0xdc, 0x45, 0xdc,
  0x64, 0xdc, 0x44, 0xd4, 0xa3, 0xeb, 0xc5, 0xeb, 0x6e, 0xcd, 0xb4, 0xee,
  0x7f, 0x54, 0x5f, 0x54, 0x78, 0x74, 0x5f, 0x54, 0x7f, 0x5c, 0x52, 0xde,
  0x49, 0x9c, 0xe0, 0xab, 0xe0, 0xb3, 0xe0, 0xab, 0xe0, 0xb3, 0x61, 0xcb,
  0x20, 0xc3, 0x20, 0xc3, 0x60, 0xcb, 0xc0, 0xb3, 0xc0, 0xb3, 0x80, 0xd2,
  0xc0, 0xda, 0xfd, 0xb5, 0x35, 0x84, 0x5f, 0x54, 0x7f, 0x5c, 0x58, 0x6c,
  0x7f, 0x54, 0x5f, 0x54, 0x41, 0xbc, 0xe1, 0xb3, 0x00, 0xb4, 0xe0, 0xab,
  0x00, 0xb4, 0xe0, 0xab, 0x00, 0xb4, 0xe0, 0xab, 0xa0, 0xda, 0x80, 0xda,
  0x80, 0xbb, 0x80, 0xbb, 0x20, 0xdb, 0xa0, 0xca, 0x7f, 0x54, 0x5f, 0x54,
  0x7f, 0x54, 0x5f, 0x54, 0x78, 0x74, 0x12, 0x94, 0x76, 0xc5, 0x48, 0xf5,
  0xc1, 0xc3, 0xe0, 0xab, 0xe0, 0xb3, 0xe0, 0xab, 0xe0, 0xb3, 0xe0, 0xab,
  0xe0, 0xb3, 0x20, 0xf2, 0x00, 0xea, 0xa0, 0xf9, 0xc0, 0xf9, 0xa0, 0xf9,
  0xc0, 0xf9, 0x5f, 0x54, 0x7f, 0x5c, 0x51, 0x84, 0x50, 0x8c, 0x58, 0x6c,
  0x31, 0x94, 0x77, 0xbd, 0x28, 0xfd, 0xa7, 0xec, 0x31, 0xfe, 0x8b, 0xcc,
  0xa0, 0xda, 0xa0, 0xda, 0x80, 0xcb, 0x20, 0xbb, 0x00, 0xea, 0xc3, 0xfa,
  0x24, 0xfb, 0xe0, 0xe1, 0x00, 0xea, 0x05, 0xfb, 0x08, 0xf4, 0xe9, 0xeb,
  0xe6, 0xc4, 0x23, 0xac, 0x78, 0x74, 0x36, 0x7c, 0x5e, 0xc6, 0x2c, 0xed,
  0x71, 0xfe, 0x6e, 0xfd, 0xc7, 0xcb, 0xc0, 0xf1, 0xe0, 0xf9, 0x40, 0xea,
  0x20, 0xe2, 0xc0, 0xf1, 0x41, 0xfa, 0x83, 0xfa, 0xe0, 0xf1, 0xc0, 0xe9,
  0x82, 0xfa, 0x81, 0xea, 0x60, 0xea, 0xe0, 0xab, 0x21, 0xbc, 0x58, 0x6c,
  0x7f, 0x54, 0x5f, 0x54, 0x93, 0xf6, 0x32, 0xee, 0x43, 0xcc, 0x61, 0xb3,
  0x00, 0xf2, 0xe0, 0xe9, 0xc0, 0xf9, 0xa0, 0xf1, 0xc0, 0xf9, 0xa0, 0xf1,
  0xc0, 0xf9, 0xa0, 0xf1, 0xc0, 0xf9, 0xa0, 0xf1, 0x00, 0xea, 0x41, 0xea,
  0x00, 0xb4, 0x22, 0xb4, 0x78, 0x74, 0x5f, 0x54, 0x7f, 0x5c, 0xf3, 0xfe,
  0x27, 0xa4, 0xc0, 0xb3, 0xc0, 0xb3, 0x40, 0xea, 0x00, 0xea, 0xa0, 0xf9,
  0xc0, 0xf9, 0xa0, 0xf9, 0xc0, 0xf9, 0x8e, 0x9a, 0x91, 0xbb, 0x5f, 0x54,
  0x7f, 0x5c, 0x5f, 0x54, 0x7f, 0x5c, 0x5f, 0x54, 0x7f, 0x5c, 0x58, 0x6c,
  0x7f, 0x54, 0x5f, 0x54, 0x00, 0xb4, 0x42, 0xb4, 0xe3, 0xd3, 0x41, 0xbb,
  0xc0, 0xf9, 0xa0, 0xf1, 0xc0, 0xf9, 0xa0, 0xf1, 0x22, 0xfa, 0x43, 0xfa,
  0x10, 0xa3, 0x93, 0xab, 0x7f, 0x54, 0x5f, 0x54, 0x7f, 0x54, 0x5f, 0x54,
  0x7f, 0x54, 0x5f, 0x54, 0x78, 0x74, 0x7f, 0x54, 0x5f, 0x54, 0x07, 0x94,
  0xb6, 0xff, 0x9c, 0xff, 0xd1, 0xd4, 0xc0, 0xf1, 0xa0, 0xf9, 0xc0, 0xf1,
  0xa0, 0xf9, 0x3f, 0xce, 0x16, 0x8c, 0x7f, 0x54, 0x5f, 0x54, 0x7f, 0x54,
  0x5f, 0x54, 0x7f, 0x54, 0x5f, 0x54, 0x7f, 0x54, 0x5f, 0x54, 0x59, 0x6c,
  0x7f, 0x5c, 0x7f, 0x54, 0x7f, 0x5c, 0x7f, 0x54, 0x7f, 0x5c, 0x7f, 0x54,
  0x7f, 0x5c, 0x7f, 0x54, 0x7f, 0x5c, 0x7f, 0x54, 0x7f, 0x5c, 0x7f, 0x54,
  0x7f, 0x5c, 0x7f, 0x54, 0x7f, 0x5c, 0x7f, 0x54, 0x7f, 0x5c, 0x7f, 0x54,
  0x7f, 0x5c, 0x7f, 0x54, 0x58, 0x74
};
unsigned int mario_jump_raw_len = 882;
