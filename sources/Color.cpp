#include "Color.h"
#include<windows.h>

void Color::changer (char k[])
{
    switch(k[0])
    {
        case '0': { switch(k[1])
                            {
                                case '1' : system("COLOR 01"); break;
                                case '2' : system("COLOR 02"); break;
                                case '3' : system("COLOR 03"); break;
                                case '4' : system("COLOR 04"); break;
                                case '5' : system("COLOR 05"); break;
                                case '6' : system("COLOR 06"); break;
                                case '7' : system("COLOR 07"); break;
                                case '8' : system("COLOR 08"); break;
                                case '9' : system("COLOR 09"); break;
                                case 'A' : system("COLOR 0A"); break;
                                case 'B' : system("COLOR 0B"); break;
                                case 'C' : system("COLOR 0C"); break;
                                case 'D' : system("COLOR 0D"); break;
                                case 'E' : system("COLOR 0E"); break;
                                case 'F' : system("COLOR 0F"); break;
                            }
                    } break;
        case '1' :  { switch(k[1])
                            {
                                case '0' : system("COLOR 10"); break;
                                case '2' : system("COLOR 12"); break;
                                case '3' : system("COLOR 13"); break;
                                case '4' : system("COLOR 14"); break;
                                case '5' : system("COLOR 15"); break;
                                case '6' : system("COLOR 16"); break;
                                case '7' : system("COLOR 17"); break;
                                case '8' : system("COLOR 18"); break;
                                case '9' : system("COLOR 19"); break;
                                case 'A' : system("COLOR 1A"); break;
                                case 'B' : system("COLOR 1B"); break;
                                case 'C' : system("COLOR 1C"); break;
                                case 'D' : system("COLOR 1D"); break;
                                case 'E' : system("COLOR 1E"); break;
                                case 'F' : system("COLOR 1F"); break;
                            }
                    } break;
        case '2'  :   { switch(k[1])
                            {
                                case '0' : system("COLOR 20"); break;
                                case '1' : system("COLOR 21"); break;
                                case '3' : system("COLOR 23"); break;
                                case '4' : system("COLOR 24"); break;
                                case '5' : system("COLOR 25"); break;
                                case '6' : system("COLOR 26"); break;
                                case '7' : system("COLOR 27"); break;
                                case '8' : system("COLOR 28"); break;
                                case '9' : system("COLOR 29"); break;
                                case 'A' : system("COLOR 2A"); break;
                                case 'B' : system("COLOR 2B"); break;
                                case 'C' : system("COLOR 2C"); break;
                                case 'D' : system("COLOR 2D"); break;
                                case 'E' : system("COLOR 2E"); break;
                                case 'F' : system("COLOR 2F"); break;
                            }
                    } break;
        case '3'  :   { switch(k[1])
                            {
                                case '0' : system("COLOR 30"); break;
                                case '1' : system("COLOR 31"); break;
                                case '2' : system("COLOR 32"); break;
                                case '4' : system("COLOR 34"); break;
                                case '5' : system("COLOR 35"); break;
                                case '6' : system("COLOR 36"); break;
                                case '7' : system("COLOR 37"); break;
                                case '8' : system("COLOR 38"); break;
                                case '9' : system("COLOR 39"); break;
                                case 'A' : system("COLOR 3A"); break;
                                case 'B' : system("COLOR 3B"); break;
                                case 'C' : system("COLOR 3C"); break;
                                case 'D' : system("COLOR 3D"); break;
                                case 'E' : system("COLOR 3E"); break;
                                case 'F' : system("COLOR 3F"); break;
                            }
                    } break;
        case '4'  :   { switch(k[1])
                            {
                                case '0' : system("COLOR 40"); break;
                                case '1' : system("COLOR 41"); break;
                                case '2' : system("COLOR 42"); break;
                                case '3' : system("COLOR 43"); break;
                                case '5' : system("COLOR 45"); break;
                                case '6' : system("COLOR 46"); break;
                                case '7' : system("COLOR 47"); break;
                                case '8' : system("COLOR 48"); break;
                                case '9' : system("COLOR 49"); break;
                                case 'A' : system("COLOR 4A"); break;
                                case 'B' : system("COLOR 4B"); break;
                                case 'C' : system("COLOR 4C"); break;
                                case 'D' : system("COLOR 4D"); break;
                                case 'E' : system("COLOR 4E"); break;
                                case 'F' : system("COLOR 4F"); break;
                            }
                    } break;
        case '5'   :  { switch(k[1])
                            {
                                case '0' : system("COLOR 50"); break;
                                case '1' : system("COLOR 51"); break;
                                case '2' : system("COLOR 52"); break;
                                case '3' : system("COLOR 53"); break;
                                case '4' : system("COLOR 54"); break;
                                case '6' : system("COLOR 56"); break;
                                case '7' : system("COLOR 57"); break;
                                case '8' : system("COLOR 58"); break;
                                case '9' : system("COLOR 59"); break;
                                case 'A' : system("COLOR 5A"); break;
                                case 'B' : system("COLOR 5B"); break;
                                case 'C' : system("COLOR 5C"); break;
                                case 'D' : system("COLOR 5D"); break;
                                case 'E' : system("COLOR 5E"); break;
                                case 'F' : system("COLOR 5F"); break;
                            }
                    } break;
        case '6'  :  { switch(k[1])
                            {
                                case '0' : system("COLOR 60"); break;
                                case '1' : system("COLOR 61"); break;
                                case '2' : system("COLOR 62"); break;
                                case '3' : system("COLOR 63"); break;
                                case '4' : system("COLOR 64"); break;
                                case '5' : system("COLOR 65"); break;
                                case '7' : system("COLOR 67"); break;
                                case '8' : system("COLOR 68"); break;
                                case '9' : system("COLOR 69"); break;
                                case 'A' : system("COLOR 6A"); break;
                                case 'B' : system("COLOR 6B"); break;
                                case 'C' : system("COLOR 6C"); break;
                                case 'D' : system("COLOR 6D"); break;
                                case 'E' : system("COLOR 6E"); break;
                                case 'F' : system("COLOR 6F"); break;
                            }
                    } break;
        case '7'  :  { switch(k[1])
                            {
                                case '0' : system("COLOR 70"); break;
                                case '1' : system("COLOR 71"); break;
                                case '2' : system("COLOR 72"); break;
                                case '3' : system("COLOR 73"); break;
                                case '4' : system("COLOR 74"); break;
                                case '5' : system("COLOR 75"); break;
                                case '6' : system("COLOR 76"); break;
                                case '8' : system("COLOR 78"); break;
                                case '9' : system("COLOR 79"); break;
                                case 'A' : system("COLOR 7A"); break;
                                case 'B' : system("COLOR 7B"); break;
                                case 'C' : system("COLOR 7C"); break;
                                case 'D' : system("COLOR 7D"); break;
                                case 'E' : system("COLOR 7E"); break;
                                case 'F' : system("COLOR 7F"); break;
                            }
                    } break;
        case '8'  : { switch(k[1])
                            {
                                case '0' : system("COLOR 80"); break;
                                case '1' : system("COLOR 81"); break;
                                case '2' : system("COLOR 82"); break;
                                case '3' : system("COLOR 83"); break;
                                case '4' : system("COLOR 84"); break;
                                case '5' : system("COLOR 85"); break;
                                case '6' : system("COLOR 86"); break;
                                case '7' : system("COLOR 87"); break;
                                case '9' : system("COLOR 89"); break;
                                case 'A' : system("COLOR 8A"); break;
                                case 'B' : system("COLOR 8B"); break;
                                case 'C' : system("COLOR 8C"); break;
                                case 'D' : system("COLOR 8D"); break;
                                case 'E' : system("COLOR 8E"); break;
                                case 'F' : system("COLOR 8F"); break;
                            }
                    }break;
        case '9'   :  { switch(k[1])
                            {
                                case '0' : system("COLOR 90"); break;
                                case '1' : system("COLOR 91"); break;
                                case '2' : system("COLOR 92"); break;
                                case '3' : system("COLOR 93"); break;
                                case '4' : system("COLOR 94"); break;
                                case '5' : system("COLOR 95"); break;
                                case '6' : system("COLOR 96"); break;
                                case '7' : system("COLOR 97"); break;
                                case '8' : system("COLOR 98"); break;
                                case 'A' : system("COLOR 9A"); break;
                                case 'B' : system("COLOR 9B"); break;
                                case 'C' : system("COLOR 9C"); break;
                                case 'D' : system("COLOR 9D"); break;
                                case 'E' : system("COLOR 9E"); break;
                                case 'F' : system("COLOR 9F"); break;
                            }

                     } break;
        case 'A'   :  { switch(k[1])
                            {
                                case '0' : system("COLOR A0"); break;
                                case '1' : system("COLOR A1"); break;
                                case '2' : system("COLOR A2"); break;
                                case '3' : system("COLOR A3"); break;
                                case '4' : system("COLOR A4"); break;
                                case '5' : system("COLOR A5"); break;
                                case '6' : system("COLOR A6"); break;
                                case '7' : system("COLOR A7"); break;
                                case '8' : system("COLOR A8"); break;
                                case '9' : system("COLOR A9"); break;
                                case 'B' : system("COLOR AB"); break;
                                case 'C' : system("COLOR AC"); break;
                                case 'D' : system("COLOR AD"); break;
                                case 'E' : system("COLOR AE"); break;
                                case 'F' : system("COLOR AF"); break;
                            }
                    } break;
        case 'B' :   { switch(k[1])
                            {
                                case '0' : system("COLOR B0"); break;
                                case '1' : system("COLOR B1"); break;
                                case '2' : system("COLOR B2"); break;
                                case '3' : system("COLOR B3"); break;
                                case '4' : system("COLOR B4"); break;
                                case '5' : system("COLOR B5"); break;
                                case '6' : system("COLOR B6"); break;
                                case '7' : system("COLOR B7"); break;
                                case '8' : system("COLOR B8"); break;
                                case '9' : system("COLOR B9"); break;
                                case 'A' : system("COLOR BA"); break;
                                case 'C' : system("COLOR BC"); break;
                                case 'D' : system("COLOR BD"); break;
                                case 'E' : system("COLOR BE"); break;
                                case 'F' : system("COLOR BF"); break;
                            }
                    } break;
            case 'C'  :   { switch(k[1])
                            {
                                case '0' : system("COLOR C0"); break;
                                case '1' : system("COLOR C1"); break;
                                case '2' : system("COLOR C2"); break;
                                case '3' : system("COLOR C3"); break;
                                case '4' : system("COLOR C4"); break;
                                case '5' : system("COLOR C5"); break;
                                case '6' : system("COLOR C6"); break;
                                case '7' : system("COLOR C7"); break;
                                case '8' : system("COLOR C8"); break;
                                case '9' : system("COLOR C9"); break;
                                case 'A' : system("COLOR CA"); break;
                                case 'B' : system("COLOR CB"); break;
                                case 'D' : system("COLOR CD"); break;
                                case 'E' : system("COLOR CE"); break;
                                case 'F' : system("COLOR CF"); break;
                            }
                    } break;
            case 'D':      { switch(k[1])
                            {
                                case '0' : system("COLOR D0"); break;
                                case '1' : system("COLOR D1"); break;
                                case '2' : system("COLOR D2"); break;
                                case '3' : system("COLOR D3"); break;
                                case '4' : system("COLOR D4"); break;
                                case '5' : system("COLOR D5"); break;
                                case '6' : system("COLOR D6"); break;
                                case '7' : system("COLOR D7"); break;
                                case '8' : system("COLOR D8"); break;
                                case '9' : system("COLOR D9"); break;
                                case 'A' : system("COLOR DA"); break;
                                case 'B' : system("COLOR DB"); break;
                                case 'C' : system("COLOR DC"); break;
                                case 'E' : system("COLOR DE"); break;
                                case 'F' : system("COLOR DF"); break;
                            }
                    } break;
            case 'E'   :        { switch(k[1])
                            {
                                case '0' : system("COLOR E0"); break;
                                case '1' : system("COLOR E1"); break;
                                case '2' : system("COLOR E2"); break;
                                case '3' : system("COLOR E3"); break;
                                case '4' : system("COLOR E4"); break;
                                case '5' : system("COLOR E5"); break;
                                case '6' : system("COLOR E6"); break;
                                case '7' : system("COLOR E7"); break;
                                case '8' : system("COLOR E8"); break;
                                case '9' : system("COLOR E9"); break;
                                case 'A' : system("COLOR EA"); break;
                                case 'B' : system("COLOR EB"); break;
                                case 'C' : system("COLOR EC"); break;
                                case 'D' : system("COLOR ED"); break;
                                case 'F' : system("COLOR EF"); break;
                            }
                    } break;

            case 'F'  :       { switch(k[1])
                            {
                                case '0' : system("COLOR F0"); break;
                                case '1' : system("COLOR F1"); break;
                                case '2' : system("COLOR F2"); break;
                                case '3' : system("COLOR F3"); break;
                                case '4' : system("COLOR F4"); break;
                                case '5' : system("COLOR F5"); break;
                                case '6' : system("COLOR F6"); break;
                                case '7' : system("COLOR F7"); break;
                                case '8' : system("COLOR F8"); break;
                                case '9' : system("COLOR F9"); break;
                                case 'A' : system("COLOR FA"); break;
                                case 'B' : system("COLOR FB"); break;
                                case 'C' : system("COLOR FC"); break;
                                case 'D' : system("COLOR FD"); break;
                                case 'E' : system("COLOR FE"); break;
                            }
                    } break;
    }
}
