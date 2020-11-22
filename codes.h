
#include <stdint.h>

#define MAX_LEN_NAME_KEY 50
#define MAX_LEN_CODE 10

struct codes
{
  uint8_t id;
  char    key[MAX_LEN_NAME_KEY];
  char    code[MAX_LEN_CODE];
};


const struct codes code[] = {
  {1, "POWER KEY", "08D7000A"},
  {2, "1", "08D70011"},
  {3, "2", "08D70012"},
  {4, "3", "08D70013"},
  {5, "4", "08D70014"},
  {6, "5", "08D70015"},
  {7, "6", "08D70016"},
  {8, "7", "08D70017"},
  {9, "8", "08D70018"},
  {10, "9", "08D70019"},
  {11, "0", "08D70010"},
  {12, "TV/RADIO KEY", "08D7001E"},
  {13, "EPG KEY", "08D7000D"},
  {14, "PAGE DOWN KEY", "08D7001A"},
  {15, "PAGE UP KEY", "08D7000B"},
  {16, "UP ARROW KEY", "08D70000"},
  {17, "MENU KEY", "08D70007"},
  {18, "ZOOM KEY", "08D70021"},
  {19, "SAT KEY", "08D70043"},
  {20, "TV/AV KEY", "08D70023"},
  {21, "EXIT KEY", "08D7001D"},
  {22, "RECALL KEY", "08D70005"},
  {23, "DOWN ARROW KEY", "08D70001"},
  {24, "LEFT ARROW KEY", "08D70003"},
  {25, "RIGHT ARROW KEY", "08D70002"},
  {26, "RED COLOR KEY", "08D7001B"},
  {27, "GREEN COLOR KEY", "08D7000F"},
  {28, "YELLOW COLOR KEY", "08D70042"},
  {29, "BLUE COLOR KEY", "08D70006"},
  {30, "VOLUME UP KEY", "08D70008"},
  {31, "VOLUME DOWN KEY", "08D70009"},
  {32, "MUTE KEY", "08D7000C"},
  {33, "FAV KEY", "08D70024"},
  {34, "CH UP KEY", "08D7002B"},
  {35, "CH DOWN KEY", "08D7002C"},
  {36, "AUDIO KEY", "08D70034"},
  {37, "TEXT KEY", "08D70030"},
  {38, "SUBTITLE KEY", "08D70031"},
  {39, "REWIND KEY", "08D70032"},
  {40, "PLAY KEY", "08D70033"},
  {41, "FAST FORWARD KEY", "08D70050"},
  {42, "STOP KEY", "08D70038"},
  {43, "PAUSE KEY", "08D70039"},
  {44, "RECORD KEY", "08D70020"},
  {45, "A", "08D71001"},
  {46, "B", "08D71002"},
  {47, "C", "08D71003"},
  {48, "D", "08D71004"},
  {49, "E", "08D71005"},
  {50, "F", "08D71006"},
  {51, "G", "08D71007"},
  {52, "H", "08D71008"},
  {53, "I", "08D71009"},
  {54, "J", "08D7100A"},
  {55, "K", "08D7100B"},
  {56, "L", "08D7100C"},
  {57, "M", "08D7100D"},
  {58, "N", "08D7100E"},
  {59, "O", "08D7100F"},
  {60, "P", "08D71010"},
  {61, "Q", "08D71011"},
  {62, "R", "08D71012"},
  {63, "S", "08D71013"},
  {64, "T", "08D71014"},
  {65, "U", "08D71015"},
  {66, "V", "08D71016"},
  {67, "W", "08D71017"},
  {68, "X", "08D71018"},
  {69, "Y", "08D71019"},
  {70, "Z", "08D7101A"},
  {71, "!", "08D7101B"},
  {72, "@", "08D7101C"},
  {73, "#", "08D7101D"},
  {74, "$", "08D7101E"},
  {75, "%", "08D7101F"},
  {76, "^", "08D71020"},
  {77, "&", "08D71021"},
  {78, "*", "08D71022"},
  {79, "(", "08D71023"},
  {80, ")", "08D71024"},
  {81, "_", "08D71025"},
  {82, "+", "08D71026"},
  {83, "{", "08D71027"},
  {84, "}", "08D71028"},
  {85, "|", "08D71029"},
  {86, ":", "08D7102A"},
  {87, """""", "08D7102B"},
  {88, "?", "08D7102C"},
  {89, ">", "08D7102D"},
  {90, "<", "08D7102F"},
  {91, "0", "0"},
  {92, "a", "08D70101"},
  {93, "b", "08D70102"},
  {94, "c", "08D70103"},
  {95, "d", "08D70104"},
  {96, "e", "08D70105"},
  {97, "f", "08D70106"},
  {98, "g", "08D70107"},
  {99, "h", "08D70108"},
  {100, "i", "08D70109"},
  {101, "j", "08D7010A"},
  {102, "k", "08D7010B"},
  {103, "l", "08D7010C"},
  {104, "m", "08D7010D"},
  {105, "n", "08D7010E"},
  {106, "o", "08D7010F"},
  {107, "p", "08D70110"},
  {108, "q", "08D70111"},
  {109, "r", "08D70112"},
  {110, "s", "08D70113"},
  {111, "t", "08D70114"},
  {112, "u", "08D70115"},
  {113, "v", "08D70116"},
  {114, "w", "08D70117"},
  {115, "x", "08D70118"},
  {116, "y", "08D70119"},
  {117, "z", "08D7011A"},
  {118, "-", "08D70125"},
  {119, "=", "08D70126"},
  {120, "[", "08D70127"},
  {121, "]", "08D70128"},
  {122, "\\", "08D70129"},
  {123, ";", "08D7012A"},
  {124, "'", "08D7012B"},
  {125, "/", "08D7012C"},
  {126, ".", "08D7012D"},
  {127, """, "",08D7012F"},
  {128, "OK (ENTER)", "08D7001F"},
  {129, "PREVIOUS", "08D70A32"},
  {130, "NEXT", "08D70A50"},
  {131, "DEL", "08D7001B"},
  {132, "~", "08D70130"},
  {133, "€ ", "08D70131"},
  {134, "£ ", "08D70132"},
  {135, "¥ ", "08D70133"},
  {136, "· ", "08D70134"}
};
