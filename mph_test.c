#include <stdio.h>
#include <string.h>
#include <stdint.h>

#define ADLAM                                            1526
#define ADLM                                             2788
#define AEGEANNUMBERS                                    1044
#define AGE__NA                                          3137
#define AGE__UNASSIGNED                                  1323
#define AGE__V100                                        1033
#define AGE__V11                                          423
#define AGE__V20                                         2754
#define AGE__V21                                          356
#define AGE__V30                                         2769
#define AGE__V31                                         2403
#define AGE__V32                                          853
#define AGE__V40                                         3573
#define AGE__V41                                         1169
#define AGE__V50                                         3478
#define AGE__V51                                         1929
#define AGE__V52                                         2635
#define AGE__V60                                         3485
#define AGE__V61                                         1083
#define AGE__V62                                         2630
#define AGE__V63                                          230
#define AGE__V70                                          339
#define AGE__V80                                         1139
#define AGE__V90                                         1962
#define AGHB                                             1444
#define AHEX                                              409
#define AHEX__F                                          2123
#define AHEX__FALSE                                       510
#define AHEX__N                                          2614
#define AHEX__NO                                         3082
#define AHEX__T                                          1914
#define AHEX__TRUE                                       3710
#define AHEX__Y                                          2686
#define AHEX__YES                                        2837
#define AHOM                                             1687
#define ALCHEMICAL                                        296
#define ALCHEMICALSYMBOLS                                2121
#define ALL                                              2296
#define ALNUM                                            2690
#define ALPHA                                            3859
#define ALPHABETIC                                       3505
#define ALPHABETICPF                                     3615
#define ALPHABETICPRESENTATIONFORMS                       236
#define ALPHA__F                                         1387
#define ALPHA__FALSE                                     2805
#define ALPHA__N                                          872
#define ALPHA__NO                                        2322
#define ALPHA__T                                         3279
#define ALPHA__TRUE                                      3261
#define ALPHA__Y                                         3449
#define ALPHA__YES                                       1381
#define ANATOLIANHIEROGLYPHS                             2001
#define ANCIENTGREEKMUSIC                                2235
#define ANCIENTGREEKMUSICALNOTATION                      1289
#define ANCIENTGREEKNUMBERS                              2783
#define ANCIENTSYMBOLS                                   2957
#define ANY                                              2938
#define ARAB                                             3701
#define ARABIC                                            609
#define ARABICEXTA                                       3522
#define ARABICEXTENDEDA                                  2611
#define ARABICMATH                                       2680
#define ARABICMATHEMATICALALPHABETICSYMBOLS              2773
#define ARABICPFA                                        1411
#define ARABICPFB                                         723
#define ARABICPRESENTATIONFORMSA                         2989
#define ARABICPRESENTATIONFORMSB                         2308
#define ARABICSUP                                        1652
#define ARABICSUPPLEMENT                                 3143
#define ARMENIAN                                          845
#define ARMI                                             3618
#define ARMN                                              361
#define ARROWS                                           3570
#define ASCII                                            1284
#define ASCIIHEXDIGIT                                    1622
#define ASSIGNED                                         1618
#define AVESTAN                                          1218
#define AVST                                             1396
#define BALI                                             2297
#define BALINESE                                          864
#define BAMU                                             2243
#define BAMUM                                            2571
#define BAMUMSUP                                          896
#define BAMUMSUPPLEMENT                                  1746
#define BASICLATIN                                       1997
#define BASS                                             1858
#define BASSAVAH                                          177
#define BATAK                                            2013
#define BATK                                              261
#define BC__AL                                           1124
#define BC__AN                                            264
#define BC__ARABICLETTER                                 2785
#define BC__ARABICNUMBER                                 3826
#define BC__B                                             127
#define BC__BN                                            551
#define BC__BOUNDARYNEUTRAL                              2646
#define BC__COMMONSEPARATOR                              3719
#define BC__CS                                           3752
#define BC__EN                                             36
#define BC__ES                                           3650
#define BC__ET                                            376
#define BC__EUROPEANNUMBER                                122
#define BC__EUROPEANSEPARATOR                            1904
#define BC__EUROPEANTERMINATOR                           2547
#define BC__FIRSTSTRONGISOLATE                           3222
#define BC__FSI                                          1023
#define BC__L                                            2024
#define BC__LEFTTORIGHT                                  3460
#define BC__LEFTTORIGHTEMBEDDING                         2115
#define BC__LEFTTORIGHTISOLATE                           3248
#define BC__LEFTTORIGHTOVERRIDE                            51
#define BC__LRE                                          2991
#define BC__LRI                                           763
#define BC__LRO                                          3333
#define BC__NONSPACINGMARK                                469
#define BC__NSM                                          1439
#define BC__ON                                           1416
#define BC__OTHERNEUTRAL                                 3614
#define BC__PARAGRAPHSEPARATOR                            885
#define BC__PDF                                          2110
#define BC__PDI                                          3668
#define BC__POPDIRECTIONALFORMAT                         1192
#define BC__POPDIRECTIONALISOLATE                        2268
#define BC__R                                            1166
#define BC__RIGHTTOLEFT                                  2523
#define BC__RIGHTTOLEFTEMBEDDING                          529
#define BC__RIGHTTOLEFTISOLATE                           1820
#define BC__RIGHTTOLEFTOVERRIDE                          1571
#define BC__RLE                                          3912
#define BC__RLI                                          2206
#define BC__RLO                                          1350
#define BC__S                                            3566
#define BC__SEGMENTSEPARATOR                             2913
#define BC__WHITESPACE                                   2494
#define BC__WS                                           1161
#define BENG                                             3018
#define BENGALI                                           520
#define BHAIKSUKI                                        1388
#define BHKS                                             3059
#define BIDIC                                            2983
#define BIDICONTROL                                      1077
#define BIDIC__F                                          962
#define BIDIC__FALSE                                     1753
#define BIDIC__N                                         1472
#define BIDIC__NO                                        1677
#define BIDIC__T                                          782
#define BIDIC__TRUE                                      3727
#define BIDIC__Y                                          543
#define BIDIC__YES                                       3574
#define BIDIM                                             211
#define BIDIMIRRORED                                     3728
#define BIDIM__F                                         1875
#define BIDIM__FALSE                                     1078
#define BIDIM__N                                         2400
#define BIDIM__NO                                         770
#define BIDIM__T                                         1157
#define BIDIM__TRUE                                        76
#define BIDIM__Y                                          989
#define BIDIM__YES                                       1170
#define BLANK                                            1297
#define BLK__ADLAM                                        331
#define BLK__AEGEANNUMBERS                               3417
#define BLK__AHOM                                        2443
#define BLK__ALCHEMICAL                                  3783
#define BLK__ALCHEMICALSYMBOLS                            807
#define BLK__ALPHABETICPF                                 560
#define BLK__ALPHABETICPRESENTATIONFORMS                  803
#define BLK__ANATOLIANHIEROGLYPHS                        3052
#define BLK__ANCIENTGREEKMUSIC                            679
#define BLK__ANCIENTGREEKMUSICALNOTATION                  341
#define BLK__ANCIENTGREEKNUMBERS                         2700
#define BLK__ANCIENTSYMBOLS                              3130
#define BLK__ARABIC                                      1119
#define BLK__ARABICEXTA                                  1043
#define BLK__ARABICEXTENDEDA                             1876
#define BLK__ARABICMATH                                  1764
#define BLK__ARABICMATHEMATICALALPHABETICSYMBOLS         3341
#define BLK__ARABICPFA                                   2758
#define BLK__ARABICPFB                                    353
#define BLK__ARABICPRESENTATIONFORMSA                    2470
#define BLK__ARABICPRESENTATIONFORMSB                      68
#define BLK__ARABICSUP                                    695
#define BLK__ARABICSUPPLEMENT                            3303
#define BLK__ARMENIAN                                    2431
#define BLK__ARROWS                                       389
#define BLK__ASCII                                       3794
#define BLK__AVESTAN                                     1922
#define BLK__BALINESE                                    1663
#define BLK__BAMUM                                       3062
#define BLK__BAMUMSUP                                    3155
#define BLK__BAMUMSUPPLEMENT                              441
#define BLK__BASICLATIN                                  3458
#define BLK__BASSAVAH                                    3603
#define BLK__BATAK                                        442
#define BLK__BENGALI                                     1291
#define BLK__BHAIKSUKI                                    249
#define BLK__BLOCKELEMENTS                               1335
#define BLK__BOPOMOFO                                    3435
#define BLK__BOPOMOFOEXT                                 3302
#define BLK__BOPOMOFOEXTENDED                             706
#define BLK__BOXDRAWING                                   279
#define BLK__BRAHMI                                       703
#define BLK__BRAILLE                                     2565
#define BLK__BRAILLEPATTERNS                              479
#define BLK__BUGINESE                                      20
#define BLK__BUHID                                        227
#define BLK__BYZANTINEMUSIC                               455
#define BLK__BYZANTINEMUSICALSYMBOLS                     3861
#define BLK__CANADIANSYLLABICS                           3729
#define BLK__CARIAN                                      2461
#define BLK__CAUCASIANALBANIAN                           2524
#define BLK__CHAKMA                                      1487
#define BLK__CHAM                                         812
#define BLK__CHEROKEE                                    3791
#define BLK__CHEROKEESUP                                 2764
#define BLK__CHEROKEESUPPLEMENT                          2096
#define BLK__CJK                                           66
#define BLK__CJKCOMPAT                                   2660
#define BLK__CJKCOMPATFORMS                              2163
#define BLK__CJKCOMPATIBILITY                            2034
#define BLK__CJKCOMPATIBILITYFORMS                        604
#define BLK__CJKCOMPATIBILITYIDEOGRAPHS                  2041
#define BLK__CJKCOMPATIBILITYIDEOGRAPHSSUPPLEMENT        3562
#define BLK__CJKCOMPATIDEOGRAPHS                         1148
#define BLK__CJKCOMPATIDEOGRAPHSSUP                      2009
#define BLK__CJKEXTA                                      253
#define BLK__CJKEXTB                                      936
#define BLK__CJKEXTC                                     3331
#define BLK__CJKEXTD                                     3520
#define BLK__CJKEXTE                                     1969
#define BLK__CJKEXTF                                     2651
#define BLK__CJKRADICALSSUP                               129
#define BLK__CJKRADICALSSUPPLEMENT                       1339
#define BLK__CJKSTROKES                                  3758
#define BLK__CJKSYMBOLS                                   349
#define BLK__CJKSYMBOLSANDPUNCTUATION                     474
#define BLK__CJKUNIFIEDIDEOGRAPHS                        1131
#define BLK__CJKUNIFIEDIDEOGRAPHSEXTENSIONA              1027
#define BLK__CJKUNIFIEDIDEOGRAPHSEXTENSIONB              2569
#define BLK__CJKUNIFIEDIDEOGRAPHSEXTENSIONC               167
#define BLK__CJKUNIFIEDIDEOGRAPHSEXTENSIOND              1196
#define BLK__CJKUNIFIEDIDEOGRAPHSEXTENSIONE              2741
#define BLK__CJKUNIFIEDIDEOGRAPHSEXTENSIONF               310
#define BLK__COMBININGDIACRITICALMARKS                   2718
#define BLK__COMBININGDIACRITICALMARKSEXTENDED           1588
#define BLK__COMBININGDIACRITICALMARKSFORSYMBOLS         3501
#define BLK__COMBININGDIACRITICALMARKSSUPPLEMENT         1897
#define BLK__COMBININGHALFMARKS                           903
#define BLK__COMBININGMARKSFORSYMBOLS                    3612
#define BLK__COMMONINDICNUMBERFORMS                      1939
#define BLK__COMPATJAMO                                   112
#define BLK__CONTROLPICTURES                              912
#define BLK__COPTIC                                      2100
#define BLK__COPTICEPACTNUMBERS                          3840
#define BLK__COUNTINGROD                                 3723
#define BLK__COUNTINGRODNUMERALS                         3751
#define BLK__CUNEIFORM                                   1917
#define BLK__CUNEIFORMNUMBERS                            3264
#define BLK__CUNEIFORMNUMBERSANDPUNCTUATION              3572
#define BLK__CURRENCYSYMBOLS                             2508
#define BLK__CYPRIOTSYLLABARY                             207
#define BLK__CYRILLIC                                     838
#define BLK__CYRILLICEXTA                                 246
#define BLK__CYRILLICEXTB                                2655
#define BLK__CYRILLICEXTC                                1111
#define BLK__CYRILLICEXTENDEDA                           3255
#define BLK__CYRILLICEXTENDEDB                           2581
#define BLK__CYRILLICEXTENDEDC                            176
#define BLK__CYRILLICSUP                                 3041
#define BLK__CYRILLICSUPPLEMENT                          3822
#define BLK__CYRILLICSUPPLEMENTARY                        502
#define BLK__DESERET                                     1113
#define BLK__DEVANAGARI                                   166
#define BLK__DEVANAGARIEXT                               2200
#define BLK__DEVANAGARIEXTENDED                          1697
#define BLK__DIACRITICALS                                 677
#define BLK__DIACRITICALSEXT                             1135
#define BLK__DIACRITICALSFORSYMBOLS                      3286
#define BLK__DIACRITICALSSUP                             1761
#define BLK__DINGBATS                                    3373
#define BLK__DOMINO                                      3269
#define BLK__DOMINOTILES                                 2148
#define BLK__DUPLOYAN                                     701
#define BLK__EARLYDYNASTICCUNEIFORM                      3067
#define BLK__EGYPTIANHIEROGLYPHS                         2404
#define BLK__ELBASAN                                     2566
#define BLK__EMOTICONS                                   2169
#define BLK__ENCLOSEDALPHANUM                            2359
#define BLK__ENCLOSEDALPHANUMERICS                       1946
#define BLK__ENCLOSEDALPHANUMERICSUPPLEMENT               550
#define BLK__ENCLOSEDALPHANUMSUP                         3363
#define BLK__ENCLOSEDCJK                                   40
#define BLK__ENCLOSEDCJKLETTERSANDMONTHS                 2641
#define BLK__ENCLOSEDIDEOGRAPHICSUP                      3119
#define BLK__ENCLOSEDIDEOGRAPHICSUPPLEMENT               1351
#define BLK__ETHIOPIC                                     153
#define BLK__ETHIOPICEXT                                 3762
#define BLK__ETHIOPICEXTA                                2667
#define BLK__ETHIOPICEXTENDED                            2273
#define BLK__ETHIOPICEXTENDEDA                           3420
#define BLK__ETHIOPICSUP                                 2996
#define BLK__ETHIOPICSUPPLEMENT                          2520
#define BLK__GENERALPUNCTUATION                          1497
#define BLK__GEOMETRICSHAPES                              716
#define BLK__GEOMETRICSHAPESEXT                          3922
#define BLK__GEOMETRICSHAPESEXTENDED                     1869
#define BLK__GEORGIAN                                    3837
#define BLK__GEORGIANSUP                                 1653
#define BLK__GEORGIANSUPPLEMENT                          1632
#define BLK__GLAGOLITIC                                  2625
#define BLK__GLAGOLITICSUP                               3750
#define BLK__GLAGOLITICSUPPLEMENT                        1102
#define BLK__GOTHIC                                      1181
#define BLK__GRANTHA                                     2103
#define BLK__GREEK                                       2423
#define BLK__GREEKANDCOPTIC                              1854
#define BLK__GREEKEXT                                    3259
#define BLK__GREEKEXTENDED                               3834
#define BLK__GUJARATI                                    2798
#define BLK__GURMUKHI                                    3665
#define BLK__HALFANDFULLFORMS                            3469
#define BLK__HALFMARKS                                   1368
#define BLK__HALFWIDTHANDFULLWIDTHFORMS                  1019
#define BLK__HANGUL                                      1680
#define BLK__HANGULCOMPATIBILITYJAMO                     3718
#define BLK__HANGULJAMO                                   197
#define BLK__HANGULJAMOEXTENDEDA                          781
#define BLK__HANGULJAMOEXTENDEDB                         1476
#define BLK__HANGULSYLLABLES                             1872
#define BLK__HANUNOO                                     2393
#define BLK__HATRAN                                      3529
#define BLK__HEBREW                                      2050
#define BLK__HIGHPRIVATEUSESURROGATES                    2473
#define BLK__HIGHPUSURROGATES                             971
#define BLK__HIGHSURROGATES                               662
#define BLK__HIRAGANA                                    2095
#define BLK__IDC                                         2994
#define BLK__IDEOGRAPHICDESCRIPTIONCHARACTERS            2528
#define BLK__IDEOGRAPHICSYMBOLS                          2662
#define BLK__IDEOGRAPHICSYMBOLSANDPUNCTUATION            3265
#define BLK__IMPERIALARAMAIC                              886
#define BLK__INDICNUMBERFORMS                             238
#define BLK__INSCRIPTIONALPAHLAVI                        1952
#define BLK__INSCRIPTIONALPARTHIAN                        924
#define BLK__IPAEXT                                      3000
#define BLK__IPAEXTENSIONS                               3152
#define BLK__JAMO                                        2005
#define BLK__JAMOEXTA                                    3231
#define BLK__JAMOEXTB                                    1685
#define BLK__JAVANESE                                     494
#define BLK__KAITHI                                       821
#define BLK__KANAEXTA                                    1185
#define BLK__KANAEXTENDEDA                               2970
#define BLK__KANASUP                                     1920
#define BLK__KANASUPPLEMENT                               947
#define BLK__KANBUN                                      2040
#define BLK__KANGXI                                       106
#define BLK__KANGXIRADICALS                              3120
#define BLK__KANNADA                                     3176
#define BLK__KATAKANA                                    1527
#define BLK__KATAKANAEXT                                 1638
#define BLK__KATAKANAPHONETICEXTENSIONS                  3565
#define BLK__KAYAHLI                                     1050
#define BLK__KHAROSHTHI                                  3033
#define BLK__KHMER                                       3731
#define BLK__KHMERSYMBOLS                                2269
#define BLK__KHOJKI                                      1338
#define BLK__KHUDAWADI                                   2887
#define BLK__LAO                                         2346
#define BLK__LATIN1                                       215
#define BLK__LATIN1SUP                                   1454
#define BLK__LATIN1SUPPLEMENT                            1803
#define BLK__LATINEXTA                                   3377
#define BLK__LATINEXTADDITIONAL                          2315
#define BLK__LATINEXTB                                   1822
#define BLK__LATINEXTC                                    290
#define BLK__LATINEXTD                                   2687
#define BLK__LATINEXTE                                   1145
#define BLK__LATINEXTENDEDA                              1590
#define BLK__LATINEXTENDEDADDITIONAL                      125
#define BLK__LATINEXTENDEDB                               895
#define BLK__LATINEXTENDEDC                              2457
#define BLK__LATINEXTENDEDD                              1702
#define BLK__LATINEXTENDEDE                              3289
#define BLK__LEPCHA                                      3427
#define BLK__LETTERLIKESYMBOLS                           2775
#define BLK__LIMBU                                       1064
#define BLK__LINEARA                                     1037
#define BLK__LINEARBIDEOGRAMS                            2931
#define BLK__LINEARBSYLLABARY                            2575
#define BLK__LISU                                        3102
#define BLK__LOWSURROGATES                               3931
#define BLK__LYCIAN                                      2328
#define BLK__LYDIAN                                      3311
#define BLK__MAHAJANI                                    3571
#define BLK__MAHJONG                                     3675
#define BLK__MAHJONGTILES                                3125
#define BLK__MALAYALAM                                   3868
#define BLK__MANDAIC                                     2608
#define BLK__MANICHAEAN                                  3911
#define BLK__MARCHEN                                     3871
#define BLK__MASARAMGONDI                                1052
#define BLK__MATHALPHANUM                                2649
#define BLK__MATHEMATICALALPHANUMERICSYMBOLS             2458
#define BLK__MATHEMATICALOPERATORS                        162
#define BLK__MATHOPERATORS                               3071
#define BLK__MEETEIMAYEK                                 2167
#define BLK__MEETEIMAYEKEXT                              1684
#define BLK__MEETEIMAYEKEXTENSIONS                        983
#define BLK__MENDEKIKAKUI                                1763
#define BLK__MEROITICCURSIVE                             3798
#define BLK__MEROITICHIEROGLYPHS                         3528
#define BLK__MIAO                                        3708
#define BLK__MISCARROWS                                  2562
#define BLK__MISCELLANEOUSMATHEMATICALSYMBOLSA           2640
#define BLK__MISCELLANEOUSMATHEMATICALSYMBOLSB           1057
#define BLK__MISCELLANEOUSSYMBOLS                        2128
#define BLK__MISCELLANEOUSSYMBOLSANDARROWS               1370
#define BLK__MISCELLANEOUSSYMBOLSANDPICTOGRAPHS           104
#define BLK__MISCELLANEOUSTECHNICAL                      1048
#define BLK__MISCMATHSYMBOLSA                            1673
#define BLK__MISCMATHSYMBOLSB                            3207
#define BLK__MISCPICTOGRAPHS                              472
#define BLK__MISCSYMBOLS                                  301
#define BLK__MISCTECHNICAL                                570
#define BLK__MODI                                        3890
#define BLK__MODIFIERLETTERS                             1620
#define BLK__MODIFIERTONELETTERS                         1271
#define BLK__MONGOLIAN                                   2546
#define BLK__MONGOLIANSUP                                2390
#define BLK__MONGOLIANSUPPLEMENT                          268
#define BLK__MRO                                         3823
#define BLK__MULTANI                                     3430
#define BLK__MUSIC                                       1886
#define BLK__MUSICALSYMBOLS                              2075
#define BLK__MYANMAR                                     2407
#define BLK__MYANMAREXTA                                  764
#define BLK__MYANMAREXTB                                   73
#define BLK__MYANMAREXTENDEDA                            1086
#define BLK__MYANMAREXTENDEDB                            1782
#define BLK__NABATAEAN                                   3547
#define BLK__NB                                          2607
#define BLK__NEWA                                        1230
#define BLK__NEWTAILUE                                   3147
#define BLK__NKO                                         1136
#define BLK__NOBLOCK                                     2324
#define BLK__NUMBERFORMS                                 1752
#define BLK__NUSHU                                       3039
#define BLK__OCR                                         1698
#define BLK__OGHAM                                       2834
#define BLK__OLCHIKI                                     1934
#define BLK__OLDHUNGARIAN                                 658
#define BLK__OLDITALIC                                   1292
#define BLK__OLDNORTHARABIAN                             1539
#define BLK__OLDPERMIC                                   3582
#define BLK__OLDPERSIAN                                  2857
#define BLK__OLDSOUTHARABIAN                             3364
#define BLK__OLDTURKIC                                   2893
#define BLK__OPTICALCHARACTERRECOGNITION                 1840
#define BLK__ORIYA                                       3348
#define BLK__ORNAMENTALDINGBATS                          3930
#define BLK__OSAGE                                       3340
#define BLK__OSMANYA                                     3785
#define BLK__PAHAWHHMONG                                 1216
#define BLK__PALMYRENE                                    857
#define BLK__PAUCINHAU                                    519
#define BLK__PHAGSPA                                     3714
#define BLK__PHAISTOS                                    3745
#define BLK__PHAISTOSDISC                                 618
#define BLK__PHOENICIAN                                  2692
#define BLK__PHONETICEXT                                 3697
#define BLK__PHONETICEXTENSIONS                          3486
#define BLK__PHONETICEXTENSIONSSUPPLEMENT                1699
#define BLK__PHONETICEXTSUP                               913
#define BLK__PLAYINGCARDS                                 589
#define BLK__PRIVATEUSE                                  1383
#define BLK__PRIVATEUSEAREA                              3285
#define BLK__PSALTERPAHLAVI                              3490
#define BLK__PUA                                         3874
#define BLK__PUNCTUATION                                  512
#define BLK__REJANG                                      2350
#define BLK__RUMI                                         192
#define BLK__RUMINUMERALSYMBOLS                          1273
#define BLK__RUNIC                                       2089
#define BLK__SAMARITAN                                   3721
#define BLK__SAURASHTRA                                   799
#define BLK__SHARADA                                      973
#define BLK__SHAVIAN                                      417
#define BLK__SHORTHANDFORMATCONTROLS                     2945
#define BLK__SIDDHAM                                      785
#define BLK__SINHALA                                     1007
#define BLK__SINHALAARCHAICNUMBERS                       2140
#define BLK__SMALLFORMS                                  3851
#define BLK__SMALLFORMVARIANTS                            854
#define BLK__SORASOMPENG                                 3179
#define BLK__SOYOMBO                                     2767
#define BLK__SPACINGMODIFIERLETTERS                        25
#define BLK__SPECIALS                                     276
#define BLK__SUNDANESE                                    375
#define BLK__SUNDANESESUP                                2484
#define BLK__SUNDANESESUPPLEMENT                          951
#define BLK__SUPARROWSA                                  2932
#define BLK__SUPARROWSB                                  1385
#define BLK__SUPARROWSC                                  3787
#define BLK__SUPERANDSUB                                  201
#define BLK__SUPERSCRIPTSANDSUBSCRIPTS                   2023
#define BLK__SUPMATHOPERATORS                            3504
#define BLK__SUPPLEMENTALARROWSA                         2939
#define BLK__SUPPLEMENTALARROWSB                          533
#define BLK__SUPPLEMENTALARROWSC                         2076
#define BLK__SUPPLEMENTALMATHEMATICALOPERATORS           2418
#define BLK__SUPPLEMENTALPUNCTUATION                     2889
#define BLK__SUPPLEMENTALSYMBOLSANDPICTOGRAPHS           1364
#define BLK__SUPPLEMENTARYPRIVATEUSEAREAA                 991
#define BLK__SUPPLEMENTARYPRIVATEUSEAREAB                3390
#define BLK__SUPPUAA                                     3821
#define BLK__SUPPUAB                                     3178
#define BLK__SUPPUNCTUATION                              2107
#define BLK__SUPSYMBOLSANDPICTOGRAPHS                     558
#define BLK__SUTTONSIGNWRITING                           1758
#define BLK__SYLOTINAGRI                                 2363
#define BLK__SYRIAC                                       496
#define BLK__SYRIACSUP                                   2654
#define BLK__SYRIACSUPPLEMENT                            3021
#define BLK__TAGALOG                                     1848
#define BLK__TAGBANWA                                     267
#define BLK__TAGS                                        2486
#define BLK__TAILE                                       2439
#define BLK__TAITHAM                                     3606
#define BLK__TAIVIET                                     3053
#define BLK__TAIXUANJING                                  198
#define BLK__TAIXUANJINGSYMBOLS                           161
#define BLK__TAKRI                                       1838
#define BLK__TAMIL                                       3850
#define BLK__TANGUT                                      3284
#define BLK__TANGUTCOMPONENTS                            1599
#define BLK__TELUGU                                      2454
#define BLK__THAANA                                      3792
#define BLK__THAI                                        1352
#define BLK__TIBETAN                                      908
#define BLK__TIFINAGH                                     574
#define BLK__TIRHUTA                                      154
#define BLK__TRANSPORTANDMAP                             2665
#define BLK__TRANSPORTANDMAPSYMBOLS                      3796
#define BLK__UCAS                                        3307
#define BLK__UCASEXT                                     1378
#define BLK__UGARITIC                                    3129
#define BLK__UNIFIEDCANADIANABORIGINALSYLLABICS          2659
#define BLK__UNIFIEDCANADIANABORIGINALSYLLABICSEXTENDED  1062
#define BLK__VAI                                         1501
#define BLK__VARIATIONSELECTORS                           342
#define BLK__VARIATIONSELECTORSSUPPLEMENT                1631
#define BLK__VEDICEXT                                    2778
#define BLK__VEDICEXTENSIONS                             1067
#define BLK__VERTICALFORMS                               1000
#define BLK__VS                                           281
#define BLK__VSSUP                                       2192
#define BLK__WARANGCITI                                  2323
#define BLK__YIJING                                       635
#define BLK__YIJINGHEXAGRAMSYMBOLS                       3926
#define BLK__YIRADICALS                                  1008
#define BLK__YISYLLABLES                                  320
#define BLK__ZANABAZARSQUARE                             1183
#define BLOCKELEMENTS                                    1767
#define BOPO                                             1832
#define BOPOMOFO                                         2426
#define BOPOMOFOEXT                                      3084
#define BOPOMOFOEXTENDED                                 2862
#define BOXDRAWING                                       2294
#define BPT__C                                           3165
#define BPT__CLOSE                                       2722
#define BPT__N                                           3513
#define BPT__NONE                                        2039
#define BPT__O                                           1970
#define BPT__OPEN                                         775
#define BRAH                                             1138
#define BRAHMI                                           3673
#define BRAI                                             2682
#define BRAILLE                                          1296
#define BRAILLEPATTERNS                                  1210
#define BUGI                                             3213
#define BUGINESE                                         1445
#define BUHD                                             1258
#define BUHID                                            2947
#define BYZANTINEMUSIC                                   1903
#define BYZANTINEMUSICALSYMBOLS                          2037
#define C                                                2978
#define CAKM                                              866
#define CANADIANABORIGINAL                                593
#define CANADIANSYLLABICS                                3844
#define CANS                                             3830
#define CARI                                             1343
#define CARIAN                                           3688
#define CASED                                            2166
#define CASEDLETTER                                      1393
#define CASED__F                                          319
#define CASED__FALSE                                     2114
#define CASED__N                                         3747
#define CASED__NO                                         180
#define CASED__T                                          141
#define CASED__TRUE                                      2170
#define CASED__Y                                         3742
#define CASED__YES                                       2277
#define CASEIGNORABLE                                     931
#define CAUCASIANALBANIAN                                1520
#define CC                                               3843
#define CCC__A                                           1146
#define CCC__ABOVE                                       2179
#define CCC__ABOVELEFT                                   1314
#define CCC__ABOVERIGHT                                  1615
#define CCC__AL                                          1921
#define CCC__AR                                          2618
#define CCC__ATA                                         1182
#define CCC__ATAR                                        2375
#define CCC__ATB                                         1870
#define CCC__ATBL                                        2685
#define CCC__ATTACHEDABOVE                                664
#define CCC__ATTACHEDABOVERIGHT                          3090
#define CCC__ATTACHEDBELOW                               2007
#define CCC__ATTACHEDBELOWLEFT                           3121
#define CCC__B                                            461
#define CCC__BELOW                                       1789
#define CCC__BELOWLEFT                                   1529
#define CCC__BELOWRIGHT                                  1277
#define CCC__BL                                          2883
#define CCC__BR                                          2541
#define CCC__CCC10                                       3583
#define CCC__CCC103                                      3424
#define CCC__CCC107                                      2679
#define CCC__CCC11                                       1184
#define CCC__CCC118                                      2800
#define CCC__CCC12                                       2725
#define CCC__CCC122                                      1655
#define CCC__CCC129                                      1484
#define CCC__CCC13                                        318
#define CCC__CCC130                                      2505
#define CCC__CCC132                                      3359
#define CCC__CCC133                                       960
#define CCC__CCC14                                       1349
#define CCC__CCC15                                       2895
#define CCC__CCC16                                        492
#define CCC__CCC17                                       2036
#define CCC__CCC18                                       3060
#define CCC__CCC19                                        651
#define CCC__CCC20                                       2779
#define CCC__CCC21                                       1232
#define CCC__CCC22                                       1909
#define CCC__CCC23                                        379
#define CCC__CCC24                                       1065
#define CCC__CCC25                                       3468
#define CCC__CCC26                                        210
#define CCC__CCC27                                       2609
#define CCC__CCC28                                       2260
#define CCC__CCC29                                        717
#define CCC__CCC30                                       1978
#define CCC__CCC31                                       3525
#define CCC__CCC32                                       2831
#define CCC__CCC33                                        438
#define CCC__CCC34                                       3693
#define CCC__CCC35                                       1301
#define CCC__CCC36                                        606
#define CCC__CCC84                                       2168
#define CCC__CCC91                                       1202
#define CCC__DA                                          2797
#define CCC__DB                                          3483
#define CCC__DOUBLEABOVE                                 1408
#define CCC__DOUBLEBELOW                                 3476
#define CCC__IOTASUBSCRIPT                               1126
#define CCC__IS                                          2074
#define CCC__KANAVOICING                                 3224
#define CCC__KV                                          1726
#define CCC__L                                           1836
#define CCC__LEFT                                         435
#define CCC__NK                                          3691
#define CCC__NOTREORDERED                                3172
#define CCC__NR                                          3681
#define CCC__NUKTA                                        323
#define CCC__OV                                          3391
#define CCC__OVERLAY                                     2176
#define CCC__R                                           1495
#define CCC__RIGHT                                        317
#define CCC__VIRAMA                                      2929
#define CCC__VR                                            42
#define CE                                                751
#define CE__F                                            1749
#define CE__FALSE                                         868
#define CE__N                                            2266
#define CE__NO                                            586
#define CE__T                                            1927
#define CE__TRUE                                          283
#define CE__Y                                            1757
#define CE__YES                                          2966
#define CF                                               3797
#define CHAKMA                                           2717
#define CHAM                                             1864
#define CHANGESWHENCASEFOLDED                            2171
#define CHANGESWHENCASEMAPPED                            1015
#define CHANGESWHENLOWERCASED                            2944
#define CHANGESWHENNFKCCASEFOLDED                        2412
#define CHANGESWHENTITLECASED                             938
#define CHANGESWHENUPPERCASED                            2977
#define CHER                                             1310
#define CHEROKEE                                         3322
#define CHEROKEESUP                                      1179
#define CHEROKEESUPPLEMENT                               2681
#define CI                                               3498
#define CI__F                                            2852
#define CI__FALSE                                         644
#define CI__N                                            3368
#define CI__NO                                            336
#define CI__T                                            3029
#define CI__TRUE                                          563
#define CI__Y                                            3378
#define CI__YES                                          2747
#define CJK                                              3436
#define CJKCOMPAT                                        1890
#define CJKCOMPATFORMS                                    831
#define CJKCOMPATIBILITY                                 3443
#define CJKCOMPATIBILITYFORMS                            1853
#define CJKCOMPATIBILITYIDEOGRAPHS                       1346
#define CJKCOMPATIBILITYIDEOGRAPHSSUPPLEMENT              184
#define CJKCOMPATIDEOGRAPHS                                 8
#define CJKCOMPATIDEOGRAPHSSUP                            646
#define CJKEXTA                                           614
#define CJKEXTB                                          3013
#define CJKEXTC                                          1467
#define CJKEXTD                                          3872
#define CJKEXTE                                          2331
#define CJKEXTF                                           790
#define CJKRADICALSSUP                                   2025
#define CJKRADICALSSUPPLEMENT                             416
#define CJKSTROKES                                       3632
#define CJKSYMBOLS                                       2818
#define CJKSYMBOLSANDPUNCTUATION                         2225
#define CJKUNIFIEDIDEOGRAPHS                             3008
#define CJKUNIFIEDIDEOGRAPHSEXTENSIONA                   2357
#define CJKUNIFIEDIDEOGRAPHSEXTENSIONB                   1675
#define CJKUNIFIEDIDEOGRAPHSEXTENSIONC                   3217
#define CJKUNIFIEDIDEOGRAPHSEXTENSIOND                   2529
#define CJKUNIFIEDIDEOGRAPHSEXTENSIONE                    130
#define CJKUNIFIEDIDEOGRAPHSEXTENSIONF                   3374
#define CLOSEPUNCTUATION                                 2336
#define CN                                                577
#define CNTRL                                             443
#define CO                                               2125
#define COMBININGDIACRITICALMARKS                         697
#define COMBININGDIACRITICALMARKSEXTENDED                1825
#define COMBININGDIACRITICALMARKSFORSYMBOLS              3192
#define COMBININGDIACRITICALMARKSSUPPLEMENT              3754
#define COMBININGHALFMARKS                               3164
#define COMBININGMARK                                     150
#define COMBININGMARKSFORSYMBOLS                         1200
#define COMMON                                           1004
#define COMMONINDICNUMBERFORMS                           3206
#define COMPATJAMO                                       1503
#define COMPEX                                           1621
#define COMPEX__F                                         256
#define COMPEX__FALSE                                    1300
#define COMPEX__N                                         769
#define COMPEX__NO                                       2634
#define COMPEX__T                                          70
#define COMPEX__TRUE                                     2127
#define COMPEX__Y                                        3852
#define COMPEX__YES                                      2238
#define COMPOSITIONEXCLUSION                             1576
#define CONNECTORPUNCTUATION                              224
#define CONTROL                                          3447
#define CONTROLPICTURES                                   685
#define COPT                                             1603
#define COPTIC                                           2870
#define COPTICEPACTNUMBERS                               2368
#define COUNTINGROD                                      2112
#define COUNTINGRODNUMERALS                              1322
#define CPRT                                             2658
#define CS                                               2807
#define CUNEIFORM                                        2927
#define CUNEIFORMNUMBERS                                  418
#define CUNEIFORMNUMBERSANDPUNCTUATION                   2564
#define CURRENCYSYMBOL                                    114
#define CURRENCYSYMBOLS                                  3187
#define CWCF                                              684
#define CWCF__F                                          2830
#define CWCF__FALSE                                      1133
#define CWCF__N                                          2305
#define CWCF__NO                                          225
#define CWCF__T                                          2678
#define CWCF__TRUE                                       3104
#define CWCF__Y                                           942
#define CWCF__YES                                         592
#define CWCM                                             1891
#define CWCM__F                                           386
#define CWCM__FALSE                                       771
#define CWCM__N                                          3813
#define CWCM__NO                                         1643
#define CWCM__T                                           564
#define CWCM__TRUE                                       3433
#define CWCM__Y                                          3817
#define CWCM__YES                                         682
#define CWKCF                                            2436
#define CWKCF__F                                         2552
#define CWKCF__FALSE                                     2343
#define CWKCF__N                                         2035
#define CWKCF__NO                                         929
#define CWKCF__T                                         2724
#define CWKCF__TRUE                                       633
#define CWKCF__Y                                         2380
#define CWKCF__YES                                        432
#define CWL                                              3638
#define CWL__F                                           2593
#define CWL__FALSE                                        156
#define CWL__N                                           2077
#define CWL__NO                                          1213
#define CWL__T                                           2358
#define CWL__TRUE                                         780
#define CWL__Y                                           2586
#define CWL__YES                                         2218
#define CWT                                              1248
#define CWT__F                                            836
#define CWT__FALSE                                       3193
#define CWT__N                                           1359
#define CWT__NO                                          3916
#define CWT__T                                           1536
#define CWT__TRUE                                        2891
#define CWT__Y                                           2760
#define CWT__YES                                         2022
#define CWU                                              2786
#define CWU__F                                           2377
#define CWU__FALSE                                       3526
#define CWU__N                                           1857
#define CWU__NO                                          2624
#define CWU__T                                            324
#define CWU__TRUE                                         829
#define CWU__Y                                           3070
#define CWU__YES                                         2629
#define CYPRIOT                                          2713
#define CYPRIOTSYLLABARY                                  489
#define CYRILLIC                                         2768
#define CYRILLICEXTA                                       46
#define CYRILLICEXTB                                      742
#define CYRILLICEXTC                                     3142
#define CYRILLICEXTENDEDA                                 185
#define CYRILLICEXTENDEDB                                1728
#define CYRILLICEXTENDEDC                                3274
#define CYRILLICSUP                                      3022
#define CYRILLICSUPPLEMENT                                987
#define CYRILLICSUPPLEMENTARY                            1550
#define CYRL                                             3450
#define DASH                                             2097
#define DASHPUNCTUATION                                   240
#define DASH__F                                           795
#define DASH__FALSE                                       828
#define DASH__N                                          1307
#define DASH__NO                                          583
#define DASH__T                                          1793
#define DASH__TRUE                                       2877
#define DASH__Y                                           447
#define DASH__YES                                        2382
#define DECIMALNUMBER                                     959
#define DEFAULTIGNORABLECODEPOINT                        3622
#define DEP                                              3296
#define DEPRECATED                                       1234
#define DEP__F                                           2165
#define DEP__FALSE                                        304
#define DEP__N                                           1700
#define DEP__NO                                           428
#define DEP__T                                           2850
#define DEP__TRUE                                        1932
#define DEP__Y                                            760
#define DEP__YES                                         3173
#define DESERET                                          2763
#define DEVA                                             1528
#define DEVANAGARI                                       2046
#define DEVANAGARIEXT                                    3595
#define DEVANAGARIEXTENDED                                476
#define DI                                               1466
#define DIA                                              3517
#define DIACRITIC                                        2512
#define DIACRITICALS                                     1566
#define DIACRITICALSEXT                                  3943
#define DIACRITICALSFORSYMBOLS                            933
#define DIACRITICALSSUP                                   883
#define DIA__F                                           2522
#define DIA__FALSE                                         62
#define DIA__N                                           1996
#define DIA__NO                                          2137
#define DIA__T                                            464
#define DIA__TRUE                                        2487
#define DIA__Y                                            115
#define DIA__YES                                         1486
#define DIGIT                                            1923
#define DINGBATS                                         2497
#define DI__F                                            1042
#define DI__FALSE                                        1548
#define DI__N                                             528
#define DI__NO                                           2068
#define DI__T                                            3096
#define DI__TRUE                                         2082
#define DI__Y                                            2750
#define DI__YES                                          2695
#define DOMINO                                            756
#define DOMINOTILES                                      2428
#define DSRT                                             3921
#define DT__CAN                                           676
#define DT__CANONICAL                                     851
#define DT__CIRCLE                                        509
#define DT__COM                                          2319
#define DT__COMPAT                                       2053
#define DT__ENC                                          1606
#define DT__FIN                                           897
#define DT__FINAL                                        2066
#define DT__FONT                                           43
#define DT__FRA                                           392
#define DT__FRACTION                                      314
#define DT__INIT                                         2516
#define DT__INITIAL                                      3734
#define DT__ISO                                           410
#define DT__ISOLATED                                      757
#define DT__MED                                          1563
#define DT__MEDIAL                                        566
#define DT__NAR                                          3480
#define DT__NARROW                                       2479
#define DT__NB                                           3497
#define DT__NOBREAK                                      3625
#define DT__NONCANON                                     3227
#define DT__NONCANONICAL                                 3654
#define DT__NONE                                         1899
#define DT__SMALL                                        1977
#define DT__SML                                           615
#define DT__SQR                                          3107
#define DT__SQUARE                                       3717
#define DT__SUB                                          3225
#define DT__SUP                                          1168
#define DT__SUPER                                        1025
#define DT__VERT                                          668
#define DT__VERTICAL                                      734
#define DT__WIDE                                         2408
#define DUPL                                             3493
#define DUPLOYAN                                         1475
#define EARLYDYNASTICCUNEIFORM                           3687
#define EA__A                                            1531
#define EA__AMBIGUOUS                                    1130
#define EA__F                                             846
#define EA__FULLWIDTH                                    2385
#define EA__H                                            3418
#define EA__HALFWIDTH                                     363
#define EA__N                                             328
#define EA__NA                                           1955
#define EA__NARROW                                        291
#define EA__NEUTRAL                                      2244
#define EA__W                                            3426
#define EA__WIDE                                           41
#define EGYP                                             1877
#define EGYPTIANHIEROGLYPHS                               910
#define ELBA                                             1778
#define ELBASAN                                          3716
#define EMOTICONS                                        1662
#define ENCLOSEDALPHANUM                                 1958
#define ENCLOSEDALPHANUMERICS                             490
#define ENCLOSEDALPHANUMERICSUPPLEMENT                   3305
#define ENCLOSEDALPHANUMSUP                              1584
#define ENCLOSEDCJK                                      1523
#define ENCLOSEDCJKLETTERSANDMONTHS                      3452
#define ENCLOSEDIDEOGRAPHICSUP                            720
#define ENCLOSEDIDEOGRAPHICSUPPLEMENT                    1736
#define ENCLOSINGMARK                                    3492
#define ETHI                                              671
#define ETHIOPIC                                         3737
#define ETHIOPICEXT                                      1282
#define ETHIOPICEXTA                                      449
#define ETHIOPICEXTENDED                                  316
#define ETHIOPICEXTENDEDA                                 139
#define ETHIOPICSUP                                      2736
#define ETHIOPICSUPPLEMENT                               2557
#define EXT                                              1058
#define EXTENDER                                         3533
#define EXT__F                                            484
#define EXT__FALSE                                       1418
#define EXT__N                                           3776
#define EXT__NO                                          2880
#define EXT__T                                           2540
#define EXT__TRUE                                        1435
#define EXT__Y                                           2896
#define EXT__YES                                          497
#define FINALPUNCTUATION                                 3113
#define FORMAT                                            396
#define FULLCOMPOSITIONEXCLUSION                         3636
#define GCB__CN                                          2446
#define GCB__CONTROL                                     1581
#define GCB__CR                                          1256
#define GCB__EB                                          2194
#define GCB__EBASE                                        823
#define GCB__EBASEGAZ                                     229
#define GCB__EBG                                          833
#define GCB__EM                                          3740
#define GCB__EMODIFIER                                   3824
#define GCB__EX                                          2531
#define GCB__EXTEND                                       665
#define GCB__GAZ                                         3664
#define GCB__GLUEAFTERZWJ                                2936
#define GCB__L                                           3301
#define GCB__LF                                          1373
#define GCB__LV                                           340
#define GCB__LVT                                         2162
#define GCB__OTHER                                        571
#define GCB__PP                                          2577
#define GCB__PREPEND                                     2559
#define GCB__REGIONALINDICATOR                           3401
#define GCB__RI                                          3134
#define GCB__SM                                           681
#define GCB__SPACINGMARK                                 1524
#define GCB__T                                           2791
#define GCB__V                                           3640
#define GCB__XX                                          1003
#define GCB__ZWJ                                         2715
#define GC__C                                            2252
#define GC__CASEDLETTER                                  2362
#define GC__CC                                           1203
#define GC__CF                                           1371
#define GC__CLOSEPUNCTUATION                              415
#define GC__CN                                           1894
#define GC__CNTRL                                        3412
#define GC__CO                                           3456
#define GC__COMBININGMARK                                2435
#define GC__CONNECTORPUNCTUATION                         2177
#define GC__CONTROL                                      3515
#define GC__CS                                            172
#define GC__CURRENCYSYMBOL                                 69
#define GC__DASHPUNCTUATION                              2202
#define GC__DECIMALNUMBER                                1751
#define GC__DIGIT                                        2964
#define GC__ENCLOSINGMARK                                2131
#define GC__FINALPUNCTUATION                             3032
#define GC__FORMAT                                       3479
#define GC__INITIALPUNCTUATION                           1596
#define GC__L                                            3793
#define GC__LC                                           1280
#define GC__LETTER                                       1187
#define GC__LETTERNUMBER                                 3414
#define GC__LINESEPARATOR                                3360
#define GC__LL                                           3711
#define GC__LM                                           2134
#define GC__LO                                           2995
#define GC__LOWERCASELETTER                              2856
#define GC__LT                                           1288
#define GC__LU                                           3692
#define GC__L_                                            986
#define GC__L__                                           914
#define GC__M                                            1389
#define GC__MARK                                         1272
#define GC__MATHSYMBOL                                   3772
#define GC__MC                                             14
#define GC__ME                                           3072
#define GC__MN                                            137
#define GC__MODIFIERLETTER                               1410
#define GC__MODIFIERSYMBOL                               1409
#define GC__N                                            2933
#define GC__ND                                           2085
#define GC__NL                                           2603
#define GC__NO                                            195
#define GC__NONSPACINGMARK                                436
#define GC__NUMBER                                        140
#define GC__OPENPUNCTUATION                               470
#define GC__OTHER                                         927
#define GC__OTHERLETTER                                  1391
#define GC__OTHERNUMBER                                   280
#define GC__OTHERPUNCTUATION                             1365
#define GC__OTHERSYMBOL                                  1499
#define GC__P                                            2596
#define GC__PARAGRAPHSEPARATOR                           3927
#define GC__PC                                           1951
#define GC__PD                                            412
#define GC__PE                                           2810
#define GC__PF                                           1266
#define GC__PI                                            580
#define GC__PO                                           3150
#define GC__PRIVATEUSE                                    524
#define GC__PS                                            918
#define GC__PUNCT                                        3388
#define GC__PUNCTUATION                                  1785
#define GC__S                                            3345
#define GC__SC                                            572
#define GC__SEPARATOR                                    2190
#define GC__SK                                           1112
#define GC__SM                                           1942
#define GC__SO                                           2815
#define GC__SPACESEPARATOR                               2008
#define GC__SPACINGMARK                                  1911
#define GC__SURROGATE                                     545
#define GC__SYMBOL                                       3186
#define GC__TITLECASELETTER                              2990
#define GC__UNASSIGNED                                   2731
#define GC__UPPERCASELETTER                              1530
#define GC__Z                                            2257
#define GC__ZL                                           1740
#define GC__ZP                                             26
#define GC__ZS                                           1567
#define GENERALPUNCTUATION                               2620
#define GEOMETRICSHAPES                                  2982
#define GEOMETRICSHAPESEXT                               3545
#define GEOMETRICSHAPESEXTENDED                          2482
#define GEOR                                             3705
#define GEORGIAN                                         2354
#define GEORGIANSUP                                      1630
#define GEORGIANSUPPLEMENT                               3593
#define GLAG                                              874
#define GLAGOLITIC                                       2427
#define GLAGOLITICSUP                                     400
#define GLAGOLITICSUPPLEMENT                             2042
#define GONM                                             3886
#define GOTH                                             3272
#define GOTHIC                                           1579
#define GRAN                                             1809
#define GRANTHA                                          3531
#define GRAPH                                              49
#define GRAPHEMEBASE                                     2133
#define GRAPHEMEEXTEND                                   2455
#define GRBASE                                           1406
#define GRBASE__F                                         209
#define GRBASE__FALSE                                     403
#define GRBASE__N                                         731
#define GRBASE__NO                                        901
#define GRBASE__T                                        2259
#define GRBASE__TRUE                                     1827
#define GRBASE__Y                                        2613
#define GRBASE__YES                                         7
#define GREEK                                            1097
#define GREEKANDCOPTIC                                    116
#define GREEKEXT                                         2904
#define GREEKEXTENDED                                     452
#define GREK                                             1330
#define GREXT                                             287
#define GREXT__F                                         1534
#define GREXT__FALSE                                     1796
#define GREXT__N                                         2052
#define GREXT__NO                                        1975
#define GREXT__T                                         1360
#define GREXT__TRUE                                      1616
#define GREXT__Y                                         2045
#define GREXT__YES                                       2771
#define GUJARATI                                         3099
#define GUJR                                             2835
#define GURMUKHI                                          536
#define GURU                                             3320
#define HALFANDFULLFORMS                                 1104
#define HALFMARKS                                        1508
#define HALFWIDTHANDFULLWIDTHFORMS                       3002
#define HAN                                              2861
#define HANG                                             1831
#define HANGUL                                           1191
#define HANGULCOMPATIBILITYJAMO                          1496
#define HANGULJAMO                                        724
#define HANGULJAMOEXTENDEDA                              2992
#define HANGULJAMOEXTENDEDB                              1450
#define HANGULSYLLABLES                                  3674
#define HANI                                             2804
#define HANO                                             1172
#define HANUNOO                                            47
#define HATR                                             3234
#define HATRAN                                           1390
#define HEBR                                             2859
#define HEBREW                                           2286
#define HEX                                              3267
#define HEXDIGIT                                         3299
#define HEX__F                                           3128
#define HEX__FALSE                                       2820
#define HEX__N                                           2604
#define HEX__NO                                           647
#define HEX__T                                           1066
#define HEX__TRUE                                        2737
#define HEX__Y                                            381
#define HEX__YES                                         1479
#define HIGHPRIVATEUSESURROGATES                          638
#define HIGHPUSURROGATES                                 1245
#define HIGHSURROGATES                                   3784
#define HIRA                                             2151
#define HIRAGANA                                         3557
#define HLUW                                             2211
#define HMNG                                             2926
#define HORIZSPACE                                         21
#define HST__L                                           2833
#define HST__LEADINGJAMO                                  478
#define HST__LV                                          2189
#define HST__LVSYLLABLE                                   656
#define HST__LVT                                         1648
#define HST__LVTSYLLABLE                                 1498
#define HST__NA                                          1828
#define HST__NOTAPPLICABLE                               3043
#define HST__T                                           2318
#define HST__TRAILINGJAMO                                3877
#define HST__V                                           3168
#define HST__VOWELJAMO                                   3038
#define HUNG                                              762
#define HYPHEN                                           2598
#define HYPHEN__F                                        1500
#define HYPHEN__FALSE                                    1770
#define HYPHEN__N                                        2018
#define HYPHEN__NO                                       1525
#define HYPHEN__T                                        3551
#define HYPHEN__TRUE                                     2129
#define HYPHEN__Y                                        3897
#define HYPHEN__YES                                      3878
#define IDC                                               259
#define IDCONTINUE                                       2986
#define IDC__F                                           2316
#define IDC__FALSE                                       3597
#define IDC__N                                           2841
#define IDC__NO                                          3392
#define IDC__T                                           2139
#define IDC__TRUE                                        3282
#define IDC__Y                                           2829
#define IDC__YES                                         2475
#define IDEO                                              345
#define IDEOGRAPHIC                                      3434
#define IDEOGRAPHICDESCRIPTIONCHARACTERS                 2915
#define IDEOGRAPHICSYMBOLS                               1380
#define IDEOGRAPHICSYMBOLSANDPUNCTUATION                 2173
#define IDEO__F                                          1209
#define IDEO__FALSE                                       307
#define IDEO__N                                           692
#define IDEO__NO                                          252
#define IDEO__T                                          1426
#define IDEO__TRUE                                       3028
#define IDEO__Y                                          1046
#define IDEO__YES                                        3633
#define IDS                                              3140
#define IDSB                                             3159
#define IDSBINARYOPERATOR                                2469
#define IDSB__F                                          1871
#define IDSB__FALSE                                      3283
#define IDSB__N                                          2389
#define IDSB__NO                                         2282
#define IDSB__T                                          1694
#define IDSB__TRUE                                         63
#define IDSB__Y                                          2030
#define IDSB__YES                                        3892
#define IDST                                             3502
#define IDSTART                                          3411
#define IDSTRINARYOPERATOR                               1253
#define IDST__F                                          1900
#define IDST__FALSE                                      2501
#define IDST__N                                          2405
#define IDST__NO                                         3209
#define IDST__T                                          2072
#define IDST__TRUE                                       2840
#define IDST__Y                                          2417
#define IDST__YES                                        1565
#define IDS__F                                           1419
#define IDS__FALSE                                       2666
#define IDS__N                                           1940
#define IDS__NO                                          3809
#define IDS__T                                           3314
#define IDS__TRUE                                        1088
#define IDS__Y                                             57
#define IDS__YES                                         1060
#define IMPERIALARAMAIC                                  2384
#define INADLAM                                          3240
#define INAEGEANNUMBERS                                  1964
#define INAHOM                                            433
#define INALCHEMICAL                                     1347
#define INALCHEMICALSYMBOLS                                45
#define INALPHABETICPF                                   3405
#define INALPHABETICPRESENTATIONFORMS                    2872
#define INANATOLIANHIEROGLYPHS                           3635
#define INANCIENTGREEKMUSIC                              2275
#define INANCIENTGREEKMUSICALNOTATION                    1707
#define INANCIENTGREEKNUMBERS                            1204
#define INANCIENTSYMBOLS                                 2914
#define INARABIC                                         2981
#define INARABICEXTA                                        2
#define INARABICEXTENDEDA                                3111
#define INARABICMATH                                     3676
#define INARABICMATHEMATICALALPHABETICSYMBOLS            1808
#define INARABICPFA                                       402
#define INARABICPFB                                      2802
#define INARABICPRESENTATIONFORMSA                       1844
#define INARABICPRESENTATIONFORMSB                       2504
#define INARABICSUP                                      3210
#define INARABICSUPPLEMENT                                450
#define INARMENIAN                                        663
#define INARROWS                                         2383
#define INASCII                                          1286
#define INAVESTAN                                        3805
#define INBALINESE                                        322
#define INBAMUM                                          1308
#define INBAMUMSUP                                        554
#define INBAMUMSUPPLEMENT                                3799
#define INBASICLATIN                                     1059
#define INBASSAVAH                                       1404
#define INBATAK                                          2154
#define INBENGALI                                        2229
#define INBHAIKSUKI                                      3807
#define INBLOCKELEMENTS                                  1760
#define INBOPOMOFO                                        429
#define INBOPOMOFOEXT                                    3252
#define INBOPOMOFOEXTENDED                                144
#define INBOXDRAWING                                      974
#define INBRAHMI                                         3103
#define INBRAILLE                                        2284
#define INBRAILLEPATTERNS                                1772
#define INBUGINESE                                        401
#define INBUHID                                          1776
#define INBYZANTINEMUSIC                                 3620
#define INBYZANTINEMUSICALSYMBOLS                        1188
#define INCANADIANSYLLABICS                               844
#define INCARIAN                                          431
#define INCAUCASIANALBANIAN                              2236
#define INCHAKMA                                         2536
#define INCHAM                                            594
#define INCHEROKEE                                       2080
#define INCHEROKEESUP                                    2600
#define INCHEROKEESUPPLEMENT                             3875
#define INCJK                                             243
#define INCJKCOMPAT                                      3291
#define INCJKCOMPATFORMS                                 3900
#define INCJKCOMPATIBILITY                                434
#define INCJKCOMPATIBILITYFORMS                          3506
#define INCJKCOMPATIBILITYIDEOGRAPHS                      170
#define INCJKCOMPATIBILITYIDEOGRAPHSSUPPLEMENT           3510
#define INCJKCOMPATIDEOGRAPHS                             196
#define INCJKCOMPATIDEOGRAPHSSUP                         3109
#define INCJKEXTA                                        1851
#define INCJKEXTB                                        1165
#define INCJKEXTC                                        2708
#define INCJKEXTD                                        2027
#define INCJKEXTE                                        3569
#define INCJKEXTF                                        2816
#define INCJKRADICALSSUP                                 1862
#define INCJKRADICALSSUPPLEMENT                          1591
#define INCJKSTROKES                                     2478
#define INCJKSYMBOLS                                     1070
#define INCJKSYMBOLSANDPUNCTUATION                       3184
#define INCJKUNIFIEDIDEOGRAPHS                           2906
#define INCJKUNIFIEDIDEOGRAPHSEXTENSIONA                 3317
#define INCJKUNIFIEDIDEOGRAPHSEXTENSIONB                   59
#define INCJKUNIFIEDIDEOGRAPHSEXTENSIONC                 2460
#define INCJKUNIFIEDIDEOGRAPHSEXTENSIOND                 2648
#define INCJKUNIFIEDIDEOGRAPHSEXTENSIONE                 1075
#define INCJKUNIFIEDIDEOGRAPHSEXTENSIONF                 1773
#define INCOMBININGDIACRITICALMARKS                      2554
#define INCOMBININGDIACRITICALMARKSEXTENDED              2342
#define INCOMBININGDIACRITICALMARKSFORSYMBOLS            3290
#define INCOMBININGDIACRITICALMARKSSUPPLEMENT            2726
#define INCOMBININGHALFMARKS                              142
#define INCOMBININGMARKSFORSYMBOLS                       1407
#define INCOMMONINDICNUMBERFORMS                         1417
#define INCOMPATJAMO                                      561
#define INCONTROLPICTURES                                 191
#define INCOPTIC                                         1379
#define INCOPTICEPACTNUMBERS                             3239
#define INCOUNTINGROD                                     687
#define INCOUNTINGRODNUMERALS                            1905
#define INCUNEIFORM                                       262
#define INCUNEIFORMNUMBERS                               3669
#define INCUNEIFORMNUMBERSANDPUNCTUATION                 1436
#define INCURRENCYSYMBOLS                                3349
#define INCYPRIOTSYLLABARY                               1278
#define INCYRILLIC                                       1810
#define INCYRILLICEXTA                                   2716
#define INCYRILLICEXTB                                   2028
#define INCYRILLICEXTC                                   3568
#define INCYRILLICEXTENDEDA                              1830
#define INCYRILLICEXTENDEDB                              2515
#define INCYRILLICEXTENDEDC                               970
#define INCYRILLICSUP                                     107
#define INCYRILLICSUPPLEMENT                             1186
#define INCYRILLICSUPPLEMENTARY                          1328
#define INDESERET                                        1109
#define INDEVANAGARI                                     2845
#define INDEVANAGARIEXT                                  1159
#define INDEVANAGARIEXTENDED                             3945
#define INDIACRITICALS                                   3329
#define INDIACRITICALSEXT                                3873
#define INDIACRITICALSFORSYMBOLS                         3906
#define INDIACRITICALSSUP                                 765
#define INDICNUMBERFORMS                                 2799
#define INDINGBATS                                       2558
#define INDOMINO                                         2105
#define INDOMINOTILES                                    2714
#define INDUPLOYAN                                        792
#define INEARLYDYNASTICCUNEIFORM                         2573
#define INEGYPTIANHIEROGLYPHS                             954
#define INELBASAN                                         465
#define INEMOTICONS                                       738
#define INENCLOSEDALPHANUM                                190
#define INENCLOSEDALPHANUMERICS                          2333
#define INENCLOSEDALPHANUMERICSUPPLEMENT                 3928
#define INENCLOSEDALPHANUMSUP                             736
#define INENCLOSEDCJK                                    1217
#define INENCLOSEDCJKLETTERSANDMONTHS                      32
#define INENCLOSEDIDEOGRAPHICSUP                           11
#define INENCLOSEDIDEOGRAPHICSUPPLEMENT                  1575
#define INETHIOPIC                                       2644
#define INETHIOPICEXT                                     206
#define INETHIOPICEXTA                                   3541
#define INETHIOPICEXTENDED                               2108
#define INETHIOPICEXTENDEDA                              3451
#define INETHIOPICSUP                                    2434
#define INETHIOPICSUPPLEMENT                             1885
#define INGENERALPUNCTUATION                             1096
#define INGEOMETRICSHAPES                                3713
#define INGEOMETRICSHAPESEXT                             1741
#define INGEOMETRICSHAPESEXTENDED                        3332
#define INGEORGIAN                                       2254
#define INGEORGIANSUP                                    1995
#define INGEORGIANSUPPLEMENT                              715
#define INGLAGOLITIC                                     1018
#define INGLAGOLITICSUP                                  1458
#define INGLAGOLITICSUPPLEMENT                            362
#define INGOTHIC                                          338
#define INGRANTHA                                          44
#define INGREEK                                          2267
#define INGREEKANDCOPTIC                                 2010
#define INGREEKEXT                                       2672
#define INGREEKEXTENDED                                   407
#define INGUJARATI                                       2710
#define INGURMUKHI                                       1073
#define INHALFANDFULLFORMS                                556
#define INHALFMARKS                                      3559
#define INHALFWIDTHANDFULLWIDTHFORMS                     3442
#define INHANGUL                                          448
#define INHANGULCOMPATIBILITYJAMO                         608
#define INHANGULJAMO                                     1158
#define INHANGULJAMOEXTENDEDA                             990
#define INHANGULJAMOEXTENDEDB                             312
#define INHANGULSYLLABLES                                1802
#define INHANUNOO                                         768
#define INHATRAN                                         2099
#define INHEBREW                                          898
#define INHERITED                                         944
#define INHIGHPRIVATEUSESURROGATES                       3455
#define INHIGHPUSURROGATES                                817
#define INHIGHSURROGATES                                 3330
#define INHIRAGANA                                         85
#define INIDC                                            2588
#define INIDEOGRAPHICDESCRIPTIONCHARACTERS               1895
#define INIDEOGRAPHICSYMBOLS                             2335
#define INIDEOGRAPHICSYMBOLSANDPUNCTUATION               3484
#define INIMPERIALARAMAIC                                 705
#define ININDICNUMBERFORMS                                445
#define ININSCRIPTIONALPAHLAVI                           1990
#define ININSCRIPTIONALPARTHIAN                          1114
#define INIPAEXT                                         2703
#define INIPAEXTENSIONS                                  2437
#define INITIALPUNCTUATION                               1574
#define INJAMO                                            826
#define INJAMOEXTA                                       1780
#define INJAMOEXTB                                       1087
#define INJAVANESE                                       2231
#define INKAITHI                                         3088
#define INKANAEXTA                                        832
#define INKANAEXTENDEDA                                  3685
#define INKANASUP                                        2217
#define INKANASUPPLEMENT                                 1516
#define INKANBUN                                         1833
#define INKANGXI                                          485
#define INKANGXIRADICALS                                 2894
#define INKANNADA                                        2031
#define INKATAKANA                                       1440
#define INKATAKANAEXT                                    1240
#define INKATAKANAPHONETICEXTENSIONS                     1041
#define INKAYAHLI                                          74
#define INKHAROSHTHI                                     1401
#define INKHMER                                           516
#define INKHMERSYMBOLS                                    299
#define INKHOJKI                                         3386
#define INKHUDAWADI                                      1628
#define INLAO                                            2172
#define INLATIN1                                         2205
#define INLATIN1SUP                                      1362
#define INLATIN1SUPPLEMENT                               3829
#define INLATINEXTA                                       152
#define INLATINEXTADDITIONAL                              483
#define INLATINEXTB                                      1695
#define INLATINEXTC                                      3235
#define INLATINEXTD                                       840
#define INLATINEXTE                                      2379
#define INLATINEXTENDEDA                                  395
#define INLATINEXTENDEDADDITIONAL                          97
#define INLATINEXTENDEDB                                 2806
#define INLATINEXTENDEDC                                 1254
#define INLATINEXTENDEDD                                 3652
#define INLATINEXTENDEDE                                 2109
#define INLEPCHA                                         2513
#define INLETTERLIKESYMBOLS                              3576
#define INLIMBU                                           967
#define INLINEARA                                         581
#define INLINEARBIDEOGRAMS                               3724
#define INLINEARBSYLLABARY                               1659
#define INLISU                                           1804
#define INLOWSURROGATES                                   315
#define INLYCIAN                                         3581
#define INLYDIAN                                         2299
#define INMAHAJANI                                         27
#define INMAHJONG                                        1842
#define INMAHJONGTILES                                     28
#define INMALAYALAM                                      3598
#define INMANDAIC                                         607
#define INMANICHAEAN                                     3885
#define INMARCHEN                                        3054
#define INMASARAMGONDI                                   2425
#define INMATHALPHANUM                                    467
#define INMATHEMATICALALPHANUMERICSYMBOLS                 979
#define INMATHEMATICALOPERATORS                          2976
#define INMATHOPERATORS                                  3313
#define INMEETEIMAYEK                                     870
#define INMEETEIMAYEKEXT                                 1570
#define INMEETEIMAYEKEXTENSIONS                          2688
#define INMENDEKIKAKUI                                   2289
#define INMEROITICCURSIVE                                  79
#define INMEROITICHIEROGLYPHS                             568
#define INMIAO                                           3241
#define INMISCARROWS                                     2636
#define INMISCELLANEOUSMATHEMATICALSYMBOLSA              3339
#define INMISCELLANEOUSMATHEMATICALSYMBOLSB               932
#define INMISCELLANEOUSSYMBOLS                           1573
#define INMISCELLANEOUSSYMBOLSANDARROWS                  3524
#define INMISCELLANEOUSSYMBOLSANDPICTOGRAPHS             1738
#define INMISCELLANEOUSTECHNICAL                         2704
#define INMISCMATHSYMBOLSA                               3015
#define INMISCMATHSYMBOLSB                               3720
#define INMISCPICTOGRAPHS                                3005
#define INMISCSYMBOLS                                    2744
#define INMISCTECHNICAL                                  1926
#define INMODI                                           2234
#define INMODIFIERLETTERS                                3407
#define INMODIFIERTONELETTERS                            1167
#define INMONGOLIAN                                       514
#define INMONGOLIANSUP                                   1465
#define INMONGOLIANSUPPLEMENT                             271
#define INMRO                                             579
#define INMULTANI                                        3467
#define INMUSIC                                           837
#define INMUSICALSYMBOLS                                 3092
#define INMYANMAR                                        3437
#define INMYANMAREXTA                                     164
#define INMYANMAREXTB                                     849
#define INMYANMAREXTENDEDA                               3384
#define INMYANMAREXTENDEDB                                982
#define INNABATAEAN                                      1221
#define INNB                                             3888
#define INNEWA                                           1490
#define INNEWTAILUE                                       654
#define INNKO                                            1765
#define INNOBLOCK                                        1344
#define INNUMBERFORMS                                    1692
#define INNUSHU                                           292
#define INOCR                                            3031
#define INOGHAM                                           900
#define INOLCHIKI                                        3406
#define INOLDHUNGARIAN                                   1522
#define INOLDITALIC                                       266
#define INOLDNORTHARABIAN                                2210
#define INOLDPERMIC                                       244
#define INOLDPERSIAN                                     1994
#define INOLDSOUTHARABIAN                                 468
#define INOLDTURKIC                                      3035
#define INOPTICALCHARACTERRECOGNITION                    1257
#define INORIYA                                          1468
#define INORNAMENTALDINGBATS                              284
#define INOSAGE                                          1205
#define INOSMANYA                                         313
#define INPAHAWHHMONG                                    1769
#define INPALMYRENE                                      2224
#define INPAUCINHAU                                        19
#define INPC__BOTTOM                                     2793
#define INPC__BOTTOMANDLEFT                              3081
#define INPC__BOTTOMANDRIGHT                             2326
#define INPC__LEFT                                       2345
#define INPC__LEFTANDRIGHT                                146
#define INPC__NA                                          877
#define INPC__OVERSTRUCK                                  848
#define INPC__RIGHT                                      1931
#define INPC__TOP                                        1402
#define INPC__TOPANDBOTTOM                               1194
#define INPC__TOPANDBOTTOMANDRIGHT                       1637
#define INPC__TOPANDLEFT                                 3404
#define INPC__TOPANDLEFTANDRIGHT                         2743
#define INPC__TOPANDRIGHT                                3537
#define INPC__VISUALORDERLEFT                             919
#define INPHAGSPA                                         855
#define INPHAISTOS                                       2707
#define INPHAISTOSDISC                                   3355
#define INPHOENICIAN                                     3223
#define INPHONETICEXT                                    1992
#define INPHONETICEXTENSIONS                             3334
#define INPHONETICEXTENSIONSSUPPLEMENT                   3495
#define INPHONETICEXTSUP                                  187
#define INPLAYINGCARDS                                   3356
#define INPRIVATEUSE                                     2000
#define INPRIVATEUSEAREA                                 2553
#define INPSALTERPAHLAVI                                 3214
#define INPUA                                            3870
#define INPUNCTUATION                                     999
#define INREJANG                                          503
#define INRUMI                                           3446
#define INRUMINUMERALSYMBOLS                             3619
#define INRUNIC                                          3228
#define INSAMARITAN                                      3199
#define INSAURASHTRA                                      247
#define INSCRIPTIONALPAHLAVI                             3124
#define INSCRIPTIONALPARTHIAN                            2733
#define INSC__AVAGRAHA                                   3540
#define INSC__BINDU                                      1585
#define INSC__BRAHMIJOININGNUMBER                        2227
#define INSC__CANTILLATIONMARK                           2313
#define INSC__CONSONANT                                  2374
#define INSC__CONSONANTDEAD                              2451
#define INSC__CONSONANTFINAL                              804
#define INSC__CONSONANTHEADLETTER                         408
#define INSC__CONSONANTKILLER                            2111
#define INSC__CONSONANTMEDIAL                             148
#define INSC__CONSONANTPLACEHOLDER                        179
#define INSC__CONSONANTPRECEDINGREPHA                    2595
#define INSC__CONSONANTPREFIXED                           623
#define INSC__CONSONANTSUBJOINED                         1267
#define INSC__CONSONANTSUCCEEDINGREPHA                    628
#define INSC__CONSONANTWITHSTACKER                       3766
#define INSC__GEMINATIONMARK                             2047
#define INSC__INVISIBLESTACKER                            532
#define INSC__JOINER                                      473
#define INSC__MODIFYINGLETTER                            1892
#define INSC__NONJOINER                                  1766
#define INSC__NUKTA                                       278
#define INSC__NUMBER                                     3237
#define INSC__NUMBERJOINER                               3527
#define INSC__OTHER                                      2973
#define INSC__PUREKILLER                                 3653
#define INSC__REGISTERSHIFTER                            3763
#define INSC__SYLLABLEMODIFIER                             71
#define INSC__TONELETTER                                 1483
#define INSC__TONEMARK                                   2056
#define INSC__VIRAMA                                     1012
#define INSC__VISARGA                                    3056
#define INSC__VOWEL                                      3295
#define INSC__VOWELDEPENDENT                             2811
#define INSC__VOWELINDEPENDENT                           2078
#define INSHARADA                                         355
#define INSHAVIAN                                         245
#define INSHORTHANDFORMATCONTROLS                        2507
#define INSIDDHAM                                        3191
#define INSINHALA                                         596
#define INSINHALAARCHAICNUMBERS                          1340
#define INSMALLFORMS                                     3091
#define INSMALLFORMVARIANTS                              1118
#define INSORASOMPENG                                    3050
#define INSOYOMBO                                        1674
#define INSPACINGMODIFIERLETTERS                         2016
#define INSPECIALS                                       2796
#define INSUNDANESE                                      3765
#define INSUNDANESESUP                                    920
#define INSUNDANESESUPPLEMENT                            3514
#define INSUPARROWSA                                     3204
#define INSUPARROWSB                                     2521
#define INSUPARROWSC                                      118
#define INSUPERANDSUB                                    3328
#define INSUPERSCRIPTSANDSUBSCRIPTS                      1991
#define INSUPMATHOPERATORS                               3400
#define INSUPPLEMENTALARROWSA                            2208
#define INSUPPLEMENTALARROWSB                             641
#define INSUPPLEMENTALARROWSC                            3042
#define INSUPPLEMENTALMATHEMATICALOPERATORS               508
#define INSUPPLEMENTALPUNCTUATION                        1246
#define INSUPPLEMENTALSYMBOLSANDPICTOGRAPHS              1972
#define INSUPPLEMENTARYPRIVATEUSEAREAA                   1629
#define INSUPPLEMENTARYPRIVATEUSEAREAB                   1577
#define INSUPPUAA                                        1846
#define INSUPPUAB                                        2530
#define INSUPPUNCTUATION                                 3767
#define INSUPSYMBOLSANDPICTOGRAPHS                       2157
#define INSUTTONSIGNWRITING                               984
#define INSYLOTINAGRI                                     733
#define INSYRIAC                                         3743
#define INSYRIACSUP                                      2340
#define INSYRIACSUPPLEMENT                               2146
#define INTAGALOG                                        3461
#define INTAGBANWA                                        188
#define INTAGS                                           3694
#define INTAILE                                           964
#define INTAITHAM                                        3144
#define INTAIVIET                                        1051
#define INTAIXUANJING                                    3393
#define INTAIXUANJINGSYMBOLS                              562
#define INTAKRI                                          2532
#define INTAMIL                                          3009
#define INTANGUT                                         1987
#define INTANGUTCOMPONENTS                               1261
#define INTELUGU                                          620
#define INTHAANA                                         1594
#define INTHAI                                           2849
#define INTIBETAN                                        1725
#define INTIFINAGH                                       2448
#define INTIRHUTA                                        3494
#define INTRANSPORTANDMAP                                3523
#define INTRANSPORTANDMAPSYMBOLS                         2631
#define INUCAS                                            459
#define INUCASEXT                                         393
#define INUGARITIC                                       3288
#define INUNIFIEDCANADIANABORIGINALSYLLABICS               10
#define INUNIFIEDCANADIANABORIGINALSYLLABICSEXTENDED     1756
#define INVAI                                             672
#define INVARIATIONSELECTORS                             1054
#define INVARIATIONSELECTORSSUPPLEMENT                   3748
#define INVEDICEXT                                       2560
#define INVEDICEXTENSIONS                                  17
#define INVERTICALFORMS                                  1775
#define INVS                                               39
#define INVSSUP                                          3938
#define INWARANGCITI                                      759
#define INYIJING                                          178
#define INYIJINGHEXAGRAMSYMBOLS                          2842
#define INYIRADICALS                                      208
#define INYISYLLABLES                                    3600
#define INZANABAZARSQUARE                                 155
#define IN__UNASSIGNED                                    451
#define IPAEXT                                            892
#define IPAEXTENSIONS                                    3238
#define ISADLAM                                           961
#define ISADLM                                           3273
#define ISAEGEANNUMBERS                                  1701
#define ISAGHB                                           2908
#define ISAHEX                                           1480
#define ISAHOM                                           2422
#define ISALCHEMICAL                                     1263
#define ISALCHEMICALSYMBOLS                               398
#define ISALL                                            2572
#define ISALNUM                                           642
#define ISALPHA                                          1985
#define ISALPHABETIC                                     2307
#define ISALPHABETICPF                                   2498
#define ISALPHABETICPRESENTATIONFORMS                    1642
#define ISANATOLIANHIEROGLYPHS                           2924
#define ISANCIENTGREEKMUSIC                               674
#define ISANCIENTGREEKMUSICALNOTATION                    2535
#define ISANCIENTGREEKNUMBERS                            1930
#define ISANCIENTSYMBOLS                                 3832
#define ISANY                                             879
#define ISARAB                                           3680
#define ISARABIC                                         3431
#define ISARABICEXTA                                     1384
#define ISARABICEXTENDEDA                                1558
#define ISARABICMATH                                     1986
#define ISARABICMATHEMATICALALPHABETICSYMBOLS            1001
#define ISARABICPFA                                      2201
#define ISARABICPFB                                      3741
#define ISARABICPRESENTATIONFORMSA                        719
#define ISARABICPRESENTATIONFORMSB                       2262
#define ISARABICSUP                                      2949
#define ISARABICSUPPLEMENT                               2860
#define ISARMENIAN                                       2366
#define ISARMI                                           3180
#define ISARMN                                           2156
#define ISARROWS                                          217
#define ISASCII                                          2094
#define ISASCIIHEXDIGIT                                  2584
#define ISASSIGNED                                       2965
#define ISAVESTAN                                        1605
#define ISAVST                                           3893
#define ISBALI                                           2209
#define ISBALINESE                                       2746
#define ISBAMU                                           3647
#define ISBAMUM                                          1121
#define ISBAMUMSUP                                       1425
#define ISBAMUMSUPPLEMENT                                2398
#define ISBASICLATIN                                     2240
#define ISBASS                                           2185
#define ISBASSAVAH                                       1678
#define ISBATAK                                          1462
#define ISBATK                                            884
#define ISBENG                                           2822
#define ISBENGALI                                         383
#define ISBHAIKSUKI                                      3702
#define ISBHKS                                           1716
#define ISBIDIC                                          1447
#define ISBIDICONTROL                                    3899
#define ISBIDIM                                           590
#define ISBIDIMIRRORED                                    728
#define ISBLANK                                          1554
#define ISBLOCKELEMENTS                                   421
#define ISBOPO                                           1103
#define ISBOPOMOFO                                       3306
#define ISBOPOMOFOEXT                                    3848
#define ISBOPOMOFOEXTENDED                               1614
#define ISBOXDRAWING                                       31
#define ISBRAH                                           2879
#define ISBRAHMI                                         3575
#define ISBRAI                                            501
#define ISBRAILLE                                        2776
#define ISBRAILLEPATTERNS                                2787
#define ISBUGI                                            128
#define ISBUGINESE                                       1316
#define ISBUHD                                           1375
#define ISBUHID                                           669
#define ISBYZANTINEMUSIC                                  956
#define ISBYZANTINEMUSICALSYMBOLS                        3833
#define ISC                                              2280
#define ISCAKM                                            397
#define ISCANADIANABORIGINAL                             1971
#define ISCANADIANSYLLABICS                              2445
#define ISCANS                                            221
#define ISCARI                                           2943
#define ISCARIAN                                          655
#define ISCASED                                          1679
#define ISCASEDLETTER                                     303
#define ISCASEIGNORABLE                                  2907
#define ISCAUCASIANALBANIAN                              2570
#define ISCC                                             1153
#define ISCE                                              300
#define ISCF                                             1841
#define ISCHAKMA                                         1676
#define ISCHAM                                           1686
#define ISCHANGESWHENCASEFOLDED                          1901
#define ISCHANGESWHENCASEMAPPED                          1729
#define ISCHANGESWHENLOWERCASED                           869
#define ISCHANGESWHENNFKCCASEFOLDED                       511
#define ISCHANGESWHENTITLECASED                           602
#define ISCHANGESWHENUPPERCASED                          3849
#define ISCHER                                           1906
#define ISCHEROKEE                                       3709
#define ISCHEROKEESUP                                    2851
#define ISCHEROKEESUPPLEMENT                             1916
#define ISCI                                             2527
#define ISCJK                                             841
#define ISCJKCOMPAT                                       737
#define ISCJKCOMPATFORMS                                 1880
#define ISCJKCOMPATIBILITY                               3319
#define ISCJKCOMPATIBILITYFORMS                           754
#define ISCJKCOMPATIBILITYIDEOGRAPHS                      721
#define ISCJKCOMPATIBILITYIDEOGRAPHSSUPPLEMENT           2980
#define ISCJKCOMPATIDEOGRAPHS                            3403
#define ISCJKCOMPATIDEOGRAPHSSUP                         3101
#define ISCJKEXTA                                        2467
#define ISCJKEXTB                                        3154
#define ISCJKEXTC                                        1608
#define ISCJKEXTD                                        1779
#define ISCJKEXTE                                         234
#define ISCJKEXTF                                         928
#define ISCJKRADICALSSUP                                  630
#define ISCJKRADICALSSUPPLEMENT                          1912
#define ISCJKSTROKES                                      241
#define ISCJKSYMBOLS                                     3014
#define ISCJKSYMBOLSANDPUNCTUATION                       2344
#define ISCJKUNIFIEDIDEOGRAPHS                           2548
#define ISCJKUNIFIEDIDEOGRAPHSEXTENSIONA                 3862
#define ISCJKUNIFIEDIDEOGRAPHSEXTENSIONB                 1456
#define ISCJKUNIFIEDIDEOGRAPHSEXTENSIONC                 2998
#define ISCJKUNIFIEDIDEOGRAPHSEXTENSIOND                  482
#define ISCJKUNIFIEDIDEOGRAPHSEXTENSIONE                 2149
#define ISCJKUNIFIEDIDEOGRAPHSEXTENSIONF                 3690
#define ISCLOSEPUNCTUATION                                859
#define ISCN                                             2360
#define ISCNTRL                                          2314
#define ISCO                                             3905
#define ISCOMBININGDIACRITICALMARKS                      3201
#define ISCOMBININGDIACRITICALMARKSEXTENDED               274
#define ISCOMBININGDIACRITICALMARKSFORSYMBOLS            1325
#define ISCOMBININGDIACRITICALMARKSSUPPLEMENT            1658
#define ISCOMBININGHALFMARKS                             2019
#define ISCOMBININGMARK                                  3370
#define ISCOMBININGMARKSFORSYMBOLS                        134
#define ISCOMMON                                         2803
#define ISCOMMONINDICNUMBERFORMS                         1494
#define ISCOMPATJAMO                                     2468
#define ISCOMPEX                                         1723
#define ISCOMPOSITIONEXCLUSION                           3162
#define ISCONNECTORPUNCTUATION                            694
#define ISCONTROL                                        3138
#define ISCONTROLPICTURES                                3453
#define ISCOPT                                           3623
#define ISCOPTIC                                          815
#define ISCOPTICEPACTNUMBERS                              993
#define ISCOUNTINGROD                                    2813
#define ISCOUNTINGRODNUMERALS                            2349
#define ISCPRT                                           3123
#define ISCS                                              119
#define ISCUNEIFORM                                      2247
#define ISCUNEIFORMNUMBERS                               2143
#define ISCUNEIFORMNUMBERSANDPUNCTUATION                 2441
#define ISCURRENCYSYMBOL                                 3679
#define ISCURRENCYSYMBOLS                                2116
#define ISCWCF                                           3941
#define ISCWCM                                           3351
#define ISCWKCF                                          2424
#define ISCWL                                             120
#define ISCWT                                            3544
#define ISCWU                                            1142
#define ISCYPRIOT                                         945
#define ISCYPRIOTSYLLABARY                               1984
#define ISCYRILLIC                                       2365
#define ISCYRILLICEXTA                                   3918
#define ISCYRILLICEXTB                                   2371
#define ISCYRILLICEXTC                                    818
#define ISCYRILLICEXTENDEDA                              1392
#define ISCYRILLICEXTENDEDB                               699
#define ISCYRILLICEXTENDEDC                              2241
#define ISCYRILLICSUP                                    3879
#define ISCYRILLICSUPPLEMENT                             2338
#define ISCYRILLICSUPPLEMENTARY                           337
#define ISCYRL                                           3423
#define ISDASH                                           2485
#define ISDASHPUNCTUATION                                1801
#define ISDECIMALNUMBER                                  1091
#define ISDEFAULTIGNORABLECODEPOINT                       466
#define ISDEP                                            2886
#define ISDEPRECATED                                      439
#define ISDESERET                                        3507
#define ISDEVA                                           1105
#define ISDEVANAGARI                                       89
#define ISDEVANAGARIEXT                                  1582
#define ISDEVANAGARIEXTENDED                             1276
#define ISDI                                             2683
#define ISDIA                                            1415
#define ISDIACRITIC                                        56
#define ISDIACRITICALS                                   3596
#define ISDIACRITICALSEXT                                2433
#define ISDIACRITICALSFORSYMBOLS                          588
#define ISDIACRITICALSSUP                                3051
#define ISDIGIT                                          3019
#define ISDINGBATS                                       1546
#define ISDOMINO                                         3116
#define ISDOMINOTILES                                    3086
#define ISDSRT                                            517
#define ISDUPL                                           3586
#define ISDUPLOYAN                                       1366
#define ISEARLYDYNASTICCUNEIFORM                           98
#define ISEGYP                                           1464
#define ISEGYPTIANHIEROGLYPHS                            2567
#define ISELBA                                           1129
#define ISELBASAN                                        3439
#define ISEMOTICONS                                      3782
#define ISENCLOSEDALPHANUM                               1768
#define ISENCLOSEDALPHANUMERICS                          1405
#define ISENCLOSEDALPHANUMERICSUPPLEMENT                 2317
#define ISENCLOSEDALPHANUMSUP                            3020
#define ISENCLOSEDCJK                                    2748
#define ISENCLOSEDCJKLETTERSANDMONTHS                    2239
#define ISENCLOSEDIDEOGRAPHICSUP                          718
#define ISENCLOSEDIDEOGRAPHICSUPPLEMENT                  2026
#define ISENCLOSINGMARK                                  3768
#define ISETHI                                           1714
#define ISETHIOPIC                                       3063
#define ISETHIOPICEXT                                    3292
#define ISETHIOPICEXTA                                   3076
#define ISETHIOPICEXTENDED                               1944
#define ISETHIOPICEXTENDEDA                              2974
#define ISETHIOPICSUP                                    1332
#define ISETHIOPICSUPPLEMENT                             2070
#define ISEXT                                            3810
#define ISEXTENDER                                       1106
#define ISFINALPUNCTUATION                               2781
#define ISFORMAT                                          888
#define ISFULLCOMPOSITIONEXCLUSION                       3909
#define ISGENERALPUNCTUATION                              686
#define ISGEOMETRICSHAPES                                3663
#define ISGEOMETRICSHAPESEXT                                4
#define ISGEOMETRICSHAPESEXTENDED                        2017
#define ISGEOR                                           2411
#define ISGEORGIAN                                       3655
#define ISGEORGIANSUP                                    3251
#define ISGEORGIANSUPPLEMENT                             2130
#define ISGLAG                                           2875
#define ISGLAGOLITIC                                     3280
#define ISGLAGOLITICSUP                                   673
#define ISGLAGOLITICSUPPLEMENT                           2490
#define ISGONM                                           1107
#define ISGOTH                                           1412
#define ISGOTHIC                                         1423
#define ISGRAN                                           1081
#define ISGRANTHA                                         740
#define ISGRAPH                                          2900
#define ISGRAPHEMEBASE                                   3820
#define ISGRAPHEMEEXTEND                                  773
#define ISGRBASE                                         1717
#define ISGREEK                                          3371
#define ISGREEKANDCOPTIC                                 3276
#define ISGREEKEXT                                       2627
#define ISGREEKEXTENDED                                   275
#define ISGREK                                           2132
#define ISGREXT                                          1859
#define ISGUJARATI                                       2416
#define ISGUJR                                            346
#define ISGURMUKHI                                       2664
#define ISGURU                                           3215
#define ISHALFANDFULLFORMS                               2195
#define ISHALFMARKS                                      3470
#define ISHALFWIDTHANDFULLWIDTHFORMS                     3171
#define ISHAN                                             500
#define ISHANG                                           2971
#define ISHANGUL                                         2956
#define ISHANGULCOMPATIBILITYJAMO                        1514
#define ISHANGULJAMO                                      791
#define ISHANGULJAMOEXTENDEDA                             293
#define ISHANGULJAMOEXTENDEDB                             981
#define ISHANGULSYLLABLES                                 347
#define ISHANI                                           2628
#define ISHANO                                           3482
#define ISHANUNOO                                         237
#define ISHATR                                            875
#define ISHATRAN                                         3696
#define ISHEBR                                           1812
#define ISHEBREW                                         2101
#define ISHEX                                             610
#define ISHEXDIGIT                                       1839
#define ISHIGHPRIVATEUSESURROGATES                        426
#define ISHIGHPUSURROGATES                               2410
#define ISHIGHSURROGATES                                 1400
#define ISHIRA                                           1537
#define ISHIRAGANA                                       2499
#define ISHLUW                                            285
#define ISHMNG                                            257
#define ISHORIZSPACE                                     1878
#define ISHUNG                                            573
#define ISHYPHEN                                          272
#define ISIDC                                            2272
#define ISIDCONTINUE                                     2270
#define ISIDEO                                           1336
#define ISIDEOGRAPHIC                                    2885
#define ISIDEOGRAPHICDESCRIPTIONCHARACTERS               3818
#define ISIDEOGRAPHICSYMBOLS                             2865
#define ISIDEOGRAPHICSYMBOLSANDPUNCTUATION               2014
#define ISIDS                                            1120
#define ISIDSB                                           3519
#define ISIDSBINARYOPERATOR                              3869
#define ISIDST                                           1627
#define ISIDSTART                                        2258
#define ISIDSTRINARYOPERATOR                             3336
#define ISIMPERIALARAMAIC                                2476
#define ISINDICNUMBERFORMS                               3876
#define ISINHERITED                                       653
#define ISINITIALPUNCTUATION                              935
#define ISINSCRIPTIONALPAHLAVI                            411
#define ISINSCRIPTIONALPARTHIAN                          2561
#define ISIPAEXT                                         3722
#define ISIPAEXTENSIONS                                  1502
#define ISITAL                                           1206
#define ISJAMO                                           1312
#define ISJAMOEXTA                                       2488
#define ISJAMOEXTB                                        946
#define ISJAVA                                           2332
#define ISJAVANESE                                       2184
#define ISJOINC                                           298
#define ISJOINCONTROL                                    2755
#define ISKAITHI                                          881
#define ISKALI                                           2668
#define ISKANA                                           1586
#define ISKANAEXTA                                       1353
#define ISKANAEXTENDEDA                                  3567
#define ISKANASUP                                        1814
#define ISKANASUPPLEMENT                                 3408
#define ISKANBUN                                         2150
#define ISKANGXI                                         3753
#define ISKANGXIRADICALS                                 1460
#define ISKANNADA                                        2353
#define ISKATAKANA                                       2330
#define ISKATAKANAEXT                                     175
#define ISKATAKANAPHONETICEXTENSIONS                        3
#define ISKAYAHLI                                          72
#define ISKHAR                                           2935
#define ISKHAROSHTHI                                     2735
#define ISKHMER                                          3707
#define ISKHMERSYMBOLS                                   1177
#define ISKHMR                                           1132
#define ISKHOJ                                           3934
#define ISKHOJKI                                         1568
#define ISKHUDAWADI                                      2874
#define ISKNDA                                           1988
#define ISKTHI                                           1324
#define ISL                                              1072
#define ISLANA                                            143
#define ISLAO                                            3842
#define ISLAOO                                           1319
#define ISLATIN                                           911
#define ISLATIN1                                         1189
#define ISLATIN1SUP                                      3891
#define ISLATIN1SUPPLEMENT                               2858
#define ISLATINEXTA                                      2721
#define ISLATINEXTADDITIONAL                              108
#define ISLATINEXTB                                      1176
#define ISLATINEXTC                                      3579
#define ISLATINEXTD                                      2555
#define ISLATINEXTE                                      1005
#define ISLATINEXTENDEDA                                  212
#define ISLATINEXTENDEDADDITIONAL                        1049
#define ISLATINEXTENDEDB                                 3462
#define ISLATINEXTENDEDC                                 1074
#define ISLATINEXTENDEDD                                  899
#define ISLATINEXTENDEDE                                 2440
#define ISLATN                                           1656
#define ISLC                                              481
#define ISLEPC                                           1431
#define ISLEPCHA                                         1742
#define ISLETTER                                         2999
#define ISLETTERLIKESYMBOLS                              3389
#define ISLETTERNUMBER                                    693
#define ISLIMB                                           2145
#define ISLIMBU                                           704
#define ISLINA                                           3281
#define ISLINB                                            878
#define ISLINEARA                                        2232
#define ISLINEARB                                        2918
#define ISLINEARBIDEOGRAMS                               2633
#define ISLINEARBSYLLABARY                                200
#define ISLINESEPARATOR                                  2656
#define ISLISU                                           2378
#define ISLL                                             1690
#define ISLM                                              147
#define ISLO                                             3203
#define ISLOE                                            1197
#define ISLOGICALORDEREXCEPTION                          3205
#define ISLOWER                                           631
#define ISLOWERCASE                                      3293
#define ISLOWERCASELETTER                                 385
#define ISLOWSURROGATES                                  2055
#define ISLT                                              136
#define ISLU                                             2544
#define ISLYCI                                           1489
#define ISLYCIAN                                         3894
#define ISLYDI                                           1461
#define ISLYDIAN                                         2084
#define ISL_                                              321
#define ISL__                                             124
#define ISM                                              2617
#define ISMAHAJANI                                       1953
#define ISMAHJ                                           3599
#define ISMAHJONG                                        1910
#define ISMAHJONGTILES                                   1457
#define ISMALAYALAM                                      3379
#define ISMAND                                           1959
#define ISMANDAIC                                        3657
#define ISMANI                                           3166
#define ISMANICHAEAN                                     3027
#define ISMARC                                           2801
#define ISMARCHEN                                         996
#define ISMARK                                           3491
#define ISMASARAMGONDI                                   1427
#define ISMATH                                            619
#define ISMATHALPHANUM                                     13
#define ISMATHEMATICALALPHANUMERICSYMBOLS                3662
#define ISMATHEMATICALOPERATORS                          2198
#define ISMATHOPERATORS                                  2753
#define ISMATHSYMBOL                                     1998
#define ISMC                                             2612
#define ISME                                             3466
#define ISMEETEIMAYEK                                    3260
#define ISMEETEIMAYEKEXT                                 3208
#define ISMEETEIMAYEKEXTENSIONS                           743
#define ISMEND                                           2890
#define ISMENDEKIKAKUI                                    873
#define ISMERC                                            645
#define ISMERO                                           1625
#define ISMEROITICCURSIVE                                 189
#define ISMEROITICHIEROGLYPHS                            1709
#define ISMIAO                                              1
#define ISMISCARROWS                                     3066
#define ISMISCELLANEOUSMATHEMATICALSYMBOLSA              3639
#define ISMISCELLANEOUSMATHEMATICALSYMBOLSB              1624
#define ISMISCELLANEOUSSYMBOLS                           1850
#define ISMISCELLANEOUSSYMBOLSANDARROWS                   591
#define ISMISCELLANEOUSSYMBOLSANDPICTOGRAPHS             2387
#define ISMISCELLANEOUSTECHNICAL                         2814
#define ISMISCMATHSYMBOLSA                               3270
#define ISMISCMATHSYMBOLSB                                865
#define ISMISCPICTOGRAPHS                                1908
#define ISMISCSYMBOLS                                     463
#define ISMISCTECHNICAL                                  3399
#define ISMLYM                                           3863
#define ISMN                                             2263
#define ISMODI                                           2303
#define ISMODIFIERLETTER                                  629
#define ISMODIFIERLETTERS                                3860
#define ISMODIFIERSYMBOL                                 2392
#define ISMODIFIERTONELETTERS                            1889
#define ISMONG                                            538
#define ISMONGOLIAN                                      1849
#define ISMONGOLIANSUP                                   2623
#define ISMONGOLIANSUPPLEMENT                            1403
#define ISMRO                                            1513
#define ISMROO                                           1666
#define ISMTEI                                            269
#define ISMULT                                           2242
#define ISMULTANI                                         505
#define ISMUSIC                                          3735
#define ISMUSICALSYMBOLS                                 3080
#define ISMYANMAR                                        1583
#define ISMYANMAREXTA                                     617
#define ISMYANMAREXTB                                    3881
#define ISMYANMAREXTENDEDA                               2199
#define ISMYANMAREXTENDEDB                               2882
#define ISMYMR                                           3087
#define ISN                                              1938
#define ISNABATAEAN                                      3500
#define ISNARB                                           1960
#define ISNB                                             1398
#define ISNBAT                                           1252
#define ISNCHAR                                           359
#define ISND                                             2249
#define ISNEWA                                           1164
#define ISNEWTAILUE                                      3327
#define ISNKO                                            2120
#define ISNKOO                                           2809
#define ISNL                                             2770
#define ISNO                                             2048
#define ISNOBLOCK                                        3660
#define ISNONCHARACTERCODEPOINT                          3232
#define ISNONSPACINGMARK                                  678
#define ISNSHU                                           2122
#define ISNUMBER                                          909
#define ISNUMBERFORMS                                    2196
#define ISNUSHU                                          3432
#define ISOCR                                            1937
#define ISOGAM                                            712
#define ISOGHAM                                          3642
#define ISOLCHIKI                                        2901
#define ISOLCK                                           2102
#define ISOLDHUNGARIAN                                    626
#define ISOLDITALIC                                      2337
#define ISOLDNORTHARABIAN                                1650
#define ISOLDPERMIC                                      1250
#define ISOLDPERSIAN                                     1085
#define ISOLDSOUTHARABIAN                                1719
#define ISOLDTURKIC                                      2491
#define ISOPENPUNCTUATION                                3253
#define ISOPTICALCHARACTERRECOGNITION                    1079
#define ISORIYA                                           367
#define ISORKH                                           2477
#define ISORNAMENTALDINGBATS                             3487
#define ISORYA                                           2645
#define ISOSAGE                                           263
#define ISOSGE                                           2453
#define ISOSMA                                            980
#define ISOSMANYA                                        2878
#define ISOTHER                                          3459
#define ISOTHERLETTER                                     820
#define ISOTHERNUMBER                                     810
#define ISOTHERPUNCTUATION                               2972
#define ISOTHERSYMBOL                                    1357
#define ISP                                              2694
#define ISPAHAWHHMONG                                     612
#define ISPALM                                           1063
#define ISPALMYRENE                                      2462
#define ISPARAGRAPHSEPARATOR                              540
#define ISPATSYN                                          549
#define ISPATTERNSYNTAX                                  3242
#define ISPATTERNWHITESPACE                              2832
#define ISPATWS                                          1428
#define ISPAUC                                           3410
#define ISPAUCINHAU                                       784
#define ISPC                                             3048
#define ISPCM                                            2751
#define ISPD                                             3219
#define ISPE                                             1660
#define ISPERLSPACE                                      2691
#define ISPERLWORD                                       2911
#define ISPERM                                           2413
#define ISPF                                             2364
#define ISPHAG                                           1011
#define ISPHAGSPA                                         100
#define ISPHAISTOS                                        486
#define ISPHAISTOSDISC                                   2905
#define ISPHLI                                           1069
#define ISPHLP                                           3136
#define ISPHNX                                           2057
#define ISPHOENICIAN                                      624
#define ISPHONETICEXT                                    2863
#define ISPHONETICEXTENSIONS                             2447
#define ISPHONETICEXTENSIONSSUPPLEMENT                   3854
#define ISPHONETICEXTSUP                                  158
#define ISPI                                             3376
#define ISPLAYINGCARDS                                    688
#define ISPLRD                                           3749
#define ISPO                                              309
#define ISPOSIXALNUM                                      521
#define ISPOSIXALPHA                                     1754
#define ISPOSIXBLANK                                      406
#define ISPOSIXCNTRL                                     2671
#define ISPOSIXDIGIT                                     1806
#define ISPOSIXGRAPH                                     1441
#define ISPOSIXLOWER                                     1029
#define ISPOSIXPRINT                                     2292
#define ISPOSIXPUNCT                                     1293
#define ISPOSIXSPACE                                     2583
#define ISPOSIXUPPER                                     2203
#define ISPOSIXWORD                                      1298
#define ISPOSIXXDIGIT                                     939
#define ISPREPENDEDCONCATENATIONMARK                      793
#define ISPRINT                                          3808
#define ISPRIVATEUSE                                     1071
#define ISPRIVATEUSEAREA                                  535
#define ISPRTI                                           3914
#define ISPS                                              123
#define ISPSALTERPAHLAVI                                  777
#define ISPUA                                             923
#define ISPUNCT                                           710
#define ISPUNCTUATION                                     555
#define ISQAAC                                           2138
#define ISQAAI                                           1795
#define ISQMARK                                          1762
#define ISQUOTATIONMARK                                  3220
#define ISRADICAL                                        2509
#define ISREGIONALINDICATOR                              3542
#define ISREJANG                                         2126
#define ISRI                                             2059
#define ISRJNG                                           3422
#define ISRUMI                                           3068
#define ISRUMINUMERALSYMBOLS                             3146
#define ISRUNIC                                          3867
#define ISRUNR                                           2563
#define ISS                                              1260
#define ISSAMARITAN                                      3913
#define ISSAMR                                           1745
#define ISSARB                                            597
#define ISSAUR                                           3161
#define ISSAURASHTRA                                     1968
#define ISSC                                              921
#define ISSD                                             2464
#define ISSENTENCETERMINAL                               3788
#define ISSEPARATOR                                      1732
#define ISSGNW                                            611
#define ISSHARADA                                        2355
#define ISSHAVIAN                                        3141
#define ISSHAW                                           3139
#define ISSHORTHANDFORMATCONTROLS                        1222
#define ISSHRD                                           2511
#define ISSIDD                                           1829
#define ISSIDDHAM                                        2712
#define ISSIGNWRITING                                    3924
#define ISSIND                                           2940
#define ISSINH                                           3803
#define ISSINHALA                                        2216
#define ISSINHALAARCHAICNUMBERS                          2610
#define ISSK                                             1442
#define ISSM                                              582
#define ISSMALLFORMS                                     3594
#define ISSMALLFORMVARIANTS                              2639
#define ISSO                                             3670
#define ISSOFTDOTTED                                     1669
#define ISSORA                                           3387
#define ISSORASOMPENG                                    2711
#define ISSOYO                                            219
#define ISSOYOMBO                                          58
#define ISSPACE                                          2251
#define ISSPACEPERL                                       350
#define ISSPACESEPARATOR                                 1002
#define ISSPACINGMARK                                    3243
#define ISSPACINGMODIFIERLETTERS                         1817
#define ISSPECIALS                                       2621
#define ISSTERM                                          2774
#define ISSUND                                           2279
#define ISSUNDANESE                                      3421
#define ISSUNDANESESUP                                   3738
#define ISSUNDANESESUPPLEMENT                             632
#define ISSUPARROWSA                                     1925
#define ISSUPARROWSB                                      380
#define ISSUPARROWSC                                     2777
#define ISSUPERANDSUB                                    3645
#define ISSUPERSCRIPTSANDSUBSCRIPTS                      3902
#define ISSUPMATHOPERATORS                               1943
#define ISSUPPLEMENTALARROWSA                            1610
#define ISSUPPLEMENTALARROWSB                            3149
#define ISSUPPLEMENTALARROWSC                             750
#define ISSUPPLEMENTALMATHEMATICALOPERATORS              2054
#define ISSUPPLEMENTALPUNCTUATION                         239
#define ISSUPPLEMENTALSYMBOLSANDPICTOGRAPHS              2676
#define ISSUPPLEMENTARYPRIVATEUSEAREAA                   3344
#define ISSUPPLEMENTARYPRIVATEUSEAREAB                   1800
#define ISSUPPUAA                                        3889
#define ISSUPPUAB                                        3055
#define ISSUPPUNCTUATION                                  825
#define ISSUPSYMBOLSANDPICTOGRAPHS                        730
#define ISSURROGATE                                      1720
#define ISSUTTONSIGNWRITING                               171
#define ISSYLO                                           3396
#define ISSYLOTINAGRI                                    2728
#define ISSYMBOL                                          850
#define ISSYRC                                           2159
#define ISSYRIAC                                          995
#define ISSYRIACSUP                                      2063
#define ISSYRIACSUPPLEMENT                               3827
#define ISTAGALOG                                        1512
#define ISTAGB                                            650
#define ISTAGBANWA                                        930
#define ISTAGS                                            149
#define ISTAILE                                          2968
#define ISTAITHAM                                        2480
#define ISTAIVIET                                        1950
#define ISTAIXUANJING                                    1214
#define ISTAIXUANJINGSYMBOLS                               23
#define ISTAKR                                           2394
#define ISTAKRI                                           949
#define ISTALE                                           1152
#define ISTALU                                           2204
#define ISTAMIL                                          3732
#define ISTAML                                           1449
#define ISTANG                                           1898
#define ISTANGUT                                          779
#define ISTANGUTCOMPONENTS                               3132
#define ISTAVT                                            151
#define ISTELU                                            735
#define ISTELUGU                                         3917
#define ISTERM                                            453
#define ISTERMINALPUNCTUATION                              82
#define ISTFNG                                           3518
#define ISTGLG                                           3036
#define ISTHAA                                           2732
#define ISTHAANA                                         1101
#define ISTHAI                                           2214
#define ISTIBETAN                                          67
#define ISTIBT                                           2136
#define ISTIFINAGH                                        498
#define ISTIRH                                           2985
#define ISTIRHUTA                                        2450
#define ISTITLE                                           534
#define ISTITLECASE                                      1976
#define ISTITLECASELETTER                                 867
#define ISTRANSPORTANDMAP                                1646
#define ISTRANSPORTANDMAPSYMBOLS                          169
#define ISUCAS                                            834
#define ISUCASEXT                                        3158
#define ISUGAR                                           3605
#define ISUGARITIC                                       2669
#define ISUIDEO                                          3465
#define ISUNASSIGNED                                      649
#define ISUNICODE                                        3229
#define ISUNIFIEDCANADIANABORIGINALSYLLABICS             3361
#define ISUNIFIEDCANADIANABORIGINALSYLLABICSEXTENDED     1009
#define ISUNIFIEDIDEOGRAPH                               2959
#define ISUNKNOWN                                         753
#define ISUPPER                                          1274
#define ISUPPERCASE                                      3786
#define ISUPPERCASELETTER                                2589
#define ISVAI                                            3845
#define ISVAII                                           1967
#define ISVARIATIONSELECTOR                               755
#define ISVARIATIONSELECTORS                              683
#define ISVARIATIONSELECTORSSUPPLEMENT                   1190
#define ISVEDICEXT                                       2369
#define ISVEDICEXTENSIONS                                3552
#define ISVERTICALFORMS                                  1774
#define ISVERTSPACE                                      1551
#define ISVS                                              232
#define ISVSSUP                                          1236
#define ISWARA                                           3940
#define ISWARANGCITI                                     1434
#define ISWHITESPACE                                     2958
#define ISWORD                                            183
#define ISWSPACE                                         3266
#define ISXDIGIT                                         3263
#define ISXIDC                                           3733
#define ISXIDCONTINUE                                    3324
#define ISXIDS                                           2693
#define ISXIDSTART                                        894
#define ISXPEO                                           3944
#define ISXPERLSPACE                                       15
#define ISXPOSIXALNUM                                    1251
#define ISXPOSIXALPHA                                    3323
#define ISXPOSIXBLANK                                    3828
#define ISXPOSIXCNTRL                                     905
#define ISXPOSIXDIGIT                                     384
#define ISXPOSIXGRAPH                                     174
#define ISXPOSIXLOWER                                    3126
#define ISXPOSIXPRINT                                    3558
#define ISXPOSIXPUNCT                                    3759
#define ISXPOSIXSPACE                                      38
#define ISXPOSIXUPPER                                    3756
#define ISXPOSIXWORD                                     1116
#define ISXPOSIXXDIGIT                                   2920
#define ISXSUX                                           1787
#define ISYI                                             2790
#define ISYIII                                            811
#define ISYIJING                                         3770
#define ISYIJINGHEXAGRAMSYMBOLS                           462
#define ISYIRADICALS                                      637
#define ISYISYLLABLES                                    1860
#define ISZ                                              3069
#define ISZANABAZARSQUARE                                1696
#define ISZANB                                             95
#define ISZINH                                           2021
#define ISZL                                             2961
#define ISZP                                              205
#define ISZS                                             3471
#define ISZYYY                                           2091
#define ISZZZZ                                            698
#define ITAL                                             1936
#define JAMO                                              424
#define JAMOEXTA                                         1562
#define JAMOEXTB                                         2223
#define JAVA                                              871
#define JAVANESE                                         3855
#define JG__AFRICANFEH                                    546
#define JG__AFRICANNOON                                  3078
#define JG__AFRICANQAF                                   3012
#define JG__AIN                                          3298
#define JG__ALAPH                                        1843
#define JG__ALEF                                         1982
#define JG__BEH                                          3312
#define JG__BETH                                         2925
#define JG__BURUSHASKIYEHBARREE                          2637
#define JG__DAL                                          3318
#define JG__DALATHRISH                                   1845
#define JG__E                                             776
#define JG__FARSIYEH                                     1024
#define JG__FE                                           1805
#define JG__FEH                                          3858
#define JG__FINALSEMKATH                                 2742
#define JG__GAF                                          2847
#define JG__GAMAL                                        3188
#define JG__HAH                                          3115
#define JG__HAMZAONHEHGOAL                               2466
#define JG__HE                                            798
#define JG__HEH                                          2827
#define JG__HEHGOAL                                       495
#define JG__HETH                                         3780
#define JG__KAF                                          2705
#define JG__KAPH                                         2483
#define JG__KHAPH                                        1593
#define JG__KNOTTEDHEH                                   2519
#define JG__LAM                                          2969
#define JG__LAMADH                                       3287
#define JG__MALAYALAMBHA                                 1664
#define JG__MALAYALAMJA                                   440
#define JG__MALAYALAMLLA                                 3352
#define JG__MALAYALAMLLLA                                1144
#define JG__MALAYALAMNGA                                 2495
#define JG__MALAYALAMNNA                                  288
#define JG__MALAYALAMNNNA                                3895
#define JG__MALAYALAMNYA                                 2219
#define JG__MALAYALAMRA                                  2526
#define JG__MALAYALAMSSA                                 1275
#define JG__MALAYALAMTTA                                 1847
#define JG__MANICHAEANALEPH                              3463
#define JG__MANICHAEANAYIN                               1430
#define JG__MANICHAEANBETH                               3936
#define JG__MANICHAEANDALETH                             2789
#define JG__MANICHAEANDHAMEDH                             977
#define JG__MANICHAEANFIVE                               1134
#define JG__MANICHAEANGIMEL                              3278
#define JG__MANICHAEANHETH                               1469
#define JG__MANICHAEANHUNDRED                            3585
#define JG__MANICHAEANKAPH                               3304
#define JG__MANICHAEANLAMEDH                             1790
#define JG__MANICHAEANMEM                                 599
#define JG__MANICHAEANNUN                                 525
#define JG__MANICHAEANONE                                2180
#define JG__MANICHAEANPE                                 2493
#define JG__MANICHAEANQOPH                               1147
#define JG__MANICHAEANRESH                                680
#define JG__MANICHAEANSADHE                               135
#define JG__MANICHAEANSAMEKH                             2083
#define JG__MANICHAEANTAW                                 344
#define JG__MANICHAEANTEN                                3816
#define JG__MANICHAEANTETH                               1532
#define JG__MANICHAEANTHAMEDH                            1611
#define JG__MANICHAEANTWENTY                             3011
#define JG__MANICHAEANWAW                                1377
#define JG__MANICHAEANYODH                               3730
#define JG__MANICHAEANZAYIN                               186
#define JG__MEEM                                         1363
#define JG__MIM                                          2587
#define JG__NOJOININGGROUP                               1452
#define JG__NOON                                          707
#define JG__NUN                                          1957
#define JG__NYA                                          3937
#define JG__PE                                           3114
#define JG__QAF                                          2812
#define JG__QAPH                                          752
#define JG__REH                                          1424
#define JG__REVERSEDPE                                   2174
#define JG__ROHINGYAYEH                                   861
#define JG__SAD                                           404
#define JG__SADHE                                         565
#define JG__SEEN                                         2868
#define JG__SEMKATH                                      2421
#define JG__SHIN                                          805
#define JG__STRAIGHTWAW                                   616
#define JG__SWASHKAF                                     2283
#define JG__SYRIACWAW                                     767
#define JG__TAH                                          2946
#define JG__TAW                                           603
#define JG__TEHMARBUTA                                   1020
#define JG__TEHMARBUTAGOAL                               3342
#define JG__TETH                                         3689
#define JG__WAW                                          3838
#define JG__YEH                                          2780
#define JG__YEHBARREE                                    1515
#define JG__YEHWITHTAIL                                  3865
#define JG__YUDH                                         2899
#define JG__YUDHHE                                       2825
#define JG__ZAIN                                         2033
#define JG__ZHAIN                                        3117
#define JOINC                                            2701
#define JOINCONTROL                                       667
#define JOINC__F                                          708
#define JOINC__FALSE                                      374
#define JOINC__N                                         1227
#define JOINC__NO                                        3651
#define JOINC__T                                          904
#define JOINC__TRUE                                      3375
#define JOINC__Y                                         1239
#define JOINC__YES                                       3634
#define JT__C                                            2226
#define JT__D                                            3249
#define JT__DUALJOINING                                  3616
#define JT__JOINCAUSING                                   553
#define JT__L                                            3773
#define JT__LEFTJOINING                                   126
#define JT__NONJOINING                                    165
#define JT__R                                            3591
#define JT__RIGHTJOINING                                 3592
#define JT__T                                            2221
#define JT__TRANSPARENT                                  1242
#define JT__U                                            3760
#define KAITHI                                           1874
#define KALI                                             1918
#define KANA                                               90
#define KANAEXTA                                         1055
#define KANAEXTENDEDA                                    1784
#define KANASUP                                           948
#define KANASUPPLEMENT                                   2590
#define KANBUN                                           1545
#define KANGXI                                           2015
#define KANGXIRADICALS                                   1376
#define KANNADA                                          3672
#define KATAKANA                                         1826
#define KATAKANAEXT                                      2866
#define KATAKANAPHONETICEXTENSIONS                       1080
#define KAYAHLI                                          2626
#define KHAR                                             2794
#define KHAROSHTHI                                       3884
#define KHMER                                             802
#define KHMERSYMBOLS                                     3100
#define KHMR                                             3925
#define KHOJ                                             1125
#define KHOJKI                                           2265
#define KHUDAWADI                                        2902
#define KNDA                                             3806
#define KTHI                                              527
#define L                                                1092
#define LANA                                              988
#define LAO                                              1311
#define LAOO                                             1980
#define LATIN                                            2993
#define LATIN1                                           1208
#define LATIN1SUP                                        1711
#define LATIN1SUPPLEMENT                                  427
#define LATINEXTA                                        3198
#define LATINEXTADDITIONAL                               1235
#define LATINEXTB                                        3712
#define LATINEXTC                                        2339
#define LATINEXTD                                        3025
#define LATINEXTE                                        1481
#define LATINEXTENDEDA                                   1223
#define LATINEXTENDEDADDITIONAL                          3667
#define LATINEXTENDEDB                                   2723
#define LATINEXTENDEDC                                    358
#define LATINEXTENDEDD                                   1394
#define LATINEXTENDEDE                                   2937
#define LATN                                             1061
#define LB__AI                                           3774
#define LB__AL                                             61
#define LB__ALPHABETIC                                   2301
#define LB__AMBIGUOUS                                    2745
#define LB__B2                                           1933
#define LB__BA                                           2471
#define LB__BB                                           3160
#define LB__BK                                           1098
#define LB__BREAKAFTER                                   3739
#define LB__BREAKBEFORE                                  3578
#define LB__BREAKBOTH                                     101
#define LB__BREAKSYMBOLS                                 1231
#define LB__CARRIAGERETURN                               1149
#define LB__CB                                           2003
#define LB__CJ                                           2549
#define LB__CL                                           3380
#define LB__CLOSEPARENTHESIS                             3564
#define LB__CLOSEPUNCTUATION                              364
#define LB__CM                                            975
#define LB__COMBININGMARK                                3588
#define LB__COMPLEXCONTEXT                               1644
#define LB__CONDITIONALJAPANESESTARTER                   3110
#define LB__CONTINGENTBREAK                              3151
#define LB__CP                                           2155
#define LB__CR                                           3037
#define LB__EB                                           3034
#define LB__EBASE                                        2291
#define LB__EM                                            295
#define LB__EMODIFIER                                    1816
#define LB__EX                                           1504
#define LB__EXCLAMATION                                  1429
#define LB__GL                                            258
#define LB__GLUE                                          567
#define LB__H2                                           1317
#define LB__H3                                           3725
#define LB__HEBREWLETTER                                    5
#define LB__HL                                           1852
#define LB__HY                                           3555
#define LB__HYPHEN                                       3771
#define LB__ID                                           2585
#define LB__IDEOGRAPHIC                                  1492
#define LB__IN                                           2276
#define LB__INFIXNUMERIC                                 2677
#define LB__INSEPARABLE                                   493
#define LB__INSEPERABLE                                  3584
#define LB__IS                                            542
#define LB__JL                                            675
#define LB__JT                                           1285
#define LB__JV                                            430
#define LB__LF                                            103
#define LB__LINEFEED                                     3216
#define LB__MANDATORYBREAK                               1160
#define LB__NEXTLINE                                     2988
#define LB__NL                                           1598
#define LB__NONSTARTER                                   3704
#define LB__NS                                           3801
#define LB__NU                                           2444
#define LB__NUMERIC                                       446
#define LB__OP                                           1474
#define LB__OPENPUNCTUATION                              1094
#define LB__PO                                           2212
#define LB__POSTFIXNUMERIC                               2188
#define LB__PR                                           3601
#define LB__PREFIXNUMERIC                                1270
#define LB__QU                                           1657
#define LB__QUOTATION                                    1856
#define LB__REGIONALINDICATOR                            1117
#define LB__RI                                           2397
#define LB__SA                                           3321
#define LB__SG                                           1947
#define LB__SP                                            748
#define LB__SPACE                                        3641
#define LB__SURROGATE                                     690
#define LB__SY                                           2808
#define LB__UNKNOWN                                      3610
#define LB__WJ                                           2864
#define LB__WORDJOINER                                   2792
#define LB__XX                                           3684
#define LB__ZW                                           1399
#define LB__ZWJ                                          3046
#define LB__ZWSPACE                                      1485
#define LC                                               3910
#define LEPC                                              994
#define LEPCHA                                           1811
#define LETTER                                           1948
#define LETTERLIKESYMBOLS                                3814
#define LETTERNUMBER                                     3580
#define LIMB                                              725
#define LIMBU                                            2916
#define LINA                                             1488
#define LINB                                              813
#define LINEARA                                           835
#define LINEARB                                          3245
#define LINEARBIDEOGRAMS                                 3553
#define LINEARBSYLLABARY                                 1824
#define LINESEPARATOR                                    2824
#define LISU                                              890
#define LL                                               2370
#define LM                                                819
#define LO                                               1681
#define LOE                                              1090
#define LOE__F                                           2759
#define LOE__FALSE                                       2984
#define LOE__N                                           3277
#define LOE__NO                                          2361
#define LOE__T                                            862
#define LOE__TRUE                                        3438
#define LOE__Y                                           1560
#define LOE__YES                                          605
#define LOGICALORDEREXCEPTION                            2884
#define LOWER                                             231
#define LOWERCASE                                        1781
#define LOWERCASELETTER                                   727
#define LOWER__F                                         2948
#define LOWER__FALSE                                      537
#define LOWER__N                                         2432
#define LOWER__NO                                        2892
#define LOWER__T                                         3127
#define LOWER__TRUE                                      3778
#define LOWER__Y                                         1915
#define LOWER__YES                                        213
#define LOWSURROGATES                                    2844
#define LT                                               3907
#define LU                                               2381
#define LYCI                                             1201
#define LYCIAN                                            739
#define LYDI                                             3325
#define LYDIAN                                            786
#define L_                                                621
#define L__                                              3549
#define M                                                2684
#define MAHAJANI                                         2237
#define MAHJ                                              422
#define MAHJONG                                          3901
#define MAHJONGTILES                                     3511
#define MALAYALAM                                        3686
#define MAND                                              544
#define MANDAIC                                          2873
#define MANI                                             1241
#define MANICHAEAN                                          9
#define MARC                                             2113
#define MARCHEN                                          2401
#define MARK                                             1595
#define MASARAMGONDI                                      204
#define MATH                                             1482
#define MATHALPHANUM                                     2576
#define MATHEMATICALALPHANUMERICSYMBOLS                  1076
#define MATHEMATICALOPERATORS                            1600
#define MATHOPERATORS                                    1881
#define MATHSYMBOL                                       1320
#define MATH__F                                            77
#define MATH__FALSE                                      2881
#define MATH__N                                           557
#define MATH__NO                                         1580
#define MATH__T                                           254
#define MATH__TRUE                                        113
#define MATH__Y                                            94
#define MATH__YES                                         157
#define MC                                               3003
#define ME                                               2674
#define MEETEIMAYEK                                      3919
#define MEETEIMAYEKEXT                                   2106
#define MEETEIMAYEKEXTENSIONS                             906
#define MEND                                              955
#define MENDEKIKAKUI                                     3695
#define MERC                                             1281
#define MERO                                               88
#define MEROITICCURSIVE                                  2876
#define MEROITICHIEROGLYPHS                              3629
#define MIAO                                             3185
#define MISCARROWS                                        761
#define MISCELLANEOUSMATHEMATICALSYMBOLSA                1115
#define MISCELLANEOUSMATHEMATICALSYMBOLSB                1794
#define MISCELLANEOUSSYMBOLS                             2147
#define MISCELLANEOUSSYMBOLSANDARROWS                    1315
#define MISCELLANEOUSSYMBOLSANDPICTOGRAPHS                806
#define MISCELLANEOUSTECHNICAL                           2090
#define MISCMATHSYMBOLSA                                 1510
#define MISCMATHSYMBOLSB                                  830
#define MISCPICTOGRAPHS                                  3065
#define MISCSYMBOLS                                      1949
#define MISCTECHNICAL                                    2341
#define MLYM                                             2264
#define MN                                               3183
#define MODI                                             2740
#define MODIFIERLETTER                                   3308
#define MODIFIERLETTERS                                  2073
#define MODIFIERSYMBOL                                   3064
#define MODIFIERTONELETTERS                              3516
#define MONG                                             1433
#define MONGOLIAN                                         216
#define MONGOLIANSUP                                     1855
#define MONGOLIANSUPPLEMENT                              1386
#define MRO                                              2543
#define MROO                                             2327
#define MTEI                                             1053
#define MULT                                             3932
#define MULTANI                                          2525
#define MUSIC                                             714
#define MUSICALSYMBOLS                                   2930
#define MYANMAR                                          3226
#define MYANMAREXTA                                      2734
#define MYANMAREXTB                                       335
#define MYANMAREXTENDEDA                                 3839
#define MYANMAREXTENDEDB                                 2304
#define MYMR                                             2826
#define N                                                 233
#define NABATAEAN                                        3346
#define NARB                                             3700
#define NB                                               2545
#define NBAT                                             3933
#define NCHAR                                            3365
#define NCHAR__F                                         3085
#define NCHAR__FALSE                                     3666
#define NCHAR__N                                         3608
#define NCHAR__NO                                        1304
#define NCHAR__T                                         1199
#define NCHAR__TRUE                                      1420
#define NCHAR__Y                                         1887
#define NCHAR__YES                                       2004
#define ND                                               2979
#define NEWA                                             3946
#define NEWTAILUE                                         860
#define NFCQC__M                                           92
#define NFCQC__MAYBE                                     1414
#define NFCQC__N                                         3354
#define NFCQC__NO                                        3508
#define NFCQC__Y                                         1283
#define NFCQC__YES                                       3920
#define NFDQC__N                                         1730
#define NFDQC__NO                                         940
#define NFDQC__Y                                         1722
#define NFDQC__YES                                       1724
#define NFKCQC__M                                        2652
#define NFKCQC__MAYBE                                    1326
#define NFKCQC__N                                          91
#define NFKCQC__NO                                       3659
#define NFKCQC__Y                                        1302
#define NFKCQC__YES                                       110
#define NFKDQC__N                                        2953
#define NFKDQC__NO                                        958
#define NFKDQC__Y                                        1748
#define NFKDQC__YES                                      2951
#define NKO                                              2594
#define NKOO                                             3715
#define NL                                               1691
#define NO                                               3233
#define NOBLOCK                                           539
#define NONCHARACTERCODEPOINT                             758
#define NONSPACINGMARK                                   3189
#define NSHU                                             3882
#define NT__DE                                           2506
#define NT__DECIMAL                                      2071
#define NT__DI                                           1305
#define NT__DIGIT                                         105
#define NT__NONE                                         3097
#define NT__NU                                            368
#define NT__NUMERIC                                       480
#define NUMBER                                            248
#define NUMBERFORMS                                      1533
#define NUSHU                                             286
#define NV__NAN                                          3781
#define OCR                                              1993
#define OGAM                                             3472
#define OGHAM                                             491
#define OLCHIKI                                          3915
#define OLCK                                              772
#define OLDHUNGARIAN                                     2321
#define OLDITALIC                                        3402
#define OLDNORTHARABIAN                                   523
#define OLDPERMIC                                        1175
#define OLDPERSIAN                                       2542
#define OLDSOUTHARABIAN                                  2088
#define OLDTURKIC                                        1451
#define OPENPUNCTUATION                                  2510
#define OPTICALCHARACTERRECOGNITION                      1649
#define ORIYA                                             250
#define ORKH                                             1309
#define ORNAMENTALDINGBATS                               1022
#define ORYA                                             1821
#define OSAGE                                            2903
#define OSGE                                             2293
#define OSMA                                             3560
#define OSMANYA                                          3385
#define OTHER                                            1509
#define OTHERLETTER                                      3211
#define OTHERNUMBER                                      2696
#define OTHERPUNCTUATION                                 1619
#define OTHERSYMBOL                                      3488
#define P                                                2430
#define PAHAWHHMONG                                      3908
#define PALM                                              360
#define PALMYRENE                                        3181
#define PARAGRAPHSEPARATOR                                530
#define PATSYN                                           3755
#define PATSYN__F                                        3074
#define PATSYN__FALSE                                    1935
#define PATSYN__N                                        3589
#define PATSYN__NO                                       2207
#define PATSYN__T                                        1017
#define PATSYN__TRUE                                      547
#define PATSYN__Y                                        2222
#define PATSYN__YES                                       634
#define PATTERNSYNTAX                                    1505
#define PATTERNWHITESPACE                                  37
#define PATWS                                            1294
#define PATWS__F                                         3157
#define PATWS__FALSE                                     2062
#define PATWS__N                                         2738
#define PATWS__NO                                          78
#define PATWS__T                                         1195
#define PATWS__TRUE                                      3795
#define PATWS__Y                                          507
#define PATWS__YES                                       1747
#define PAUC                                             1835
#define PAUCINHAU                                        2534
#define PC                                                640
#define PCM                                                96
#define PCM__F                                           2215
#define PCM__FALSE                                       2578
#define PCM__N                                           2739
#define PCM__NO                                           255
#define PCM__T                                            326
#define PCM__TRUE                                        1215
#define PCM__Y                                           1016
#define PCM__YES                                         1639
#define PD                                               3040
#define PE                                               1493
#define PERLSPACE                                          81
#define PERLWORD                                         1150
#define PERM                                              327
#define PF                                               3887
#define PHAG                                             3300
#define PHAGSPA                                          3536
#define PHAISTOS                                         1329
#define PHAISTOSDISC                                     1873
#define PHLI                                             2602
#define PHLP                                              578
#define PHNX                                             1797
#define PHOENICIAN                                       2152
#define PHONETICEXT                                      1734
#define PHONETICEXTENSIONS                               1421
#define PHONETICEXTENSIONSSUPPLEMENT                     3538
#define PHONETICEXTSUP                                     22
#define PI                                               3218
#define PLAYINGCARDS                                     3246
#define PLRD                                             3703
#define PO                                               2853
#define POSIXALNUM                                       2514
#define POSIXALPHA                                       2220
#define POSIXBLANK                                       2442
#define POSIXCNTRL                                        460
#define POSIXDIGIT                                       3790
#define POSIXGRAPH                                        437
#define POSIXLOWER                                        475
#define POSIXPRINT                                        305
#define POSIXPUNCT                                        414
#define POSIXSPACE                                       3268
#define POSIXUPPER                                       3846
#define POSIXWORD                                         907
#define POSIXXDIGIT                                       783
#define PREPENDEDCONCATENATIONMARK                       3247
#define PRINT                                            2104
#define PRIVATEUSE                                       2197
#define PRIVATEUSEAREA                                   2144
#define PRTI                                             1792
#define PS                                               3550
#define PSALTERPAHLAVI                                   3621
#define PUA                                              1945
#define PUNCT                                            1010
#define PUNCTUATION                                       444
#define QAAC                                             3898
#define QAAI                                             1327
#define QMARK                                             365
#define QMARK__F                                         3122
#define QMARK__FALSE                                     1961
#define QMARK__N                                         3637
#define QMARK__NO                                        2922
#define QMARK__T                                         1226
#define QMARK__TRUE                                      3577
#define QMARK__Y                                         2309
#define QMARK__YES                                       2762
#define QUOTATIONMARK                                    3546
#define RADICAL                                            99
#define RADICAL__F                                       3254
#define RADICAL__FALSE                                   1262
#define RADICAL__N                                       3769
#define RADICAL__NO                                       308
#define RADICAL__T                                       3098
#define RADICAL__TRUE                                    3369
#define RADICAL__Y                                        334
#define RADICAL__YES                                     2406
#define REGIONALINDICATOR                                  54
#define REJANG                                            766
#define RI                                               2011
#define RI__F                                            1893
#define RI__FALSE                                         265
#define RI__N                                            1369
#define RI__NO                                           2311
#define RI__T                                            1708
#define RI__TRUE                                         2706
#define RI__Y                                            1882
#define RI__YES                                          1788
#define RJNG                                             1682
#define RUMI                                             2503
#define RUMINUMERALSYMBOLS                               3182
#define RUNIC                                            2954
#define RUNR                                             3475
#define S                                                3118
#define SAMARITAN                                        3310
#define SAMR                                             1006
#define SARB                                              992
#define SAUR                                              487
#define SAURASHTRA                                       2399
#define SB__AT                                           2782
#define SB__ATERM                                        2391
#define SB__CL                                           2228
#define SB__CLOSE                                         968
#define SB__CR                                           2556
#define SB__EX                                           2329
#define SB__EXTEND                                       2182
#define SB__FO                                           3093
#define SB__FORMAT                                       2766
#define SB__LE                                           2300
#define SB__LF                                           3836
#define SB__LO                                            917
#define SB__LOWER                                        2817
#define SB__NU                                           1733
#define SB__NUMERIC                                      2838
#define SB__OLETTER                                      3335
#define SB__OTHER                                        2960
#define SB__SC                                           2081
#define SB__SCONTINUE                                    1279
#define SB__SE                                           1225
#define SB__SEP                                           595
#define SB__SP                                           1572
#define SB__ST                                           3802
#define SB__STERM                                        1704
#define SB__UP                                            373
#define SB__UPPER                                        1477
#define SB__XX                                           2942
#define SC                                               3648
#define SCX__ADLAM                                       2888
#define SCX__ADLM                                        1727
#define SCX__AGHB                                         691
#define SCX__AHOM                                        3381
#define SCX__ANATOLIANHIEROGLYPHS                        2348
#define SCX__ARAB                                         659
#define SCX__ARABIC                                      3024
#define SCX__ARMENIAN                                    3156
#define SCX__ARMI                                         377
#define SCX__ARMN                                        3644
#define SCX__AVESTAN                                      713
#define SCX__AVST                                        2281
#define SCX__BALI                                        1031
#define SCX__BALINESE                                     526
#define SCX__BAMU                                         576
#define SCX__BAMUM                                       2058
#define SCX__BASS                                         965
#define SCX__BASSAVAH                                    1358
#define SCX__BATAK                                       1777
#define SCX__BATK                                        3338
#define SCX__BENG                                        2720
#define SCX__BENGALI                                     3646
#define SCX__BHAIKSUKI                                    745
#define SCX__BHKS                                         972
#define SCX__BOPO                                         399
#define SCX__BOPOMOFO                                    1737
#define SCX__BRAH                                         822
#define SCX__BRAHMI                                      2288
#define SCX__BRAI                                        3167
#define SCX__BRAILLE                                     3457
#define SCX__BUGI                                        1718
#define SCX__BUGINESE                                     925
#define SCX__BUHD                                        1361
#define SCX__BUHID                                       2756
#define SCX__CAKM                                        1661
#define SCX__CANADIANABORIGINAL                          1448
#define SCX__CANS                                        1607
#define SCX__CARI                                        3343
#define SCX__CARIAN                                      3194
#define SCX__CAUCASIANALBANIAN                            218
#define SCX__CHAKMA                                      3444
#define SCX__CHAM                                        1290
#define SCX__CHER                                        3428
#define SCX__CHEROKEE                                    2271
#define SCX__COMMON                                      3481
#define SCX__COPT                                        3757
#define SCX__COPTIC                                      3366
#define SCX__CPRT                                        3190
#define SCX__CUNEIFORM                                   3425
#define SCX__CYPRIOT                                     3503
#define SCX__CYRILLIC                                     181
#define SCX__CYRL                                        1345
#define SCX__DESERET                                     3561
#define SCX__DEVA                                        1021
#define SCX__DEVANAGARI                                   747
#define SCX__DSRT                                        1155
#define SCX__DUPL                                         371
#define SCX__DUPLOYAN                                    3316
#define SCX__EGYP                                        2606
#define SCX__EGYPTIANHIEROGLYPHS                         3394
#define SCX__ELBA                                        3613
#define SCX__ELBASAN                                     1354
#define SCX__ETHI                                         372
#define SCX__ETHIOPIC                                    1755
#define SCX__GEOR                                        1413
#define SCX__GEORGIAN                                    1634
#define SCX__GLAG                                        3010
#define SCX__GLAGOLITIC                                    83
#define SCX__GONM                                         117
#define SCX__GOTH                                          65
#define SCX__GOTHIC                                       387
#define SCX__GRAN                                         976
#define SCX__GRANTHA                                     3535
#define SCX__GREEK                                       3262
#define SCX__GREK                                         518
#define SCX__GUJARATI                                    1491
#define SCX__GUJR                                         194
#define SCX__GURMUKHI                                     915
#define SCX__GURU                                        1519
#define SCX__HAN                                         2843
#define SCX__HANG                                        1819
#define SCX__HANGUL                                      3512
#define SCX__HANI                                         689
#define SCX__HANO                                        1555
#define SCX__HANUNOO                                      789
#define SCX__HATR                                        2065
#define SCX__HATRAN                                      2274
#define SCX__HEBR                                         652
#define SCX__HEBREW                                      2290
#define SCX__HIRA                                        2765
#define SCX__HIRAGANA                                    1095
#define SCX__HLUW                                         531
#define SCX__HMNG                                        1956
#define SCX__HUNG                                        1355
#define SCX__IMPERIALARAMAIC                             3649
#define SCX__INHERITED                                    251
#define SCX__INSCRIPTIONALPAHLAVI                        1154
#define SCX__INSCRIPTIONALPARTHIAN                       1219
#define SCX__ITAL                                        1455
#define SCX__JAVA                                        3045
#define SCX__JAVANESE                                    1739
#define SCX__KAITHI                                      1556
#define SCX__KALI                                         458
#define SCX__KANA                                        1541
#define SCX__KANNADA                                     3409
#define SCX__KATAKANA                                     585
#define SCX__KAYAHLI                                      839
#define SCX__KHAR                                        3530
#define SCX__KHAROSHTHI                                   133
#define SCX__KHMER                                        814
#define SCX__KHMR                                         306
#define SCX__KHOJ                                        3413
#define SCX__KHOJKI                                      2846
#define SCX__KHUDAWADI                                   1557
#define SCX__KNDA                                        2698
#define SCX__KTHI                                        1578
#define SCX__LANA                                         214
#define SCX__LAO                                         2012
#define SCX__LAOO                                        3706
#define SCX__LATIN                                       2351
#define SCX__LATN                                           6
#define SCX__LEPC                                        2975
#define SCX__LEPCHA                                      2502
#define SCX__LIMB                                        2061
#define SCX__LIMBU                                       2325
#define SCX__LINA                                        2661
#define SCX__LINB                                        3358
#define SCX__LINEARA                                     2963
#define SCX__LINEARB                                     2278
#define SCX__LISU                                        2898
#define SCX__LYCI                                        2537
#define SCX__LYCIAN                                      2376
#define SCX__LYDI                                        2574
#define SCX__LYDIAN                                       242
#define SCX__MAHAJANI                                    2950
#define SCX__MAHJ                                        3883
#define SCX__MALAYALAM                                    226
#define SCX__MAND                                        3095
#define SCX__MANDAIC                                     3148
#define SCX__MANI                                        1896
#define SCX__MANICHAEAN                                   499
#define SCX__MARC                                          30
#define SCX__MARCHEN                                     2295
#define SCX__MASARAMGONDI                                 937
#define SCX__MEETEIMAYEK                                 1861
#define SCX__MEND                                        1123
#define SCX__MENDEKIKAKUI                                3398
#define SCX__MERC                                        1068
#define SCX__MERO                                        2784
#define SCX__MEROITICCURSIVE                             3106
#define SCX__MEROITICHIEROGLYPHS                         3477
#define SCX__MIAO                                        1559
#define SCX__MLYM                                        3929
#define SCX__MODI                                         513
#define SCX__MONG                                         405
#define SCX__MONGOLIAN                                   1983
#define SCX__MRO                                         1601
#define SCX__MROO                                        1463
#define SCX__MTEI                                        3831
#define SCX__MULT                                        2415
#define SCX__MULTANI                                     2367
#define SCX__MYANMAR                                      598
#define SCX__MYMR                                        2044
#define SCX__NABATAEAN                                   1207
#define SCX__NARB                                        3077
#define SCX__NBAT                                        2396
#define SCX__NEWA                                        3049
#define SCX__NEWTAILUE                                    548
#define SCX__NKO                                         2871
#define SCX__NKOO                                        1511
#define SCX__NSHU                                        2310
#define SCX__NUSHU                                       2213
#define SCX__OGAM                                        2597
#define SCX__OGHAM                                       2186
#define SCX__OLCHIKI                                     2352
#define SCX__OLCK                                         419
#define SCX__OLDHUNGARIAN                                1609
#define SCX__OLDITALIC                                   2175
#define SCX__OLDNORTHARABIAN                             2699
#define SCX__OLDPERMIC                                    552
#define SCX__OLDPERSIAN                                  1382
#define SCX__OLDSOUTHARABIAN                               87
#define SCX__OLDTURKIC                                    827
#define SCX__ORIYA                                        203
#define SCX__ORKH                                        1791
#define SCX__ORYA                                        1703
#define SCX__OSAGE                                       3083
#define SCX__OSGE                                        1269
#define SCX__OSMA                                        2020
#define SCX__OSMANYA                                     3923
#define SCX__PAHAWHHMONG                                  670
#define SCX__PALM                                        1265
#define SCX__PALMYRENE                                   1193
#define SCX__PAUC                                         330
#define SCX__PAUCINHAU                                   2605
#define SCX__PERM                                        1540
#define SCX__PHAG                                        1313
#define SCX__PHAGSPA                                      969
#define SCX__PHLI                                        3617
#define SCX__PHLP                                        2449
#define SCX__PHNX                                        3678
#define SCX__PHOENICIAN                                  1641
#define SCX__PLRD                                         277
#define SCX__PRTI                                         270
#define SCX__PSALTERPAHLAVI                               228
#define SCX__QAAC                                        3017
#define SCX__QAAI                                        1645
#define SCX__REJANG                                      1140
#define SCX__RJNG                                        2142
#define SCX__RUNIC                                        801
#define SCX__RUNR                                        2819
#define SCX__SAMARITAN                                   1459
#define SCX__SAMR                                         311
#define SCX__SARB                                         778
#define SCX__SAUR                                        2164
#define SCX__SAURASHTRA                                  2643
#define SCX__SGNW                                        2183
#define SCX__SHARADA                                     1047
#define SCX__SHAVIAN                                      824
#define SCX__SHAW                                        1178
#define SCX__SHRD                                        3079
#define SCX__SIDD                                        3275
#define SCX__SIDDHAM                                     3163
#define SCX__SIGNWRITING                                 3489
#define SCX__SIND                                        2395
#define SCX__SINH                                        3587
#define SCX__SINHALA                                     1815
#define SCX__SORA                                        3089
#define SCX__SORASOMPENG                                  794
#define SCX__SOYO                                        1045
#define SCX__SOYOMBO                                      273
#define SCX__SUND                                          34
#define SCX__SUNDANESE                                    711
#define SCX__SYLO                                        3602
#define SCX__SYLOTINAGRI                                 1667
#define SCX__SYRC                                         809
#define SCX__SYRIAC                                       746
#define SCX__TAGALOG                                     3030
#define SCX__TAGB                                        1506
#define SCX__TAGBANWA                                    1635
#define SCX__TAILE                                       1030
#define SCX__TAITHAM                                      202
#define SCX__TAIVIET                                     1143
#define SCX__TAKR                                        3698
#define SCX__TAKRI                                       1518
#define SCX__TALE                                        3202
#define SCX__TALU                                        2193
#define SCX__TAMIL                                       3145
#define SCX__TAML                                        2420
#define SCX__TANG                                        1295
#define SCX__TANGUT                                      1337
#define SCX__TAVT                                         132
#define SCX__TELU                                        1683
#define SCX__TELUGU                                      2119
#define SCX__TFNG                                        1569
#define SCX__TGLG                                        1422
#define SCX__THAA                                        1941
#define SCX__THAANA                                      3195
#define SCX__THAI                                        2459
#define SCX__TIBETAN                                      922
#define SCX__TIBT                                         627
#define SCX__TIFINAGH                                     966
#define SCX__TIRH                                        3362
#define SCX__TIRHUTA                                     3382
#define SCX__UGAR                                        1372
#define SCX__UGARITIC                                    3001
#define SCX__UNKNOWN                                     3554
#define SCX__VAI                                         3367
#define SCX__VAII                                        2191
#define SCX__WARA                                        2419
#define SCX__WARANGCITI                                  1834
#define SCX__XPEO                                        1171
#define SCX__XSUX                                         222
#define SCX__YI                                           289
#define SCX__YIII                                        2402
#define SCX__ZANABAZARSQUARE                             1617
#define SCX__ZANB                                         366
#define SCX__ZINH                                        1807
#define SCX__ZYYY                                         193
#define SCX__ZZZZ                                         260
#define SC__ADLAM                                         145
#define SC__ADLM                                         1744
#define SC__AGHB                                         3563
#define SC__AHOM                                         1553
#define SC__ANATOLIANHIEROGLYPHS                         1470
#define SC__ARAB                                         1247
#define SC__ARABIC                                       3131
#define SC__ARMENIAN                                     1963
#define SC__ARMI                                          488
#define SC__ARMN                                         2069
#define SC__AVESTAN                                      2092
#define SC__AVST                                         3212
#define SC__BALI                                         2910
#define SC__BALINESE                                     1082
#define SC__BAMU                                         1813
#define SC__BAMUM                                         504
#define SC__BASS                                         1868
#define SC__BASSAVAH                                     1249
#define SC__BATAK                                        3628
#define SC__BATK                                         3383
#define SC__BENG                                         1198
#define SC__BENGALI                                      1333
#define SC__BHAIKSUKI                                    3026
#define SC__BHKS                                         2551
#define SC__BOPO                                         1693
#define SC__BOPOMOFO                                     1623
#define SC__BRAH                                         1706
#define SC__BRAHMI                                       3326
#define SC__BRAI                                         3256
#define SC__BRAILLE                                      3153
#define SC__BUGI                                         3347
#define SC__BUGINESE                                     2060
#define SC__BUHD                                         2456
#define SC__BUHID                                        1100
#define SC__CAKM                                         2592
#define SC__CANADIANABORIGINAL                            950
#define SC__CANS                                         1471
#define SC__CARI                                         1636
#define SC__CARIAN                                        639
#define SC__CAUCASIANALBANIAN                            1710
#define SC__CHAKMA                                        726
#define SC__CHAM                                          378
#define SC__CHER                                         3626
#define SC__CHEROKEE                                     1453
#define SC__COMMON                                        636
#define SC__COPT                                          648
#define SC__COPTIC                                       3761
#define SC__CPRT                                         1798
#define SC__CUNEIFORM                                    3611
#define SC__CYPRIOT                                       941
#define SC__CYRILLIC                                     1552
#define SC__CYRL                                         3135
#define SC__DESERET                                      2118
#define SC__DEVA                                         1374
#define SC__DEVANAGARI                                   3866
#define SC__DSRT                                         2302
#define SC__DUPL                                         1731
#define SC__DUPLOYAN                                     2287
#define SC__EGYP                                         1671
#define SC__EGYPTIANHIEROGLYPHS                           390
#define SC__ELBA                                         1229
#define SC__ELBASAN                                      3236
#define SC__ETHI                                         3112
#define SC__ETHIOPIC                                     1633
#define SC__GEOR                                          541
#define SC__GEORGIAN                                     3671
#define SC__GLAG                                          702
#define SC__GLAGOLITIC                                    952
#define SC__GONM                                         3590
#define SC__GOTH                                         2921
#define SC__GOTHIC                                        887
#define SC__GRAN                                          985
#define SC__GRANTHA                                       456
#define SC__GREEK                                         643
#define SC__GREK                                          325
#define SC__GUJARATI                                      744
#define SC__GUJR                                         3105
#define SC__GURMUKHI                                     2955
#define SC__GURU                                         2663
#define SC__HAN                                          1137
#define SC__HANG                                         3061
#define SC__HANGUL                                       2599
#define SC__HANI                                           12
#define SC__HANO                                         2580
#define SC__HANUNOO                                      1866
#define SC__HATR                                         1981
#define SC__HATRAN                                       1038
#define SC__HEBR                                         1613
#define SC__HEBREW                                       1561
#define SC__HIRA                                         3221
#define SC__HIRAGANA                                     3643
#define SC__HLUW                                         2124
#define SC__HMNG                                         3108
#define SC__HUNG                                         2261
#define SC__IMPERIALARAMAIC                              2867
#define SC__INHERITED                                     934
#define SC__INSCRIPTIONALPAHLAVI                         1715
#define SC__INSCRIPTIONALPARTHIAN                        1334
#define SC__ITAL                                         2087
#define SC__JAVA                                         3395
#define SC__JAVANESE                                       55
#define SC__KAITHI                                       1712
#define SC__KALI                                         3609
#define SC__KANA                                          370
#define SC__KANNADA                                       357
#define SC__KATAKANA                                     1446
#define SC__KAYAHLI                                       696
#define SC__KHAR                                         1093
#define SC__KHAROSHTHI                                   3094
#define SC__KHMER                                        1395
#define SC__KHMR                                          388
#define SC__KHOJ                                         1640
#define SC__KHOJKI                                       3775
#define SC__KHUDAWADI                                    3496
#define SC__KNDA                                         2727
#define SC__KTHI                                         1989
#define SC__LANA                                         2795
#define SC__LAO                                           741
#define SC__LAOO                                         1743
#define SC__LATIN                                        1255
#define SC__LATN                                         1626
#define SC__LEPC                                         1348
#define SC__LEPCHA                                       3942
#define SC__LIMB                                          957
#define SC__LIMBU                                        2934
#define SC__LINA                                         1713
#define SC__LINB                                         1032
#define SC__LINEARA                                      2538
#define SC__LINEARB                                       998
#define SC__LISU                                         3175
#define SC__LYCI                                           53
#define SC__LYCIAN                                       1268
#define SC__LYDI                                         3656
#define SC__LYDIAN                                       2997
#define SC__MAHAJANI                                     1478
#define SC__MAHJ                                          121
#define SC__MALAYALAM                                    3169
#define SC__MAND                                         2579
#define SC__MANDAIC                                      1688
#define SC__MANI                                         2230
#define SC__MANICHAEAN                                   2298
#define SC__MARC                                         1141
#define SC__MARCHEN                                      2029
#define SC__MASARAMGONDI                                  569
#define SC__MEETEIMAYEK                                  3847
#define SC__MEND                                         3499
#define SC__MENDEKIKAKUI                                 3429
#define SC__MERC                                           50
#define SC__MERO                                         1705
#define SC__MEROITICCURSIVE                              3683
#define SC__MEROITICHIEROGLYPHS                          2941
#define SC__MIAO                                         2064
#define SC__MLYM                                         1818
#define SC__MODI                                         1437
#define SC__MONG                                         3197
#define SC__MONGOLIAN                                    2002
#define SC__MRO                                          3004
#define SC__MROO                                          788
#define SC__MTEI                                         1547
#define SC__MULT                                         1954
#define SC__MULTANI                                      3682
#define SC__MYANMAR                                      2187
#define SC__MYMR                                         2135
#define SC__NABATAEAN                                    1907
#define SC__NARB                                          160
#define SC__NBAT                                         1034
#define SC__NEWA                                         3073
#define SC__NEWTAILUE                                    2067
#define SC__NKO                                          2438
#define SC__NKOO                                          352
#define SC__NSHU                                         3896
#define SC__NUSHU                                        1035
#define SC__OGAM                                         3804
#define SC__OGHAM                                        2160
#define SC__OLCHIKI                                      3257
#define SC__OLCK                                         1867
#define SC__OLDHUNGARIAN                                 1397
#define SC__OLDITALIC                                    2697
#define SC__OLDNORTHARABIAN                               163
#define SC__OLDPERMIC                                    1786
#define SC__OLDPERSIAN                                   3357
#define SC__OLDSOUTHARABIAN                              1259
#define SC__OLDTURKIC                                    1306
#define SC__ORIYA                                         863
#define SC__ORKH                                         2256
#define SC__ORYA                                          842
#define SC__OSAGE                                        2730
#define SC__OSGE                                          182
#define SC__OSMA                                         1965
#define SC__OSMANYA                                      3677
#define SC__PAHAWHHMONG                                  2049
#define SC__PALM                                          109
#define SC__PALMYRENE                                    3744
#define SC__PAUC                                         2079
#define SC__PAUCINHAU                                    3174
#define SC__PERM                                         1549
#define SC__PHAG                                         3800
#define SC__PHAGSPA                                      3631
#define SC__PHLI                                          889
#define SC__PHLP                                          876
#define SC__PHNX                                         2702
#define SC__PHOENICIAN                                   1973
#define SC__PLRD                                          732
#define SC__PRTI                                         3864
#define SC__PSALTERPAHLAVI                                 75
#define SC__QAAC                                         2038
#define SC__QAAI                                         2373
#define SC__REJANG                                       1966
#define SC__RJNG                                         3736
#define SC__RUNIC                                         131
#define SC__RUNR                                         1443
#define SC__SAMARITAN                                    3764
#define SC__SAMR                                         2855
#define SC__SARB                                         3075
#define SC__SAUR                                         2836
#define SC__SAURASHTRA                                    800
#define SC__SGNW                                         1156
#define SC__SHARADA                                       808
#define SC__SHAVIAN                                      2158
#define SC__SHAW                                         2821
#define SC__SHRD                                           33
#define SC__SIDD                                         3023
#define SC__SIDDHAM                                      1771
#define SC__SIGNWRITING                                  1303
#define SC__SIND                                         1544
#define SC__SINH                                          348
#define SC__SINHALA                                      2582
#define SC__SORA                                         3779
#define SC__SORASOMPENG                                  2285
#define SC__SOYO                                         1162
#define SC__SOYOMBO                                      1228
#define SC__SUND                                           24
#define SC__SUNDANESE                                     329
#define SC__SYLO                                         1799
#define SC__SYLOTINAGRI                                  2492
#define SC__SYRC                                          997
#define SC__SYRIAC                                        657
#define SC__TAGALOG                                       477
#define SC__TAGB                                          880
#define SC__TAGBANWA                                     2246
#define SC__TAILE                                        3258
#define SC__TAITHAM                                      1863
#define SC__TAIVIET                                      3297
#define SC__TAKR                                         1056
#define SC__TAKRI                                        3819
#define SC__TALE                                         2388
#define SC__TALU                                         1356
#define SC__TAMIL                                        2591
#define SC__TAML                                         3016
#define SC__TANG                                         2051
#define SC__TANGUT                                       1689
#define SC__TAVT                                           29
#define SC__TELU                                          559
#define SC__TELUGU                                       1647
#define SC__TFNG                                          235
#define SC__TGLG                                         1672
#define SC__THAA                                          413
#define SC__THAANA                                        856
#define SC__THAI                                         3841
#define SC__TIBETAN                                      1535
#define SC__TIBT                                         3294
#define SC__TIFINAGH                                      282
#define SC__TIRH                                         2638
#define SC__TIRHUTA                                      1243
#define SC__UGAR                                         3630
#define SC__UGARITIC                                     1099
#define SC__UNKNOWN                                      1014
#define SC__VAI                                           749
#define SC__VAII                                         2250
#define SC__WARA                                         1089
#define SC__WARANGCITI                                   3604
#define SC__XPEO                                          858
#define SC__XSUX                                         2533
#define SC__YI                                           2987
#define SC__YIII                                         3271
#define SC__ZANABAZARSQUARE                              3812
#define SC__ZANB                                         2500
#define SC__ZINH                                         2141
#define SC__ZYYY                                         1651
#define SC__ZZZZ                                         3746
#define SD                                               2923
#define SD__F                                            3853
#define SD__FALSE                                        1888
#define SD__N                                             425
#define SD__NO                                           3532
#define SD__T                                              86
#define SD__TRUE                                         2619
#define SD__Y                                            1287
#define SD__YES                                          1264
#define SENTENCETERMINAL                                 2178
#define SEPARATOR                                        2729
#define SGNW                                             3903
#define SHARADA                                          2897
#define SHAVIAN                                          2657
#define SHAW                                             3250
#define SHORTHANDFORMATCONTROLS                          3244
#define SHRD                                             1127
#define SIDD                                             3464
#define SIDDHAM                                          1331
#define SIGNWRITING                                      2673
#define SIND                                             2653
#define SINH                                              420
#define SINHALA                                          2372
#define SINHALAARCHAICNUMBERS                            1979
#define SK                                                173
#define SM                                               1040
#define SMALLFORMS                                       3177
#define SMALLFORMVARIANTS                                2463
#define SO                                               1879
#define SOFTDOTTED                                       1543
#define SORA                                              847
#define SORASOMPENG                                      3548
#define SOYO                                             1670
#define SOYOMBO                                          2517
#define SPACE                                            2472
#define SPACEPERL                                        2616
#define SPACESEPARATOR                                   1299
#define SPACINGMARK                                      2153
#define SPACINGMODIFIERLETTERS                           1036
#define SPECIALS                                         1521
#define STERM                                            3416
#define STERM__F                                         1244
#define STERM__FALSE                                     2465
#define STERM__N                                         1759
#define STERM__NO                                        1612
#define STERM__T                                         3133
#define STERM__TRUE                                      2006
#define STERM__Y                                         2962
#define STERM__YES                                       1212
#define SUND                                              926
#define SUNDANESE                                        3658
#define SUNDANESESUP                                     3856
#define SUNDANESESUPPLEMENT                              3825
#define SUPARROWSA                                       2772
#define SUPARROWSB                                       3474
#define SUPARROWSC                                       1924
#define SUPERANDSUB                                      1668
#define SUPERSCRIPTSANDSUBSCRIPTS                        2409
#define SUPMATHOPERATORS                                  622
#define SUPPLEMENTALARROWSA                               471
#define SUPPLEMENTALARROWSB                              3726
#define SUPPLEMENTALARROWSC                              1321
#define SUPPLEMENTALMATHEMATICALOPERATORS                 600
#define SUPPLEMENTALPUNCTUATION                          2709
#define SUPPLEMENTALSYMBOLSANDPICTOGRAPHS                3196
#define SUPPLEMENTARYPRIVATEUSEAREAA                      902
#define SUPPLEMENTARYPRIVATEUSEAREAB                     1589
#define SUPPUAA                                           787
#define SUPPUAB                                          2334
#define SUPPUNCTUATION                                   1342
#define SUPSYMBOLSANDPICTOGRAPHS                         3939
#define SURROGATE                                         343
#define SUTTONSIGNWRITING                                2670
#define SYLO                                              709
#define SYLOTINAGRI                                      2952
#define SYMBOL                                           3904
#define SYRC                                             1173
#define SYRIAC                                           3170
#define SYRIACSUP                                         391
#define SYRIACSUPPLEMENT                                 3353
#define TAGALOG                                          3815
#define TAGB                                             2749
#define TAGBANWA                                         1884
#define TAGS                                              199
#define TAILE                                            1238
#define TAITHAM                                          3534
#define TAIVIET                                          2233
#define TAIXUANJING                                      2181
#define TAIXUANJINGSYMBOLS                               2650
#define TAKR                                             2828
#define TAKRI                                             774
#define TALE                                               80
#define TALU                                             1110
#define TAMIL                                            1902
#define TAML                                             1919
#define TANG                                             3473
#define TANGUT                                           1084
#define TANGUTCOMPONENTS                                 2032
#define TAVT                                             2568
#define TELU                                             1220
#define TELUGU                                            168
#define TERM                                             1750
#define TERMINALPUNCTUATION                               601
#define TERM__F                                           111
#define TERM__FALSE                                      2675
#define TERM__N                                           666
#define TERM__NO                                          138
#define TERM__T                                          2161
#define TERM__TRUE                                       2752
#define TERM__Y                                          2518
#define TERM__YES                                        2452
#define TFNG                                             3006
#define TGLG                                             3309
#define THAA                                              963
#define THAANA                                            454
#define THAI                                             1473
#define TIBETAN                                          1865
#define TIBT                                             1026
#define TIFINAGH                                         2912
#define TIRH                                             2967
#define TIRHUTA                                          3415
#define TITLE                                            2248
#define TITLECASE                                         891
#define TITLECASELETTER                                  3539
#define TRANSPORTANDMAP                                   843
#define TRANSPORTANDMAPSYMBOLS                             93
#define UCAS                                             2098
#define UCASEXT                                          1999
#define UGAR                                             2615
#define UGARITIC                                           18
#define UIDEO                                             587
#define UIDEO__F                                         1837
#define UIDEO__FALSE                                     2539
#define UIDEO__N                                         2312
#define UIDEO__NO                                        2245
#define UIDEO__T                                         3935
#define UIDEO__TRUE                                       302
#define UIDEO__Y                                         1151
#define UIDEO__YES                                       2689
#define UNASSIGNED                                       2117
#define UNICODE                                          3811
#define UNIFIEDCANADIANABORIGINALSYLLABICS                882
#define UNIFIEDCANADIANABORIGINALSYLLABICSEXTENDED        159
#define UNIFIEDIDEOGRAPH                                 2253
#define UNKNOWN                                          2474
#define UPPER                                            2429
#define UPPERCASE                                         522
#define UPPERCASELETTER                                   354
#define UPPER__F                                          660
#define UPPER__FALSE                                      943
#define UPPER__N                                         1180
#define UPPER__NO                                         351
#define UPPER__T                                         2550
#define UPPER__TRUE                                      1654
#define UPPER__Y                                         3230
#define UPPER__YES                                       3058
#define VAI                                               382
#define VAII                                             1237
#define VARIATIONSELECTOR                                2761
#define VARIATIONSELECTORS                               2347
#define VARIATIONSELECTORSSUPPLEMENT                     3372
#define VEDICEXT                                         2719
#define VEDICEXTENSIONS                                  2320
#define VERTICALFORMS                                    3047
#define VERTSPACE                                        1602
#define VO__R                                             223
#define VO__ROTATED                                      3315
#define VO__TR                                           3397
#define VO__TRANSFORMEDROTATED                           3509
#define VO__TRANSFORMEDUPRIGHT                           1542
#define VO__TU                                           2356
#define VO__U                                              52
#define VO__UPRIGHT                                      2839
#define VS                                               3454
#define VSSUP                                            2086
#define VS__F                                            1367
#define VS__FALSE                                        3521
#define VS__N                                             852
#define VS__NO                                           1013
#define VS__T                                            1538
#define VS__TRUE                                         3200
#define VS__Y                                            1721
#define VS__YES                                          3607
#define WARA                                             3627
#define WARANGCITI                                       1564
#define WB__ALETTER                                       332
#define WB__CR                                           2869
#define WB__DOUBLEQUOTE                                    64
#define WB__DQ                                           2854
#define WB__EB                                           1928
#define WB__EBASE                                        2414
#define WB__EBASEGAZ                                      953
#define WB__EBG                                           722
#define WB__EM                                            729
#define WB__EMODIFIER                                    3835
#define WB__EX                                           1592
#define WB__EXTEND                                       3880
#define WB__EXTENDNUMLET                                 3556
#define WB__FO                                           1432
#define WB__FORMAT                                        297
#define WB__GAZ                                          3337
#define WB__GLUEAFTERZWJ                                 1507
#define WB__HEBREWLETTER                                 2386
#define WB__HL                                           3350
#define WB__KA                                           1163
#define WB__KATAKANA                                     1341
#define WB__LE                                           3543
#define WB__LF                                           1122
#define WB__MB                                            102
#define WB__MIDLETTER                                     700
#define WB__MIDNUM                                       3699
#define WB__MIDNUMLET                                    3857
#define WB__ML                                           1438
#define WB__MN                                           2306
#define WB__NEWLINE                                       796
#define WB__NL                                             84
#define WB__NU                                           1108
#define WB__NUMERIC                                       457
#define WB__OTHER                                        2909
#define WB__REGIONALINDICATOR                            1039
#define WB__RI                                           2481
#define WB__SINGLEQUOTE                                   613
#define WB__SQ                                           3624
#define WB__XX                                           1517
#define WB__ZWJ                                           978
#define WHITESPACE                                        515
#define WORD                                             2601
#define WSPACE                                           2642
#define WSPACE__F                                          16
#define WSPACE__FALSE                                     584
#define WSPACE__N                                        3445
#define WSPACE__NO                                       2043
#define WSPACE__T                                        3789
#define WSPACE__TRUE                                      294
#define WSPACE__Y                                        3441
#define WSPACE__YES                                      2632
#define XDIGIT                                           2496
#define XIDC                                             2757
#define XIDCONTINUE                                      3419
#define XIDC__F                                          1883
#define XIDC__FALSE                                      1174
#define XIDC__N                                          1211
#define XIDC__NO                                         2622
#define XIDC__T                                           893
#define XIDC__TRUE                                       3044
#define XIDC__Y                                          1233
#define XIDC__YES                                        1128
#define XIDS                                             1735
#define XIDSTART                                         1224
#define XIDS__F                                          1604
#define XIDS__FALSE                                      1823
#define XIDS__N                                          2255
#define XIDS__NO                                         1974
#define XIDS__T                                          3661
#define XIDS__TRUE                                       2848
#define XIDS__Y                                            60
#define XIDS__YES                                         797
#define XPEO                                              369
#define XPERLSPACE                                        625
#define XPOSIXALNUM                                      2917
#define XPOSIXALPHA                                      2489
#define XPOSIXBLANK                                      1028
#define XPOSIXCNTRL                                        48
#define XPOSIXDIGIT                                      1783
#define XPOSIXGRAPH                                      2647
#define XPOSIXLOWER                                       916
#define XPOSIXPRINT                                       220
#define XPOSIXPUNCT                                      2919
#define XPOSIXSPACE                                        35
#define XPOSIXUPPER                                       394
#define XPOSIXWORD                                        506
#define XPOSIXXDIGIT                                     1597
#define XSUX                                             3440
#define YI                                               3007
#define YIII                                             1587
#define YIJING                                           3777
#define YIJINGHEXAGRAMSYMBOLS                             575
#define YIRADICALS                                       2928
#define YISYLLABLES                                       333
#define Z                                                2093
#define ZANABAZARSQUARE                                  1913
#define ZANB                                             1665
#define ZINH                                             2823
#define ZL                                                816
#define ZP                                               3057
#define ZS                                                661
#define ZYYY                                             1318
#define ZZZZ                                             3448

/*
rows: 3946
seed: 4277009102
full length of keys: 45192
blob length: 7766
ref length: 31568
data size: 39334 (%87.04)
*/
const unsigned char * const mph_blob =
    "-blk=unifiedcanadianaboriginalsyllabicsextendediscjkcompatibility"
    "ideographssupplementarabicmathematicalalphabeticsymbolsblk=combin"
    "ingdiacriticalmarksforblk=miscellaneoussymbolsandpictmathematical"
    "symbolsamathematicalsymbolsbsupplementalmathematicaloperatorsblk="
    "supplementalsymbolsandpictincombiningdiacriticalmarksforiscombini"
    "ngdiacriticalmarksforideographicdescriptioncharactersideographics"
    "ymbolsandpunctuationinmiscellaneoussymbolsandpictismiscellaneouss"
    "ymbolsandpictblk=mathematicalalphanumerinsupplementalsymbolsandpi"
    "ctissupplementalsymbolsandpictjkunifiedideographsextensionajkunif"
    "iedideographsextensionbjkunifiedideographsextensioncjkunifiedideo"
    "graphsextensiondjkunifiedideographsextensionejkunifiedideographse"
    "xtensionfblk=cuneiformnumberblk=enclosedalphanumericideographicsu"
    "pplementarrowsinmathematicalalphanumerismathematicalalphanumerblk"
    "=phoneticextensionryprivateuseareaaryprivateuseareabblk=variation"
    "selectorincuneiformnumberinenclosedalphanumeriscuneiformnumberise"
    "nclosedalphanumeralphabeticpresentationformsblk=ancientgreekmusic"
    "alnocjklettersandmonthsopticalcharacterrecognitionblk=halfwidthan"
    "dfullwidthkatakanaphoneticextensionsinphoneticextensioninvariatio"
    "nselectorisphoneticextensionisvariationselectorerscriptsandsubscr"
    "iptsinancientgreekmusicalnoc=consonantsucceedingrephaisancientgre"
    "ekmusicalnolb=conditionaljapanesestarrabicpresentationformsablk=a"
    "rabblk=cjkmarksforsymbolsighprivateusesurrogatessymbolsandpictogr"
    "aphsinhalfwidthandfullwidthinsc=consonantprecishalfwidthandfullwi"
    "dthisprependedconcatenationblk=byzantinemusblk=geometricshapengul"
    "compatibilityjamoblk=latinextendedadhorthandformatcontrolshangesw"
    "hennfkccasefoldeddefaultignorablecodepointblk=cjkcompatmonindicnu"
    "mberformsblk=diacriticalblk=earlydynastictechnicalblk=spacingmodi"
    "fierblk=transportandmapinarabincjkisarabisfullcompositionexcluibi"
    "lityformsblk=cjkradicalyrillicsupplementaryinscriptionalparthianb"
    "lk=meeteimayekinhalaarchaicnumbersblk=yijinghexagraminbyzantinemu"
    "singeometricshapeinlatinextendedadc=topandbottomandrightlaceholde"
    "rwithstackerisbyzantinemusisgeometricshapeislatinextendedadscx=bc"
    "=popdirectionalisolatolianhieroglyphsblk=glagolitinscriptionalpah"
    "laviincjkcompatindiacriticalinearlydynasticinsc=brahmijoininghead"
    "letterinspacingmodifierintransportandmapisdiacriticalisearlydynas"
    "ticisspacingmodifieristransportandmapscx=anbc=lefttorightembedbc="
    "righttoleftembeduntingrodnumeralsblk=egyptblk=hanguljamoextendedb"
    "blk=meroiticblk=modifiertoneblk=mongoliablk=sundanesearrowsaarrow"
    "sbarrowscgc=connectorincjkradicalinmeeteimayekinpc=topandleftsubj"
    "oinedinyijinghexagramischangeswhencasemappedlowercasedtitlecasedu"
    "ppercasediscjkradicalislogicalorderexceismeeteimayekisnoncharacte"
    "risyijinghexagramsc=anscx=egyptscx=meroiticoverrideblk=cherokeeha"
    "lfmarksblk=copticepactblk=devanagariblk=ethiopblk=generalblk=geor"
    "giaadditionalornamentaldingbatsblk=ruminumerblk=taixuanjingccc=at"
    "tachedaboveinglagolitfixedpositionexclusionisconnectorisglagolitj"
    "g=burushaskiyehbarsc=egyptsc=meroiticbc=europeanterminfirststrong"
    "isolatebc=paragraphsepablk=alchemblk=canadianucasianalbanianblk=c"
    "yrillicextendedcicextendedablk=letterlikemallformvariantsttonsign"
    "writingbelowleftgc=initialgc=paragraphsepagcb=regionalindicinegyp"
    "tinhanguljamoinmeroiticinmodifiertoneinmongoliaantillationmarkins"
    "c=invisibleinsc=syllablevowelindependentinsundaneseisegyptishangu"
    "ljamoismeroiticismodifiertoneismongoliaissundaneseisterminalscx=c"
    "a=transformedrotatedvo=transformedupseparatorblk=bopomofpriotsyll"
    "abaryandfullformsblk=highpublk=latin1inearbideogramsblk=linearbma"
    "thsymbolsamathsymbolsbblk=myanmarblk=supmathblk=syriangutcomponen"
    "tsincherokeeincopticepactindevanagariinethiopingeneralingeorgiavi"
    "sualorderleftinruminumerkillermedialinsc=modifyingregistershifter"
    "intaixuanjingischerokeeiscopticepactisdevanagariisethiopisgeneral"
    "isgeorgiaisidstrinaryisinitialisparagraphisruminumeristaixuanjing"
    "manichaeandhamedhmanichaeanhundredjg=manichaeantlb=regionalindics"
    "c=cawb=regionalindicbc=segmentblk=bamumraillepatternsntrolpicture"
    "sblk=currencysyllablesimperialaramaiccursiveoldnortharabianblk=ol"
    "dsoublk=vedzanabazarsquaregc=closegc=finalgc=otherinalchemincanad"
    "ianincyrillincyrillicinletterlikeinsc=gemininsc=vowelisalchemisca"
    "nadianiscyrilliscyrillicisidsbinaryisletterliketternwhitespaceisr"
    "egionalindicdalethlamedhsamekhwentyloseparenthesislb=closescx=old"
    "souboundaryneutralbc=commonblk=greekandblk=kanagxiradicalsblk=mus"
    "blk=psaltergc=dashgc=lowercasegc=opengc=titlecasegc=uppercaseinbo"
    "pomofinhighpuinlatin1inlinearbinmyanmarinpc=bottomdeadinsupmathin"
    "syriaisbopomofiscloseisfinalishighpuislatin1islinearbismyanmariso"
    "therissentenceissupmathissyriaalephgimelsadhezayintingentbreaklb="
    "opensc=oldsouscx=psalterbc=nonspacingblk=aegeanlockelementsblk=ip"
    "ablk=lowrticalformsccc=iotagc=currencygc=modifiergc=nonspacinggc="
    "spacehst=notapplicinbamumincurrencyinoldsouinpc=leftnumberjoineri"
    "nvedisbamumiscurrencyisdashislowercaseisoldsouisopenistitlecaseis"
    "uppercaseisvedhamzaonhehgoalbethfivehethkaphqophreshyodhnojoining"
    "groupjg=tehmarbutaarriagereturnmplexcontextlb=mandatorylb=postfix"
    "sc=psalterphabeticpficextablk=khmehjongtilessaramgondindekikakuih"
    "ungarianaistosdisclayingcardsnotreorderedmbiningmarkgc=decimalgc="
    "enclosgc=lineglueafterzwjtrailingjamoingreekandinkanainmusinpsalt"
    "erisgraphemeisgreekandiskanaismusisnonspacispsalterisspacelayalam"
    "lllalayalamnnnamemnunwawlb=prefixscx=mabc=arabicbc=otherominotile"
    "stakanaextextbahawhhmongorasompengerandsublotinagriccc=doublekana"
    "voicingdt=noncanogc=lettergcb=spachst=leadhst=lvtinaegeaninipainl"
    "owoverstruckinsc=pureinsc=toneisaegeansciihexdigitiscaseisdecimal"
    "isipatternsyntaxisquotfinalsemkathlayalambhalayalamllalayalamngal"
    "ayalamnnalayalamnyalayalamssalayalamttajt=rightlb=breaklb=hebrewl"
    "b=infixsc=mascx=sscx=syextendnumletwb=hebrew=unassignedsiclatinxd"
    "rawingstrokespatjamoaroshthipersianenicianaurashtrablk=smawarangc"
    "itiboverightccc=belowgc=caseextcinkhmeinsc=nonidimirroredbaseiskh"
    "meisxposixafricannoonlayalamjalayalamrarohingyayehstraightwawyehw"
    "ithtailjt=dualjt=joincajt=leftjt=transbeforelb=exclamseparablesep"
    "erableglagoliticscx=khscx=phodoublequotewb=singicpfaicpfbhaiksuki"
    "moticonsudawadinabataeannewtailueitalicpermicturkicalmyreneaucinh"
    "auamaritanboveleftgcb=ehst=voweavagrahaisbidiisjoinisposixidconti"
    "nuelnumblankcntrlprintafricanfehafricanqafdalathrishknottedhehrev"
    "ersedpejt=nonnonstarterlb=word=falsesc=khsc=phoinheritedongolianm"
    "enianlinesessavahugineseuployanujaratiurmukhiraganajamoextajamoex"
    "tbblk=javhajaniecialsgbanwaifinaghgariticcompexdt=canoea=ambiguba"
    "segazgrbasehyphenisargainsmaprecatedishorizalnumissmaissoftdisxpe"
    "rlsyriacwawyehbarreeambiguousbothlb=quoqc=maybepatsyn=truesb=sscx"
    "=arscx=baopomofoscx=dthiopicgeorgianscx=gscx=javscx=tascx=uwb=ewb"
    "=miwspacebidicbidimvestanengaliextdextfseretlbasananthaunoonadaya"
    "hlindaicrchenltaninoblockchikismanyaagspaharadahavianiddhamoyombo"
    "uaauabgalogthamvietibetanirhutacasextoverlaycwkcfdt=fradt=isoldt="
    "vegrextiramaisperlisvertjg=farsswashkaflinefeedlb=nextnfcpatwsqma"
    "rk=yessc=arsc=basc=dsc=javsc=tasc=uyprioteseretranthahanunooannad"
    "alinearaultaniithamivietnknownuideoahexakmaothicithibunojkipchayc"
    "ianydianejangeluguhaanaccc103ccc107ccc118ccc122ccc129ccc130ccc132"
    "ccc133ccc=vcwcfcwcminjavinduuktaxtenderisjavisxidlb=ulb=zqc=yesnf"
    "kdnt=sb=ohakmahatranaithilepchascx=lscx=rvo=upwb=awb=newxidsdlamu"
    "hidmbunushughamriyasagekrimilbptccc14ccc15ccc16ccc17ccc18ccc19ccc"
    "20ccc21ccc22ccc23ccc24ccc25ccc26ccc27ccc28ccc29ccc30ccc31ccc32ccc"
    "33ccc34ccc35ccc36ccc84ccc91nuktacwlcwtcwuircleea=nisunilamadhyudh"
    "heloenfdqc=nopcmsc=lsc=rimbuunic=v100homnewa=nonedt=superalaphgam"
    "alkhaphzhainsb=adlmghbvsttkhksuhdprtyrlsrtrekujrhanihanohluwhmnga"
    "ooatniaolymroonarbnbatnkoonshurkhlrdqaacqaaijngunrhrdfngglgibtvai"
    "ixpeoxsuxyiiizanbzinhzyyyzzzz=v11=v20=v21=v30=v31=v32=v40=v41=v50"
    "=v51=v52=v60=v61=v62=v63=v70=v80=v90widealefeemqaphseenshinzain=n"
    "afsikvqrxxgafrehnv=&_zlzpzsjljv";
/* mph_blob length: 7766 */
struct mph_meta {
    uint16_t seed2;
    uint16_t pfx;
    uint16_t sfx;
    uint8_t  pfx_len;
    uint8_t  sfx_len;
    uint16_t value;
};
#define MPH_RSHIFT 8
const uint32_t MPH_SEED1 = 0xfeedface;
const uint32_t MPH_FNV_CONST = 0x01000193;
const uint16_t MPH_BUCKETS = 3946;


const struct mph_meta const mph[3946] = {
  {     2,   439,  4893,   4,   2, ISMIAO },
  {     5,  1778,  5026,   7,   5, INARABICEXTA },
  {     4,  5222,  1117,   4,  24, ISKATAKANAPHONETICEXTENSIONS },
  {     3,  2041,    38,  16,   4, ISGEOMETRICSHAPESEXT },
  {     1,  5645,  1048,  10,   5, LB__HEBREWLETTER },
  {     1,  7181,  7542,   5,   3, SCX__LATN },
  {     0,  6440,  6892,   6,   4, GRBASE__YES },
  {     0,    49,    66,  10,   9, CJKCOMPATIDEOGRAPHS },
  {     6,  3835,     0,  10,   0, MANICHAEAN },
  {     0,  2833,     6,   3,  33, INUNIFIEDCANADIANABORIGINALSYLLABICS },
  {     1,   935,   767,  10,  14, INENCLOSEDIDEOGRAPHICSUP },
  {     0,  1459,  7523,   3,   4, SC__HANI },
  {     0,   818,   484,   6,   8, ISMATHALPHANUM },
  {     2,  4718,    12,   4,   1, GC__MC },
  {     3,  6495,  4218,   8,   4, ISXPERLSPACE },
  {     1,  6633,  4066,   6,   2, WSPACE__F },
  {     1,  4809,  1130,   6,  11, INVEDICEXTENSIONS },
  {     0,  6322,  6405,   2,   6, UGARITIC },
  {     0,  1141,  6104,   3,   8, INPAUCINHAU },
  {     9,  1522,  6322,   5,   7, BLK__BUGINESE },
  {    19,  6473,  4217,   5,   5, HORIZSPACE },
  {     9,   846,    75,  11,   3, PHONETICEXTSUP },
  {     0,  3822,   113,  13,   7, ISTAIXUANJINGSYMBOLS },
  {     1,  3263,  2450,   4,   3, SC__SUND },
  {     0,  1740,  1047,  19,   7, BLK__SPACINGMODIFIERLETTERS },
  {     7,  2479,  7758,   3,   2, GC__ZP },
  {     1,   794,  6379,   4,   6, INMAHAJANI },
  {     0,   794,  5039,   4,  10, INMAHJONGTILES },
  {     1,  6916,  5442,   5,   2, SC__TAVT },
  {     0,  5298,  1906,   6,   2, SCX__MARC },
  {     3,  4490,  5718,   4,   8, ISBOXDRAWING },
  {     2,   935,  1044,  10,  19, INENCLOSEDCJKLETTERSANDMONTHS },
  {     2,  3263,  7590,   4,   3, SC__SHRD },
  {     0,  5667,  2450,   5,   3, SCX__SUND },
  {     5,  5854,  4217,   6,   5, XPOSIXSPACE },
  {     0,  2962,     6,   4,   1, BC__EN },
  {     0,  3945,  4212,   7,  10, PATTERNWHITESPACE },
  {     0,  5852,  4217,   8,   5, ISXPOSIXSPACE },
  {     1,  1160,    30,   3,   1, INVS },
  {    19,   743,    49,  12,   3, BLK__ENCLOSEDCJK },
  {    12,  6424,  7706,   3,   4, EA__WIDE },
  {     2,  7091,    23,   5,   1, CCC__VR },
  {     0,  6809,  1058,   4,   3, DT__FONT },
  {     0,  1280,  6680,   4,   5, INGRANTHA },
  {     1,  4080,   192,   9,  10, INALCHEMICALSYMBOLS },
  {     1,  3054,    13,  11,   1, CYRILLICEXTA },
  {     0,  6943,     0,   7,   0, HANUNOO },
  {     1,  5854,  6187,   6,   5, XPOSIXCNTRL },
  {     0,    69,     0,   5,   0, GRAPH },
  {     6,  2951,    12,   6,   1, SC__MERC },
  {     1,  2318,  2708,  14,   8, BC__LEFTTORIGHTOVERRIDE },
  {     1,  7191,     0,   4,   0, VO__U },
  {     0,  7426,  7018,   4,   3, SC__LYCI },
  {     2,  3166,   251,  13,   4, REGIONALINDICATOR },
  {     8,  6910,  1328,   6,   5, SC__JAVANESE },
  {     0,  2250,     0,  11,   0, ISDIACRITIC },
  {     1,  3781,  1922,   3,   2, IDS__Y },
  {     1,  6488,  6755,   4,   5, ISSOYOMBO },
  {     1,  1784,   581,   5,  27, INCJKUNIFIEDIDEOGRAPHSEXTENSIONB },
  {     4,  7206,  1922,   4,   2, XIDS__Y },
  {     1,  1311,    28,   3,   2, LB__AL },
  {     0,    16,  6270,   3,   6, DIA__FALSE },
  {     1,  4186,  6553,   4,   5, IDSB__TRUE },
  {     3,  3904,  6009,   3,  11, WB__DOUBLEQUOTE },
  {     2,  6601,  4075,   5,   3, SCX__GOTH },
  {     1,  1368,     0,   7,   0, BLK__CJK },
  {     2,  4862,  6780,   4,   5, ISTIBETAN },
  {     2,  1360,  1000,   8,  20, BLK__ARABICPRESENTATIONFORMSB },
  {     1,  4707,   113,  11,   6, GC__CURRENCYSYMBOL },
  {     0,  6411,  1762,   6,   2, COMPEX__T },
  {     0,  3261,  1751,  13,   8, INSC__SYLLABLEMODIFIER },
  {     1,  5222,  6693,   4,   5, ISKAYAHLI },
  {     0,  3532,  5340,  11,   4, BLK__MYANMAREXTB },
  {     0,  5182,  6693,   4,   5, INKAYAHLI },
  {     0,  5005,  2143,  11,   6, SC__PSALTERPAHLAVI },
  {     0,  6644,  6553,   5,   5, BIDIM__TRUE },
  {     0,    91,  4066,   4,   2, MATH__F },
  {     2,  6882,  4641,   5,   3, PATWS__NO },
  {     8,  3198,  4002,  10,   7, INMEROITICCURSIVE },
  {     2,   232,    10,   3,   1, TALE },
  {     0,  6498,  4218,   5,   4, PERLSPACE },
  {     2,  3365,   399,  10,  11, ISTERMINALPUNCTUATION },
  {     5,  6601,  5987,   5,   9, SCX__GLAGOLITIC },
  {     1,  7200,     2,   4,   1, WB__NL },
  {     2,  4425,  6350,   4,   6, INHIRAGANA },
  {     0,  2251,  1762,   2,   2, SD__T },
  {     0,  4283,  4015,  10,   9, SCX__OLDSOUTHARABIAN },
  {     2,  2409,     0,   4,   0, MERO },
  {     2,  3741,     0,  12,   0, ISDEVANAGARI },
  {     0,  1119,     0,   4,   0, KANA },
  {     1,  1628,  7418,   4,   4, NFKCQC__N },
  {     0,  6879,  6539,   3,   4, NFCQC__M },
  {     2,  2297,   114,  16,   6, TRANSPORTANDMAPSYMBOLS },
  {     0,    91,  1922,   4,   2, MATH__Y },
  {     1,    47,  7618,   2,   4, ISZANB },
  {     2,  7423,     0,   3,   0, PCM },
  {     0,  1967,  1317,  17,   8, INLATINEXTENDEDADDITIONAL },
  {     6,  2263,   728,  15,   9, ISEARLYDYNASTICCUNEIFORM },
  {     0,  1836,     0,   7,   0, RADICAL },
  {     1,  1179,  6731,   4,   5, ISPHAGSPA },
  {     0,  5637,  6529,   8,   4, LB__BREAKBOTH },
  {     7,  6628,     1,   4,   1, WB__MB },
  {     5,  1311,  1096,   3,   2, LB__LF },
  {     0,   152,    68,  31,   7, BLK__MISCELLANEOUSSYMBOLSANDPICTOGRAPHS },
  {     1,  7152,  5505,   3,   5, NT__DIGIT },
  {     2,  4329,  4337,   7,   3, BLK__KANGXI },
  {     0,  4106,    75,  10,   3, INCYRILLICSUP },
  {     2,  2057,  2798,  10,  10, ISLATINEXTADDITIONAL },
  {     3,  5005,   142,   4,   3, SC__PALM },
  {     2,  1628,  7142,   4,   6, NFKCQC__YES },
  {     1,  2973,  4066,   4,   2, TERM__F },
  {     2,   120,  5733,   7,   7, BLK__COMPATJAMO },
  {     2,    91,  6553,   4,   5, MATH__TRUE },
  {     1,  3970,   115,  10,   4, CURRENCYSYMBOL },
  {     3,    16,  1922,   3,   2, DIA__Y },
  {     1,  4321,  2741,   8,   6, GREEKANDCOPTIC },
  {     0,  6601,  3241,   5,   3, SCX__GONM },
  {     0,   494,  2472,   5,   7, INSUPARROWSC },
  {     1,    47,    30,   3,   1, ISCS },
  {     0,    47,  3131,   3,   2, ISCWL },
  {     1,  5662,  5039,   5,   2, SC__MAHJ },
  {     0,  2962,   737,  11,   6, BC__EUROPEANNUMBER },
  {     4,  5242,     0,   4,   0, ISPS },
  {     2,  2057,  7754,   3,   1, ISL__ },
  {     1,  1577,  1317,  19,   8, BLK__LATINEXTENDEDADDITIONAL },
  {     4,  5938,  2200,   8,   6, JT__LEFTJOINING },
  {     0,  2078,     1,   3,   1, BC__B },
  {     0,  2027,  6322,   3,   3, ISBUGI },
  {     1,  1829,    74,  14,   4, BLK__CJKRADICALSSUP },
  {     4,   636,    10,  29,   1, CJKUNIFIEDIDEOGRAPHSEXTENSIONE },
  {     1,  7430,  7438,   4,   4, SC__RUNIC },
  {     1,  6613,  5442,   6,   2, SCX__TAVT },
  {     3,  5996,  5740,   6,   8, SCX__KHAROSHTHI },
  {     4,   316,  1375,  11,  15, ISCOMBININGMARKSFORSYMBOLS },
  {     1,  3869,  4590,  13,   5, JG__MANICHAEANSADHE },
  {     4,  2057,    41,   3,   1, ISLT },
  {     3,  4718,     6,   4,   1, GC__MN },
  {     1,  2973,  4641,   4,   3, TERM__NO },
  {     2,  3614,  3072,   7,  10, ETHIOPICEXTENDEDA },
  {     0,  4729,   738,   4,   5, GC__NUMBER },
  {     1,  2584,  1762,   5,   2, CASED__T },
  {     2,   286,  2728,  11,   9, INCOMBININGHALFMARKS },
  {     1,  2057,    14,   4,   2, ISLANA },
  {     1,  4416,  2395,   9,   9, INBOPOMOFOEXTENDED },
  {     0,  2682,  7210,   4,   4, SC__ADLAM },
  {     1,  4788,  1998,   9,   8, INPC__LEFTANDRIGHT },
  {     2,  2057,    54,   3,   1, ISLM },
  {     0,  1457,  3670,  14,   6, INSC__CONSONANTMEDIAL },
  {     1,  3822,  5725,   4,   2, ISTAGS },
  {     0,   124,   144,   9,   4, COMBININGMARK },
  {     1,  3822,  5442,   4,   2, ISTAVT },
  {     0,  1967,    13,  10,   1, INLATINEXTA },
  {     3,  2766,    36,  10,   2, BLK__ETHIOPIC },
  {     2,  1759,  6785,   5,   6, BLK__TIRHUTA },
  {     1,  7727,  4043,   4,  13, INZANABAZARSQUARE },
  {     0,  7377,  6270,   3,   6, CWL__FALSE },
  {     1,    91,  6892,   4,   4, MATH__YES },
  {     1,  1179,    75,  13,   3, ISPHONETICEXTSUP },
  {     0,     5,     0,  42,   0, UNIFIEDCANADIANABORIGINALSYLLABICSEXTENDED },
  {     4,  5825,  3485,   4,   3, SC__NARB },
  {     1,  2839,   113,  15,   7, BLK__TAIXUANJINGSYMBOLS },
  {     2,   468,   247,  16,   9, BLK__MATHEMATICALOPERATORS },
  {     2,  4619,  4012,   6,  12, SC__OLDNORTHARABIAN },
  {     1,  4450,  5027,   9,   4, INMYANMAREXTA },
  {     0,  6247,  2199,   6,   7, JT__NONJOINING },
  {     0,  2752,     0,  14,   0, BLK__DEVANAGARI },
  {     0,  1368,   610,   7,  27, BLK__CJKUNIFIEDIDEOGRAPHSEXTENSIONC },
  {     1,    41,  7034,   2,   4, TELUGU },
  {     3,  2295,   114,  18,   6, ISTRANSPORTANDMAPSYMBOLS },
  {     5,  2149,    59,  12,  16, INCJKCOMPATIBILITYIDEOGRAPHS },
  {     1,   522,  3112,   4,  15, ISSUTTONSIGNWRITING },
  {     4,  2479,    30,   4,   1, GC__CS },
  {     1,  2934,     0,   2,   0, SK },
  {     2,  5852,    69,   8,   5, ISXPOSIXGRAPH },
  {     2,  5222,  5331,   4,   9, ISKATAKANAEXT },
  {     0,  3050,     0,  21,   0, BLK__CYRILLICEXTENDEDC },
  {     0,  5842,  6317,   3,   5, BASSAVAH },
  {     1,  2540,     0,   8,   0, INYIJING },
  {     4,  1457,  2006,  15,  10, INSC__CONSONANTPLACEHOLDER },
  {     0,  2584,  4641,   5,   3, CASED__NO },
  {     3,  3375,  1843,   5,   7, SCX__CYRILLIC },
  {     0,  4619,  2042,   4,   3, SC__OSGE },
  {     1,    47,  6266,   2,   4, ISWORD },
  {     2,    49,     0,  36,   0, CJKCOMPATIBILITYIDEOGRAPHSSUPPLEMENT },
  {     1,  3054,    13,  16,   1, CYRILLICEXTENDEDA },
  {     0,  3869,  4595,  13,   5, JG__MANICHAEANZAYIN },
  {     2,  1141,    75,  13,   3, INPHONETICEXTSUP },
  {     2,  3705,  6391,   4,   6, INTAGBANWA },
  {     1,  3320,  4002,  10,   7, ISMEROITICCURSIVE },
  {     0,   935,     0,  18,   0, INENCLOSEDALPHANUM },
  {     2,   286,  3953,   4,  13, INCONTROLPICTURES },
  {     3,  2826,     0,   8,   0, BLK__RUMI },
  {     3,  2074,  7626,   4,   4, SCX__ZYYY },
  {     1,  6601,  7520,   5,   3, SCX__GUJR },
  {     2,  4729,     0,   5,   0, GC__NO },
  {     5,  2149,    66,  12,   9, INCJKCOMPATIDEOGRAPHS },
  {     0,  2382,     0,  14,   0, BLK__HANGULJAMO },
  {     0,  2839,     0,  15,   0, BLK__TAIXUANJING },
  {     0,  4705,    30,   3,   1, TAGS },
  {     0,  4529,  3441,   9,   9, ISLINEARBSYLLABARY },
  {     0,   256,  5364,   7,   8, BLK__SUPERANDSUB },
  {     3,  6613,  6969,   6,   5, SCX__TAITHAM },
  {     0,  4283,  7230,   5,   4, SCX__ORIYA },
  {     4,  5665,  5050,   3,   9, MASARAMGONDI },
  {    11,    47,  7758,   2,   2, ISZP },
  {    16,  3612,   853,   9,   4, INETHIOPICEXT },
  {     2,  3050,  3436,   6,  14, BLK__CYPRIOTSYLLABARY },
  {     3,  2540,  4340,   4,   8, INYIRADICALS },
  {     3,  6440,  4066,   6,   2, GRBASE__F },
  {     1,  2854,  7307,   4,   5, CCC__CCC26 },
  {     0,  6644,     0,   5,   0, BIDIM },
  {     3,  2057,     0,  16,   0, ISLATINEXTENDEDA },
  {     0,  2579,  6892,   5,   4, LOWER__YES },
  {     1,  7181,    13,   5,   3, SCX__LANA },
  {     3,  3472,     0,  10,   0, BLK__LATIN1 },
  {     3,  2437,     6,   8,   1, MONGOLIAN },
  {     3,  1789,   790,   4,   4, ISARROWS },
  {     0,  3375,  3035,   6,  15, SCX__CAUCASIANALBANIAN },
  {     0,  6488,  4927,   4,   2, ISSOYO },
  {     0,  5854,  6192,   6,   5, XPOSIXPRINT },
  {     2,  4156,    30,   5,   1, ISCANS },
  {     0,  2074,  7610,   4,   4, SCX__XSUX },
  {     2,  3400,    23,   3,   1, VO__R },
  {     1,  2482,   399,   9,  11, CONNECTORPUNCTUATION },
  {     2,  7096,  4641,   4,   3, CWCF__NO },
  {     2,  5298,  5258,   6,   7, SCX__MALAYALAM },
  {     0,  1522,  7214,   5,   4, BLK__BUHID },
  {     0,  4628,  2142,  11,   7, SCX__PSALTERPAHLAVI },
  {     1,  6128,  6433,   5,   7, GCB__EBASEGAZ },
  {     0,  4962,  7690,   3,   4, AGE__V63 },
  {     0,  2579,     0,   5,   0, LOWER },
  {     8,  1198,    30,   3,   1, ISVS },
  {     0,     6,     0,   1,   0, N },
  {     0,    47,    39,   5,   4, ISCJKEXTE },
  {     1,  5483,  7593,   4,   3, SC__TFNG },
  {     0,   992,     0,  27,   0, ALPHABETICPRESENTATIONFORMS },
  {     5,  3308,  6685,   5,   4, ISHANUNOO },
  {     0,  4674,  1684,   5,  15, BLK__INDICNUMBERFORMS },
  {     8,   522,   399,  14,  11, ISSUPPLEMENTALPUNCTUATION },
  {     1,  4369,   399,   4,  11, DASHPUNCTUATION },
  {     2,    47,  5726,   5,   7, ISCJKSTROKES },
  {     2,  7181,  7023,   5,   5, SCX__LYDIAN },
  {     3,  1784,     0,   5,   0, INCJK },
  {     6,  4780,  6084,   5,   6, INOLDPERMIC },
  {     0,   494,  6742,   3,   6, INSHAVIAN },
  {     1,  3050,    13,  15,   1, BLK__CYRILLICEXTA },
  {     1,   494,  5762,   3,   9, INSAURASHTRA },
  {     0,   737,     0,   6,   0, NUMBER },
  {     0,  1522,  6037,   5,   8, BLK__BHAIKSUKI },
  {     0,    22,  3449,   3,   2, ORIYA },
  {     0,  2074,  6287,   4,   9, SCX__INHERITED },
  {     1,    65,  4641,   4,   3, IDEO__NO },
  {     1,  1368,  5027,   7,   4, BLK__CJKEXTA },
  {     4,    91,  1762,   4,   2, MATH__T },
  {     0,  7423,  4641,   3,   3, PCM__NO },
  {     0,  6411,  4066,   6,   2, COMPEX__F },
  {     2,  1475,  5585,   3,   3, ISHMNG },
  {     4,  1311,  2111,   3,   2, LB__GL },
  {     0,  6168,     0,   3,   0, IDC },
  {     3,  2074,  7630,   4,   4, SCX__ZZZZ },
  {     0,  2822,     3,   3,   1, BATK },
  {     0,   918,     0,  11,   0, INCUNEIFORM },
  {     1,  2095,  7234,   3,   4, ISOSAGE },
  {    10,  5304,     6,   4,   1, BC__AN },
  {     0,    23,  6270,   2,   6, RI__FALSE },
  {     8,  4780,  6078,   5,   6, INOLDITALIC },
  {     2,  2839,  6391,   6,   6, BLK__TAGBANWA },
  {     9,  2433,   495,  12,  11, BLK__MONGOLIANSUPPLEMENT },
  {     7,   439,  1891,   3,   3, ISMTEI },
  {     1,  4628,  4688,   5,   3, SCX__PRTI },
  {     1,  3222,   495,  10,  11, INMONGOLIANSUPPLEMENT },
  {     1,  1475,  6447,   3,   5, ISHYPHEN },
  {     3,  5667,  6754,   5,   6, SCX__SOYOMBO },
  {     1,   316,    39,  27,   8, ISCOMBININGDIACRITICALMARKSEXTENDED },
  {     1,  5212,    39,   7,   8, ISGREEKEXTENDED },
  {     5,  1740,  6385,   6,   6, BLK__SPECIALS },
  {     0,  4628,  7573,   5,   3, SCX__PLRD },
  {     0,  5823,  7113,   6,   4, INSC__NUKTA },
  {     3,  3425,  5718,   6,   8, BLK__BOXDRAWING },
  {     1,  4072,   737,   8,   6, GC__OTHERNUMBER },
  {     2,   897,    30,   5,   1, BLK__VS },
  {     3,  5483,  6397,   4,   7, SC__TIFINAGH },
  {     4,   159,  6553,   2,   5, CE__TRUE },
  {     0,  4780,  2809,   3,  17, INORNAMENTALDINGBATS },
  {     6,  1475,  7532,   3,   3, ISHLUW },
  {     2,  7221,     0,   5,   0, NUSHU },
  {     0,  6827,     0,   5,   0, GREXT },
  {     3,  3869,  5589,   5,  10, JG__MALAYALAMNNA },
  {     8,  2074,    64,   4,   2, SCX__YI },
  {     0,  1577,    12,  12,   1, BLK__LATINEXTC },
  {     4,  7391,   788,   4,   5, EA__NARROW },
  {     1,    26,  7221,   2,   5, INNUSHU },
  {     3,  3308,  1586,  12,   9, ISHANGULJAMOEXTENDEDA },
  {     0,  6633,  6553,   6,   5, WSPACE__TRUE },
  {     1,  5959,    54,   4,   1, LB__EM },
  {     4,  4082,   100,   7,   3, ALCHEMICAL },
  {     1,  3904,  1604,   3,   6, WB__FORMAT },
  {     0,  6155,    12,   6,   1, ISJOINC },
  {     0,  5817,  1382,   6,   8, INKHMERSYMBOLS },
  {     2,   157,     0,   4,   0, ISCE },
  {     0,   152,   113,   8,   7, BLK__MISCSYMBOLS },
  {     0,  6985,  6553,   5,   5, UIDEO__TRUE },
  {     4,  5510,  2209,   6,   7, ISCASEDLETTER },
  {     0,  1660,  6270,   3,   6, DEP__FALSE },
  {     6,  5855,  6192,   5,   5, POSIXPRINT },
  {     0,  5996,  3938,   6,   2, SCX__KHMR },
  {     0,    65,  6270,   4,   6, IDEO__FALSE },
  {     0,  1836,  4641,   7,   3, RADICAL__NO },
  {     2,  6161,     0,   4,   0, ISPO },
  {     4,  1368,   697,   7,  27, BLK__CJKUNIFIEDIDEOGRAPHSEXTENSIONF },
  {     2,  5667,  5885,   5,   3, SCX__SAMR },
  {     1,  3186,  2396,  12,   9, INHANGULJAMOEXTENDEDB },
  {     0,  4780,  6725,   3,   6, INOSMANYA },
  {     1,  6809,  2088,   6,   5, DT__FRACTION },
  {     1,  5457,  1403,   5,  10, INLOWSURROGATES },
  {     1,  3614,  3061,   7,   9, ETHIOPICEXTENDED },
  {     0,  2854,  2001,   4,   5, CCC__RIGHT },
  {     2,  2854,  7073,   4,   5, CCC__CCC13 },
  {     1,  2584,  4066,   5,   2, CASED__F },
  {     1,  1919,  3978,   6,   9, BLK__YISYLLABLES },
  {     1,  2057,  7755,   3,   1, ISL_ },
  {     1,  4763,  6310,   4,   6, INBALINESE },
  {     0,  2854,  7372,   4,   5, CCC__NUKTA },
  {     1,  7383,  1762,   3,   2, CWU__T },
  {     0,  4130,  7517,   4,   3, SC__GREK },
  {     0,  7423,  1762,   3,   2, PCM__T },
  {     1,  6084,     0,   4,   0, PERM },
  {     0,  7391,     0,   4,   0, EA__N },
  {     2,  3263,  2450,   4,   8, SC__SUNDANESE },
  {     0,  4628,  6104,   5,   3, SCX__PAUC },
  {     1,  1019,  7210,   5,   4, BLK__ADLAM },
  {     0,  7196,  1047,   4,   6, WB__ALETTER },
  {     1,  3790,  3979,   3,   8, YISYLLABLES },
  {     0,  1836,  1922,   7,   2, RADICAL__Y },
  {     0,  3536,  5340,   7,   4, MYANMAREXTB },
  {     0,   766,  4641,   2,   3, CI__NO },
  {     1,  4174,  1850,  10,  13, ISCYRILLICSUPPLEMENTARY },
  {    13,   130,  6998,   3,   5, INGOTHIC },
  {     1,  4962,  7694,   3,   4, AGE__V70 },
  {    10,  3162,  5441,   4,   2, GCB__LV },
  {     1,  1019,  1008,  25,   6, BLK__ANCIENTGREEKMUSICALNOTATION },
  {     0,   897,    30,  21,   1, BLK__VARIATIONSELECTORS },
  {     1,  1403,     0,   9,   0, SURROGATE },
  {     1,  3869,  3903,  14,   2, JG__MANICHAEANTAW },
  {     0,    65,     0,   4,   0, IDEO },
  {     2,  2041,  7520,   3,   3, ISGUJR },
  {     8,  3308,  3978,   8,   9, ISHANGULSYLLABLES },
  {     2,  3263,  1434,   4,   3, SC__SINH },
  {     0,  1368,   113,   7,   7, BLK__CJKSYMBOLS },
  {     3,  5251,  6498,   7,   4, ISSPACEPERL },
  {     5,  2599,  4641,   5,   3, UPPER__NO },
  {     4,  5825,  7563,   4,   3, SC__NKOO },
  {     2,  1360,  6032,   8,   5, BLK__ARABICPFB },
  {     2,  2599,  1047,   9,   6, UPPERCASELETTER },
  {     7,   494,  6736,   3,   6, INSHARADA },
  {     0,  4962,  7642,   3,   4, AGE__V21 },
  {     4,  6276,  6950,   4,   6, SC__KANNADA },
  {     2,  1581,    12,  13,   1, LATINEXTENDEDC },
  {     2,  2652,   368,   3,   4, ISNCHAR },
  {     0,    55,   143,   2,   2, PALM },
  {     0,    85,   736,   2,   2, ARMN },
  {     3,  2871,   776,  10,  12, INGLAGOLITICSUPPLEMENT },
  {     0,  6424,  1094,   3,   9, EA__HALFWIDTH },
  {     0,  4275,   399,   8,  11, LB__CLOSEPUNCTUATION },
  {     0,  6887,     0,   5,   0, QMARK },
  {     1,  2074,  7618,   4,   4, SCX__ZANB },
  {     0,  2095,  7230,   3,   4, ISORIYA },
  {     1,  7152,   489,   3,   2, NT__NU },
  {     0,  7606,     0,   4,   0, XPEO },
  {     7,  6276,    13,   4,   3, SC__KANA },
  {     0,  6581,  6329,   5,   3, SCX__DUPL },
  {     2,  2687,  1455,   5,   3, SCX__ETHI },
  {     2,  6558,    76,   3,   2, SB__UP },
  {     0,  5932,  6270,   5,   6, JOINC__FALSE },
  {     0,  2445,     0,  13,   0, BLK__SUNDANESE },
  {     0,  2962,    41,   4,   1, BC__ET },
  {     2,  6562,   156,   6,   2, SCX__ARMI },
  {     0,  1459,  3846,   4,   3, SC__CHAM },
  {     3,  2854,  7292,   4,   5, CCC__CCC23 },
  {     4,   522,  2465,   5,   7, ISSUPARROWSB },
  {     1,  1929,  1922,   3,   2, HEX__Y },
  {     3,  7602,     0,   3,   0, VAI },
  {     0,  2027,  6655,   3,   6, ISBENGALI },
  {     4,  5852,  5505,   8,   5, ISXPOSIXDIGIT },
  {     0,  4837,  1047,  11,   6, ISLOWERCASELETTER },
  {     0,  7100,  4066,   4,   2, CWCM__F },
  {     0,  6601,  6998,   5,   5, SCX__GOTHIC },
  {     2,  6276,  3938,   5,   2, SC__KHMR },
  {     1,  1360,   790,   6,   4, BLK__ARROWS },
  {     4,  2943,  2103,   8,  14, SC__EGYPTIANHIEROGLYPHS },
  {     4,  6502,    75,   6,   3, SYRIACSUP },
  {     2,  6809,     0,   6,   0, DT__FRA },
  {     0,  2833,  6791,   3,   6, INUCASEXT },
  {     2,  5854,  2599,   6,   5, XPOSIXUPPER },
  {    27,  1967,     0,  16,   0, INLATINEXTENDEDA },
  {     3,  1604,     0,   6,   0, FORMAT },
  {     1,  4156,  1034,   4,   2, ISCAKM },
  {     3,  4148,   192,   9,  10, ISALCHEMICALSYMBOLS },
  {     9,  2074,  3430,   5,   3, SCX__BOPO },
  {     5,  5986,    76,  11,   2, GLAGOLITICSUP },
  {     0,  1937,  6322,   3,   7, INBUGINESE },
  {     0,  1778,  6028,   7,   4, INARABICPFA },
  {     0,  6440,  6270,   6,   6, GRBASE__FALSE },
  {     7,  2924,  4590,   3,   3, JG__SAD },
  {     1,  2696,  2438,   5,   3, SCX__MONG },
  {     0,  6161,  6182,   7,   5, ISPOSIXBLANK },
  {     5,  5172,    39,   7,   8, INGREEKEXTENDED },
  {     1,  1457,  2206,  14,  10, INSC__CONSONANTHEADLETTER },
  {     0,  6990,     0,   4,   0, AHEX },
  {     7,  6815,     0,   6,   0, DT__ISO },
  {     0,  3791,  2131,   4,  18, ISINSCRIPTIONALPAHLAVI },
  {     0,  3146,    11,   4,   1, GC__PD },
  {     0,  5483,  7038,   4,   3, SC__THAA },
  {     1,  5855,   399,   5,   5, POSIXPUNCT },
  {     7,  4056,   399,   8,  11, GC__CLOSEPUNCTUATION },
  {     4,  1833,    74,  10,  11, CJKRADICALSSUPPLEMENT },
  {     1,   256,  6742,   5,   6, BLK__SHAVIAN },
  {     1,   728,    30,  15,   1, CUNEIFORMNUMBERS },
  {     2,  4283,  2023,   6,   2, SCX__OLCK },
  {     1,  1433,     0,   4,   0, SINH },
  {     3,  2027,  4662,   3,  12, ISBLOCKELEMENTS },
  {     6,  7162,    50,   3,   1, MAHJ },
  {     0,  4962,  7634,   3,   4, AGE__V11 },
  {     1,  1573,     0,   4,   0, JAMO },
  {     6,  2251,  4641,   2,   2, SD__N },
  {     6,  4513,  1394,   7,  19, ISHIGHPRIVATEUSESURROGATES },
  {     0,  3476,    75,   6,  10, LATIN1SUPPLEMENT },
  {     0,  1660,  4641,   3,   3, DEP__NO },
  {     3,  4416,    22,   9,   1, INBOPOMOFO },
  {     5,  1311,  7764,   3,   2, LB__JV },
  {     2,  4088,  3106,   4,   4, INCARIAN },
  {     0,  6804,  6892,   5,   4, CWKCF__YES },
  {     3,    26,  7447,   3,   3, INAHOM },
  {     0,  2149,    59,  12,   6, INCJKCOMPATIBILITY },
  {     3,  2854,  2321,   4,   4, CCC__LEFT },
  {     1,  4729,   144,  13,   4, GC__NONSPACINGMARK },
  {     0,  5855,    69,   5,   5, POSIXGRAPH },
  {     5,  2854,  7342,   4,   5, CCC__CCC33 },
  {     2,  3741,  6463,   4,   8, ISDEPRECATED },
  {     2,  3869,  5871,   5,   9, JG__MALAYALAMJA },
  {     0,  3930,    75,   9,  10, BLK__BAMUMSUPPLEMENT },
  {     3,  3930,  1117,   6,   3, BLK__BATAK },
  {     0,  6187,     0,   5,   0, CNTRL },
  {     4,   399,     0,  11,   0, PUNCTUATION },
  {     1,   128,  1685,   4,  14, ININDICNUMBERFORMS },
  {     3,  6872,   761,   4,   6, LB__NUMERIC },
  {     4,  4369,  1922,   4,   2, DASH__Y },
  {     0,  3186,     0,   8,   0, INHANGUL },
  {     4,  3614,  5026,   7,   5, ETHIOPICEXTA },
  {     0,  1778,   777,   7,  11, INARABICSUPPLEMENT },
  {     0,  7731,  5700,   3,  10, IN__UNASSIGNED },
  {     0,  1030,    39,   5,   8, GREEKEXTENDED },
  {     5,  3365,     0,   6,   0, ISTERM },
  {     2,  1101,    13,   3,   3, THAANA },
  {     1,  1522,    36,  16,   2, BLK__BYZANTINEMUSIC },
  {     2,  4130,  6937,   4,   6, SC__GRANTHA },
  {     0,  7200,   761,   4,   6, WB__NUMERIC },
  {     0,  5996,  2093,   5,   3, SCX__KALI },
  {     5,  2833,  1632,   3,   3, INUCAS },
  {     2,  5855,  6187,   5,   5, POSIXCNTRL },
  {     0,  5797,     0,   5,   0, CCC__B },
  {     0,  2666,   114,  17,   6, ISYIJINGHEXAGRAMSYMBOLS },
  {     0,   439,   113,   6,   7, ISMISCSYMBOLS },
  {     0,    16,  1762,   3,   2, DIA__T },
  {     0,   935,  6674,   3,   6, INELBASAN },
  {     1,  3741,  1644,   4,  23, ISDEFAULTIGNORABLECODEPOINT },
  {     2,   794,   484,   6,   8, INMATHALPHANUM },
  {     1,  4780,  4015,   8,   9, INOLDSOUTHARABIAN },
  {     2,  4639,   144,  13,   4, BC__NONSPACINGMARK },
  {     5,  4385,   399,   7,  11, GC__OPENPUNCTUATION },
  {     2,   223,  2458,  12,   7, SUPPLEMENTALARROWSA },
  {     1,   152,  1423,   8,  11, BLK__MISCPICTOGRAPHS },
  {     1,  1457,  4803,   5,   6, INSC__JOINER },
  {     1,  1368,   389,   7,  21, BLK__CJKSYMBOLSANDPUNCTUATION },
  {     3,  5855,  2579,   5,   5, POSIXLOWER },
  {     9,  2756,    39,  10,   8, DEVANAGARIEXTENDED },
  {     0,  6916,  6766,   5,   5, SC__TAGALOG },
  {     8,  5429,  5165,   8,   7, HST__LEADINGJAMO },
  {     1,  1522,  3939,   5,  14, BLK__BRAILLEPATTERNS },
  {     0,  7152,   760,   3,   7, NT__NUMERIC },
  {     0,  2057,    12,   3,   1, ISLC },
  {     2,    47,   639,   5,  27, ISCJKUNIFIEDIDEOGRAPHSEXTENSIOND },
  {     0,  1967,  2798,  10,  10, INLATINEXTADDITIONAL },
  {     1,    39,  4066,   3,   2, EXT__F },
  {     0,  5182,  4337,   5,   3, INKANGXI },
  {     1,  1179,  5078,   4,   6, ISPHAISTOS },
  {     1,   175,  1404,   2,   2, SAUR },
  {     8,  6896,   156,   5,   2, SC__ARMI },
  {     0,  3054,  3436,   2,  14, CYPRIOTSYLLABARY },
  {     0,   747,    30,  20,   1, ENCLOSEDALPHANUMERICS },
  {     0,    68,  3846,   2,   3, OGHAM },
  {     2,  2854,  7257,   4,   5, CCC__CCC16 },
  {     4,  5654,  5968,   5,   9, LB__INSEPARABLE },
  {     1,  6372,  1328,   7,   5, BLK__JAVANESE },
  {     2,  2924,  4896,   3,   7, JG__HEHGOAL },
  {     0,  3554,    12,   9,   1, BLK__SYRIAC },
  {     3,    39,  6892,   3,   4, EXT__YES },
  {     0,  4862,  6398,   4,   6, ISTIFINAGH },
  {     0,  5298,  3837,   6,   8, SCX__MANICHAEAN },
  {     4,  3308,     0,   5,   0, ISHAN },
  {     0,  2027,  3939,   3,   3, ISBRAI },
  {    10,  3050,  1850,  12,  13, BLK__CYRILLICSUPPLEMENTARY },
  {     1,  3653,  7028,   3,   5, INREJANG },
  {     0,  6901,  3936,   5,   3, SC__BAMUM },
  {     4,  5228,  6708,   4,   5, ISMULTANI },
  {     0,  5854,  6266,   6,   4, XPOSIXWORD },
  {     0,  6882,  1922,   5,   2, PATWS__Y },
  {     6,   494,   235,  14,  21, INSUPPLEMENTALMATHEMATICALOPERATORS },
  {     4,  6417,  7386,   4,   5, DT__CIRCLE },
  {     1,  6990,  6270,   4,   6, AHEX__FALSE },
  {     0,  2556,  1628,  13,  14, ISCHANGESWHENNFKCCASEFOLDED },
  {     1,   842,   400,   5,  10, BLK__PUNCTUATION },
  {     1,  2696,  1752,   5,   3, SCX__MODI },
  {     0,  3222,     6,  10,   1, INMONGOLIAN },
  {     5,  4212,     0,  10,   0, WHITESPACE },
  {     0,  5817,    23,   6,   1, INKHMER },
  {     0,  2250,  7514,   3,   3, ISDSRT },
  {     0,  6601,  7517,   5,   3, SCX__GREK },
  {     0,   842,  6104,   5,   8, BLK__PAUCINHAU },
  {     6,   108,  6656,   2,   5, BENGALI },
  {     1,  6161,  6478,   7,   5, ISPOSIXALNUM },
  {     1,  2599,     0,   9,   0, UPPERCASE },
  {     0,  4009,     0,  15,   0, OLDNORTHARABIAN },
  {     1,  3146,   866,   4,   9, GC__PRIVATEUSE },
  {     0,  3869,  5283,  13,   3, JG__MANICHAEANNUN },
  {     0,  6568,  6310,   6,   6, SCX__BALINESE },
  {     0,  7114,   354,   2,   2, KTHI },
  {     1,    16,  4641,   2,   2, DI__N },
  {     2,  2337,  1279,  19,   4, BC__RIGHTTOLEFTEMBEDDING },
  {     1,  3000,   250,  13,   5, PARAGRAPHSEPARATOR },
  {     0,  2074,  7531,   4,   4, SCX__HLUW },
  {     4,  3247,  2020,  14,   7, INSC__INVISIBLESTACKER },
  {     0,   256,  2465,  16,   7, BLK__SUPPLEMENTALARROWSB },
  {     1,  4862,     0,   7,   0, ISTITLE },
  {     1,  1498,   867,   4,  12, ISPRIVATEUSEAREA },
  {     4,  1557,  6344,   2,   6, GURMUKHI },
  {     1,  2579,  6270,   5,   6, LOWER__FALSE },
  {     2,  3344,     0,   6,   0, ISMONG },
  {    12,  6713,     0,   7,   0, NOBLOCK },
  {     0,  3800,  3416,  11,   9, ISPARAGRAPHSEPARATOR },
  {     0,  4130,    22,   5,   2, SC__GEOR },
  {     3,  5654,    30,   4,   1, LB__IS },
  {     0,  6639,  1922,   5,   2, BIDIC__Y },
  {     4,  1997,     0,   4,   0, MAND },
  {     0,  4742,  1404,   4,   8, GC__SURROGATE },
  {     0,  2924,  6197,   3,  10, JG__AFRICANFEH },
  {     0,  6547,     0,  11,   0, PATSYN__TRUE },
  {     2,  2074,  6069,   4,   9, SCX__NEWTAILUE },
  {     4,  3800,  6549,   4,   4, ISPATSYN },
  {     4,   743,    75,  24,  10, BLK__ENCLOSEDALPHANUMERICSUPPLEMENT },
  {     1,  2078,  7557,   3,   2, BC__BN },
  {     6,  4283,  6084,   7,   6, SCX__OLDPERMIC },
  {     0,  5929,  1949,   9,   5, JT__JOINCAUSING },
  {     3,  4763,    75,   7,   3, INBAMUMSUP },
  {     4,  1179,   400,   3,  10, ISPUNCTUATION },
  {     1,  1434,  3450,   6,  12, INHALFANDFULLFORMS },
  {     0,    91,  4641,   4,   2, MATH__N },
  {     1,   256,  1413,   7,  21, BLK__SUPSYMBOLSANDPICTOGRAPHS },
  {     0,  5483,  7033,   4,   3, SC__TELU },
  {     1,  3013,  5015,   6,  10, BLK__ALPHABETICPF },
  {     1,   286,  5733,   5,   7, INCOMPATJAMO },
  {     1,  3705,   113,  13,   7, INTAIXUANJINGSYMBOLS },
  {     0,   766,  6553,   2,   5, CI__TRUE },
  {     4,  7100,  1762,   4,   2, CWCM__T },
  {     0,  2924,  4590,   3,   5, JG__SADHE },
  {     2,  5402,  3670,   3,   6, DT__MEDIAL },
  {     0,  1311,  5148,   3,   4, LB__GLUE },
  {     0,  3198,  2106,  10,  11, INMEROITICHIEROGLYPHS },
  {     0,  5662,  5050,   6,   9, SC__MASARAMGONDI },
  {     2,   152,  1731,   8,   9, BLK__MISCTECHNICAL },
  {     1,  3162,  4075,   4,   5, GCB__OTHER },
  {     1,  4742,    12,   4,   1, GC__SC },
  {     5,  1475,  5070,   3,   3, ISHUNG },
  {     1,  1759,  6397,   5,   7, BLK__TIFINAGH },
  {     0,  2668,   114,  15,   6, YIJINGHEXAGRAMSYMBOLS },
  {     0,  6568,  1035,   6,   2, SCX__BAMU },
  {     1,  1687,     0,   2,   0, CN },
  {     2,    72,   104,   2,   2, PHLP },
  {     0,   410,   790,   3,   2, INMRO },
  {     0,  3146,     7,   4,   1, GC__PI },
  {     1,  4441,    13,   8,   1, INLINEARA },
  {     0,  6483,     0,   4,   0, ISSM },
  {     0,  4369,  4641,   4,   3, DASH__NO },
  {     5,  6633,  6270,   6,   6, WSPACE__FALSE },
  {     0,  5996,  1116,   5,   7, SCX__KATAKANA },
  {     2,   159,  4641,   2,   3, CE__NO },
  {     1,  6985,     0,   5,   0, UIDEO },
  {     0,  2250,  1379,  13,  11, ISDIACRITICALSFORSYMBOLS },
  {     0,   842,  5088,   5,  11, BLK__PLAYINGCARDS },
  {     3,  6149,    54,   6,   1, ISBIDIM },
  {     5,   439,   788,  25,   6, ISMISCELLANEOUSSYMBOLSANDARROWS },
  {     4,  7096,  6892,   4,   4, CWCF__YES },
  {     2,    12,     0,  18,   0, CANADIANABORIGINAL },
  {     1,  3577,   202,   4,   2, INCHAM },
  {     5,  6558,  1284,   4,   2, SB__SEP },
  {     2,   494,  1899,   3,   6, INSINHALA },
  {     2,   522,  3485,   3,   3, ISSARB },
  {     0,  2696,  3537,   5,   6, SCX__MYANMAR },
  {     0,  3869,  5280,  13,   3, JG__MANICHAEANMEM },
  {     0,   223,     0,  33,   0, SUPPLEMENTALMATHEMATICALOPERATORS },
  {     1,  3367,   399,   8,  11, TERMINALPUNCTUATION },
  {     9,  2556,  2589,  13,  10, ISCHANGESWHENTITLECASED },
  {     9,  4945,  3903,   4,   2, JG__TAW },
  {     1,  1667,  1817,  13,  12, BLK__CJKCOMPATIBILITYFORMS },
  {     4,  7412,  6892,   3,   4, LOE__YES },
  {     0,  2854,  7357,   4,   5, CCC__CCC36 },
  {     1,   794,  6698,   4,   5, INMANDAIC },
  {     6,  3186,  1560,   8,  17, INHANGULCOMPATIBILITYJAMO },
  {     5,    85,     0,   6,   0, ARABIC },
  {     6,  1475,    39,   3,   2, ISHEX },
  {     5,   522,  3118,   3,   3, ISSGNW },
  {     0,  3800,  5345,   4,   9, ISPAHAWHHMONG },
  {     1,  6020,  6013,   7,   7, WB__SINGLEQUOTE },
  {     0,    49,  5027,   3,   4, CJKEXTA },
  {     0,  7459,  5264,   4,   2, DT__SML },
  {     1,  2924,  5900,   3,  11, JG__STRAIGHTWAW },
  {     0,  4538,  5027,   9,   4, ISMYANMAREXTA },
  {     6,   842,  5078,   6,  10, BLK__PHAISTOSDISC },
  {     1,   818,     0,   6,   0, ISMATH },
  {     3,  1664,  7033,   3,   5, INTELUGU },
  {     0,     2,  7755,   1,   1, L_ },
  {     3,  3547,   247,   7,   9, SUPMATHOPERATORS },
  {     0,  1457,  2881,  17,   5, INSC__CONSONANTPREFIXED },
  {     3,  1179,  5755,   5,   7, ISPHOENICIAN },
  {     3,  6497,  4218,   6,   4, XPERLSPACE },
  {     1,  4848,  5069,   5,   9, ISOLDHUNGARIAN },
  {     7,  6613,  7599,   5,   3, SCX__TIBT },
  {     0,  1457,  1273,  14,  15, INSC__CONSONANTSUCCEEDINGREPHA },
  {     0,  3330,  1047,  10,   6, ISMODIFIERLETTER },
  {     0,  2609,    74,  12,   4, ISCJKRADICALSSUP },
  {     1,  4837,     0,   7,   0, ISLOWER },
  {     0,  3354,    75,  11,  10, ISSUNDANESESUPPLEMENT },
  {     1,  6804,  6553,   5,   5, CWKCF__TRUE },
  {     0,  6547,  6893,   7,   3, PATSYN__YES },
  {     4,  1919,     0,  10,   0, BLK__YIJING },
  {     0,  1459,  4313,   5,   4, SC__COMMON },
  {     2,  2666,  4340,   4,   8, ISYIRADICALS },
  {     2,  3466,  1394,   5,  19, HIGHPRIVATEUSESURROGATES },
  {     1,  3899,  3106,   5,   4, SC__CARIAN },
  {     1,  2518,     0,   2,   0, PC },
  {     0,   494,  2465,  14,   7, INSUPPLEMENTALARROWSB },
  {     0,  4148,   489,   4,   3, ISALNUM },
  {     0,  4130,  1031,   4,   4, SC__GREEK },
  {     9,   766,  6270,   2,   6, CI__FALSE },
  {     0,  3320,    12,   5,   1, ISMERC },
  {     0,    49,    66,  10,  12, CJKCOMPATIDEOGRAPHSSUP },
  {     0,  1929,  4641,   3,   3, HEX__NO },
  {     0,  1459,   363,   5,   2, SC__COPT },
  {     2,  7395,  5702,   4,   8, ISUNASSIGNED },
  {     0,  3822,  2821,   4,   2, ISTAGB },
  {     3,  2854,  7272,   4,   5, CCC__CCC19 },
  {     9,  2074,  5648,   4,   4, SCX__HEBR },
  {     0,  3791,  6289,   4,   7, ISINHERITED },
  {     2,    26,  6069,   2,   9, INNEWTAILUE },
  {     4,  4156,  3106,   4,   4, ISCARIAN },
  {     6,  5437,  3266,   6,   8, HST__LVSYLLABLE },
  {     8,  3263,  6504,   5,   4, SC__SYRIAC },
  {     0,  4024,  5069,   7,   9, BLK__OLDHUNGARIAN },
  {     1,  6562,    20,   6,   2, SCX__ARAB },
  {     1,  2599,  4066,   5,   2, UPPER__F },
  {     1,  7760,     0,   2,   0, ZS },
  {     0,  3462,  1403,   8,  10, BLK__HIGHSURROGATES },
  {     1,  1778,  6304,   4,   6, INARMENIAN },
  {     6,  2854,     0,  17,   0, CCC__ATTACHEDABOVE },
  {     3,  6128,    40,   5,   5, GCB__EXTEND },
  {     2,  2973,  4641,   4,   2, TERM__N },
  {     2,  5932,  1611,   5,   6, JOINCONTROL },
  {     0,  6822,  1598,   5,   2, DT__VERT },
  {     1,  2027,  7214,   3,   4, ISBUHID },
  {     2,  4628,  5344,   5,  10, SCX__PAHAWHHMONG },
  {     0,  2770,     0,   4,   0, ETHI },
  {     5,  1160,     7,   4,   1, INVAI },
  {     2,  2914,   776,  10,   5, ISGLAGOLITICSUP },
  {     5,  1288,     0,  19,   0, ISANCIENTGREEKMUSIC },
  {     0,  1311,  7762,   3,   2, LB__JL },
  {     1,  6417,     0,   6,   0, DT__CAN },
  {     6,  1699,    30,  15,   1, BLK__DIACRITICALS },
  {     0,  5233,  5116,  10,   6, ISNONSPACINGMARK },
  {     2,  1019,     0,  21,   0, BLK__ANCIENTGREEKMUSIC },
  {     0,  3869,  4923,  13,   4, JG__MANICHAEANRESH },
  {     1,  5421,    54,   5,   1, GCB__SM },
  {     0,  7100,  6892,   4,   4, CWCM__YES },
  {     0,  1198,    30,  19,   1, ISVARIATIONSELECTORS },
  {     0,  7096,     0,   4,   0, CWCF },
  {     1,  1610,  3958,   7,   8, CONTROLPICTURES },
  {     0,  3761,   399,   9,  11, ISGENERALPUNCTUATION },
  {     1,   286,  2356,   4,   9, INCOUNTINGROD },
  {     0,  1179,  5088,   3,  11, ISPLAYINGCARDS },
  {     1,  2074,  7523,   4,   4, SCX__HANI },
  {     0,  1311,  1403,   3,   9, LB__SURROGATE },
  {     2,  2312,  7494,   5,   3, SCX__AGHB },
  {     2,    65,  4641,   4,   2, IDEO__N },
  {     0,  4195,   737,   8,   6, ISLETTERNUMBER },
  {     0,  2903,   399,  11,  11, ISCONNECTORPUNCTUATION },
  {     0,  1360,   776,   8,   5, BLK__ARABICSUP },
  {     1,  6276,  6692,   4,   6, SC__KAYAHLI },
  {     1,   124,     0,  25,   0, COMBININGDIACRITICALMARKS },
  {     0,    47,  7630,   2,   4, ISZZZZ },
  {     4,  4174,  2396,  10,   9, ISCYRILLICEXTENDEDB },
  {     0,  6628,  2209,   5,   7, WB__MIDLETTER },
  {     1,  1699,  6329,   5,   7, BLK__DUPLOYAN },
  {     0,  4130,  2122,   4,   3, SC__GLAG },
  {     0,  1522,  2194,   5,   5, BLK__BRAHMI },
  {    34,  4529,  7218,   4,   3, ISLIMBU },
  {     4,   128,  3988,   3,  14, INIMPERIALARAMAIC },
  {     4,  3425,  2395,  11,   9, BLK__BOPOMOFOEXTENDED },
  {     2,  2924,  5867,   3,   4, JG__NOON },
  {     1,  5932,  4066,   5,   2, JOINC__F },
  {     0,    30,    22,   3,   1, SYLO },
  {     0,  1179,   400,   3,   4, ISPUNCT },
  {     3,  5667,  2450,   5,   8, SCX__SUNDANESE },
  {     2,  2095,  7472,   3,   3, ISOGAM },
  {     5,  2312,  6649,   5,   6, SCX__AVESTAN },
  {     2,  1035,     0,   5,   0, MUSIC },
  {     2,  3629,   495,   9,  11, INGEORGIANSUPPLEMENT },
  {     0,  1538,    30,  18,   1, BLK__GEOMETRICSHAPES },
  {     1,  2854,  7322,   4,   5, CCC__CCC29 },
  {     4,   972,   767,  10,  14, ISENCLOSEDIDEOGRAPHICSUP },
  {     1,  1789,  1341,   7,  19, ISARABICPRESENTATIONFORMSA },
  {     0,   747,   767,   8,  14, ENCLOSEDIDEOGRAPHICSUP },
  {     2,    47,     0,  28,   0, ISCJKCOMPATIBILITYIDEOGRAPHS },
  {    10,  6624,  6765,   4,   2, WB__EBG },
  {     1,    85,  6034,   6,   3, ARABICPFB },
  {     2,  2386,     0,  10,   0, HANGULJAMO },
  {     0,    61,   115,   2,   2, LIMB },
  {     0,  1459,  7159,   4,   5, SC__CHAKMA },
  {     1,  2579,  1047,   9,   6, LOWERCASELETTER },
  {     3,  6149,  5834,   6,   8, ISBIDIMIRRORED },
  {     0,  6624,    54,   4,   1, WB__EM },
  {     0,   522,  1413,   5,  21, ISSUPSYMBOLSANDPICTOGRAPHS },
  {     0,  6440,  4641,   6,   2, GRBASE__N },
  {     9,  5005,  7573,   4,   3, SC__PLRD },
  {     1,  4483,  5372,   4,   9, INSYLOTINAGRI },
  {     2,  6822,  4688,   5,   6, DT__VERTICAL },
  {     9,  3365,  1815,   4,   2, ISTELU },
  {    36,   935,    75,  18,   3, INENCLOSEDALPHANUMSUP },
  {     0,    47,     0,  11,   0, ISCJKCOMPAT },
  {     0,  1532,  6046,   4,   7, INEMOTICONS },
  {     0,  1721,  5758,   2,   4, LYCIAN },
  {     0,  5202,  6681,   5,   4, ISGRANTHA },
  {     0,  7426,  4893,   4,   2, SC__LAO },
  {     0,  3054,     1,  11,   1, CYRILLICEXTB },
  {     4,  2639,  1131,  13,  10, ISMEETEIMAYEKEXTENSIONS },
  {     0,  4130,  6336,   4,   7, SC__GUJARATI },
  {     3,  2074,  6037,   5,   8, SCX__BHAIKSUKI },
  {     0,  5672,  6504,   6,   4, SCX__SYRIAC },
  {     0,  6581,  2757,   5,   9, SCX__DEVANAGARI },
  {     0,  1311,  1180,   3,   2, LB__SP },
  {     1,  4140,  1287,   4,   2, SC__VAI },
  {     0,   522,  2472,  14,   7, ISSUPPLEMENTALARROWSC },
  {     2,   159,     0,   2,   0, CE },
  {     0,  2924,  7717,   3,   4, JG__QAPH },
  {     3,  7395,  6980,   4,   5, ISUNKNOWN },
  {     4,    47,  1014,  18,   5, ISCJKCOMPATIBILITYFORMS },
  {     1,  1198,     0,  19,   0, ISVARIATIONSELECTOR },
  {     0,  5385,  5322,   2,   4, DOMINO },
  {     6,  6815,  3396,   7,   4, DT__ISOLATED },
  {     1,  2654,  1658,  12,   9, NONCHARACTERCODEPOINT },
  {    11,    26,  5778,   2,  10, INWARANGCITI },
  {     0,  1660,  1922,   3,   2, DEP__Y },
  {     5,  4155,   789,   5,   5, MISCARROWS },
  {     3,  5069,     0,   4,   0, HUNG },
  {     2,  2318,    23,   4,   2, BC__LRI },
  {     0,  3532,  5027,  11,   4, BLK__MYANMAREXTA },
  {     1,  2160,    74,  13,   4, INDIACRITICALSSUP },
  {     0,   876,  7029,   2,   4, REJANG },
  {     2,  2924,  6502,   3,   9, JG__SYRIACWAW },
  {     1,  3186,  6685,   5,   4, INHANUNOO },
  {     3,  6411,  4641,   6,   2, COMPEX__N },
  {     1,  6644,  4641,   5,   3, BIDIM__NO },
  {     2,  7100,  6270,   4,   6, CWCM__FALSE },
  {     4,   117,  2023,   2,   2, OLCK },
  {     0,  5202,    39,  10,   6, ISGRAPHEMEEXTEND },
  {     0,  1117,    23,   3,   2, TAKRI },
  {     5,  7244,  4387,   3,   5, BPT__OPEN },
  {     0,  2924,    10,   3,   1, JG__E },
  {     1,  5242,  2142,   9,   7, ISPSALTERPAHLAVI },
  {     5,  5667,  3485,   5,   3, SCX__SARB },
  {     3,  3822,  3563,   4,   4, ISTANGUT },
  {     5,  7377,  6553,   3,   5, CWL__TRUE },
  {     0,  2382,    13,  22,   1, BLK__HANGULJAMOEXTENDEDA },
  {     1,  6639,  1762,   5,   2, BIDIC__T },
  {     0,  5855,  5504,   5,   6, POSIXXDIGIT },
  {     2,  3800,  6105,   4,   7, ISPAUCINHAU },
  {     2,   256,  6748,   5,   6, BLK__SIDDHAM },
  {     2,  1721,    17,   3,   3, LYDIAN },
  {     1,    75,  6760,   4,   3, SUPPUAA },
  {     9,  2951,  7551,   4,   3, SC__MROO },
  {     2,  2074,  6943,   4,   7, SCX__HANUNOO },
  {     4,    49,  6665,   3,   4, CJKEXTF },
  {     3,  3308,     0,  12,   0, ISHANGULJAMO },
  {     1,  7109,  6330,   4,   6, INDUPLOYAN },
  {     7,  1498,   144,  24,   4, ISPREPENDEDCONCATENATIONMARK },
  {     0,  5667,  5354,   5,  10, SCX__SORASOMPENG },
  {     0,  4369,  4066,   4,   2, DASH__F },
  {     0,  7200,  2172,   6,   4, WB__NEWLINE },
  {    11,  7206,  6892,   4,   4, XIDS__YES },
  {     1,  2924,    94,   3,   2, JG__HE },
  {     1,   256,  5762,   5,   9, BLK__SAURASHTRA },
  {     1,  3263,  5762,   4,   9, SC__SAURASHTRA },
  {     0,  7186,  7438,   5,   4, SCX__RUNIC },
  {     0,  5035,    23,   4,   1, KHMER },
  {     4,  3013,   994,   6,  25, BLK__ALPHABETICPRESENTATIONFORMS },
  {     2,  1457,  4067,  14,   5, INSC__CONSONANTFINAL },
  {     4,  2924,  7725,   3,   4, JG__SHIN },
  {     5,   156,    68,  27,   7, MISCELLANEOUSSYMBOLSANDPICTOGRAPHS },
  {     0,  3013,   191,  10,  11, BLK__ALCHEMICALSYMBOLS },
  {     0,  3263,  6736,   4,   6, SC__SHARADA },
  {     7,  5672,  1906,   6,   2, SCX__SYRC },
  {     1,  4547,   737,   7,   6, ISOTHERNUMBER },
  {     1,  2666,  2148,   4,   2, ISYIII },
  {     0,  2716,   202,   6,   2, BLK__CHAM },
  {     2,  2172,     1,   3,   1, LINB },
  {     1,  5996,   491,   6,   3, SCX__KHMER },
  {     2,  3728,     0,   8,   0, ISCOPTIC },
  {     0,  7756,     0,   2,   0, ZL },
  {     5,  4425,  1403,   8,  10, INHIGHPUSURROGATES },
  {     4,  4174,  5813,  10,   4, ISCYRILLICEXTC },
  {     1,   143,     0,   2,   0, LM },
  {     4,  4547,  1047,   7,   6, ISOTHERLETTER },
  {     3,  4329,  7003,   6,   4, BLK__KAITHI },
  {     0,  2074,  2194,   5,   3, SCX__BRAH },
  {     0,  6128,  5842,   5,   4, GCB__EBASE },
  {     6,  5667,  6742,   5,   6, SCX__SHAVIAN },
  {     1,   522,   400,   6,  10, ISSUPPUNCTUATION },
  {     2,  7104,  1057,   4,   2, INJAMO },
  {    10,  4283,  6090,   7,   6, SCX__OLDTURKIC },
  {     3,  4369,  6270,   4,   6, DASH__FALSE },
  {     1,  7383,  6553,   3,   5, CWU__TRUE },
  {     2,   156,  3520,   4,  12, MISCMATHSYMBOLSB },
  {     3,    49,  1014,   9,   5, CJKCOMPATFORMS },
  {     0,  5182,  5027,   6,   4, INKANAEXTA },
  {     1,  6128,  6765,   5,   2, GCB__EBG },
  {     0,  3639,  1632,   3,   3, ISUCAS },
  {     3,  6956,     0,   7,   0, LINEARA },
  {     0,  7380,  4066,   3,   2, CWT__F },
  {     0,  5188,    12,   6,   1, INMUSIC },
  {     1,  3050,     0,  12,   0, BLK__CYRILLIC },
  {     5,  5996,  6692,   5,   6, SCX__KAYAHLI },
  {     5,  1967,    11,  10,   1, INLATINEXTD },
  {     0,    47,     0,   5,   0, ISCJK },
  {     5,  4619,  3448,   4,   3, SC__ORYA },
  {     1,  1763,     0,  15,   0, TRANSPORTANDMAP },
  {     1,  4088,    30,  10,   9, INCANADIANSYLLABICS },
  {     0,    85,  6304,   2,   6, ARMENIAN },
  {     0,  6424,     8,   3,   1, EA__F },
  {     2,  1062,    70,   2,   2, SORA },
  {     1,  2516,  5462,   5,  10, INPC__OVERSTRUCK },
  {     4,  4450,  5340,   9,   4, INMYANMAREXTB },
  {     0,  4573,   115,   4,   4, ISSYMBOL },
  {     0,  6417,  1735,   7,   5, DT__CANONICAL },
  {     0,  6612,  4641,   2,   2, VS__N },
  {     0,  4962,  7654,   3,   4, AGE__V32 },
  {     1,  5771,  3098,   7,  14, BLK__SMALLFORMVARIANTS },
  {     3,  1141,  6731,   4,   5, INPHAGSPA },
  {     2,  5483,  7038,   4,   5, SC__THAANA },
  {    23,   842,  6096,   5,   8, BLK__PALMYRENE },
  {     1,  1459,  7606,   3,   4, SC__XPEO },
  {     0,  4499,   399,   7,  11, ISCLOSEPUNCTUATION },
  {     3,  6069,     0,   9,   0, NEWTAILUE },
  {     1,  2924,  5889,   3,  11, JG__ROHINGYAYEH },
  {     6,  7412,  1762,   3,   2, LOE__T },
  {     2,  4619,  7230,   4,   4, SC__ORIYA },
  {    10,  2471,  6310,   2,   6, BALINESE },
  {     7,   439,  3520,   6,  12, ISMISCMATHSYMBOLSB },
  {     2,    12,  1034,   2,   2, CAKM },
  {     4,  4862,  1047,  11,   6, ISTITLECASELETTER },
  {     1,   159,  6270,   2,   6, CE__FALSE },
  {     2,  2556,  2579,  13,  10, ISCHANGESWHENLOWERCASED },
  {     0,  2503,     0,  13,   0, INMEETEIMAYEK },
  {     3,  6376,    13,   3,   1, JAVA },
  {     0,   103,  4641,   5,   2, ALPHA__N },
  {     0,  2639,  5059,   4,  10, ISMENDEKIKAKUI },
  {     0,  2121,     0,   4,   0, GLAG },
  {     2,  1475,  1547,   4,   2, ISHATR },
  {     1,  6281,   104,   5,   2, SC__PHLP },
  {     2,  2516,    14,   5,   2, INPC__NA },
  {     0,  4529,     1,   5,   1, ISLINB },
  {     0,  1288,    31,   4,   1, ISANY },
  {     1,  6916,  2821,   5,   2, SC__TAGB },
  {     9,  5222,  7003,   4,   4, ISKAITHI },
  {     4,     5,     0,  34,   0, UNIFIEDCANADIANABORIGINALSYLLABICS },
  {     2,   133,    74,  11,   4, DIACRITICALSSUP },
  {    14,  4814,  7500,   4,   2, ISBATK },
  {     5,  2997,   250,  16,   5, BC__PARAGRAPHSEPARATOR },
  {     1,  4674,  3988,   5,  14, BLK__IMPERIALARAMAIC },
  {     1,  4130,  6998,   4,   5, SC__GOTHIC },
  {     0,  1795,  1605,   3,   5, ISFORMAT },
  {     0,  6281,    61,   5,   2, SC__PHLI },
  {     0,  2094,     5,   3,   1, LISU },
  {     2,  2589,     0,   9,   0, TITLECASE },
  {     2,  4678,    39,   3,   3, IPAEXT },
  {     0,  6167,  1762,   4,   2, XIDC__T },
  {     0,  7129,  6256,   5,   5, ISXIDSTART },
  {     0,  1577,     1,  17,   1, BLK__LATINEXTENDEDB },
  {    10,  3934,    75,   5,   3, BAMUMSUP },
  {     3,  6809,    26,   4,   2, DT__FIN },
  {     5,  6287,  5650,   4,   4, INHEBREW },
  {     0,  2057,    11,  15,   1, ISLATINEXTENDEDD },
  {     4,  4780,  7226,   3,   4, INOGHAM },
  {    19,  6440,  4641,   6,   3, GRBASE__NO },
  {     1,  1850,   865,  13,  15, SUPPLEMENTARYPRIVATEUSEAREAA },
  {     1,   120,  2728,  13,   9, BLK__COMBININGHALFMARKS },
  {     0,  5932,  1762,   5,   2, JOINC__T },
  {     0,  5852,  6187,   8,   5, ISXPOSIXCNTRL },
  {     0,  1888,  1131,  11,  10, MEETEIMAYEKEXTENSIONS },
  {     1,  5855,  6266,   5,   4, POSIXWORD },
  {     5,  1759,  6779,   5,   6, BLK__TIBETAN },
  {     6,  2652,   738,   3,   5, ISNUMBER },
  {     3,  3181,  2104,   6,  13, EGYPTIANHIEROGLYPHS },
  {     0,  2057,     0,   7,   0, ISLATIN },
  {    12,   120,  3953,   6,  13, BLK__CONTROLPICTURES },
  {     0,   842,    75,  15,   3, BLK__PHONETICEXTSUP },
  {     8,  4373,  7754,   4,   1, GC__L__ },
  {     1,  6601,  6343,   5,   7, SCX__GURMUKHI },
  {     0,  5854,  2579,   6,   5, XPOSIXLOWER },
  {    12,  6558,   246,   3,   2, SB__LO },
  {    13,  3146,    30,   4,   1, GC__PS },
  {     5,  2516,  3638,   5,  15, INPC__VISUALORDERLEFT },
  {     1,  3290,    75,  11,   3, INSUNDANESESUP },
  {     2,   522,    12,   3,   1, ISSC },
  {     0,  6613,  6779,   5,   6, SCX__TIBETAN },
  {     1,  1179,   404,   3,   2, ISPUA },
  {     0,  4674,  1864,   5,  20, BLK__INSCRIPTIONALPARTHIAN },
  {     1,  2074,  6322,   5,   7, SCX__BUGINESE },
  {    22,  2449,     0,   4,   0, SUND },
  {     3,  4072,     0,   8,   0, GC__OTHER },
  {     0,    47,  6665,   5,   4, ISCJKEXTF },
  {     0,  6804,  4641,   5,   3, CWKCF__NO },
  {     5,  3822,  6391,   4,   6, ISTAGBANWA },
  {     9,  4412,  1650,   5,   8, CASEIGNORABLE },
  {     0,   410,   203,  15,  20, INMISCELLANEOUSMATHEMATICALSYMBOLSB },
  {     2,   133,  1379,  11,  11, DIACRITICALSFORSYMBOLS },
  {     4,  3249,  6289,   5,   7, SC__INHERITED },
  {     6,  3791,   399,   9,  11, ISINITIALPUNCTUATION },
  {     1,  1368,  5340,   7,   4, BLK__CJKEXTB },
  {     5,  5298,  5049,   6,  10, SCX__MASARAMGONDI },
  {     0,  2558,  2589,  11,  10, CHANGESWHENTITLECASED },
  {     2,  6161,  5504,   7,   6, ISPOSIXXDIGIT },
  {     2,  7415,     0,   8,   0, NFDQC__NO },
  {     2,  1459,  6925,   4,   6, SC__CYPRIOT },
  {     0,  7096,  1922,   4,   2, CWCF__Y },
  {     1,  2599,  6270,   5,   6, UPPER__FALSE },
  {     0,  6287,     0,   9,   0, INHERITED },
  {     0,  4166,  3436,   4,   5, ISCYPRIOT },
  {     2,  7124,  6366,   4,   6, ISJAMOEXTB },
  {     8,  4329,    75,   8,  10, BLK__KANASUPPLEMENT },
  {     0,  1119,    75,   4,   3, KANASUP },
  {     5,  3822,  7238,   4,   3, ISTAKRI },
  {     0,  3899,    14,   5,  16, SC__CANADIANABORIGINAL },
  {    10,  2445,    75,  13,  10, BLK__SUNDANESESUPPLEMENT },
  {     1,  4130,  5987,   4,   9, SC__GLAGOLITIC },
  {     6,  6624,  6433,   4,   7, WB__EBASEGAZ },
  {     1,  3179,  2104,   8,  13, INEGYPTIANHIEROGLYPHS },
  {    12,    81,    11,   3,   1, MEND },
  {    11,  2027,    12,  15,   1, ISBYZANTINEMUSIC },
  {     0,  7426,  7434,   4,   3, SC__LIMB },
  {     1,  7148,  7418,   4,   5, NFKDQC__NO },
  {     1,  5125,   737,   7,   6, DECIMALNUMBER },
  {     0,  2854,  7085,   4,   6, CCC__CCC133 },
  {     2,  1288,  7210,   3,   4, ISADLAM },
  {     0,  6639,  4066,   5,   2, BIDIC__F },
  {     4,  1101,    13,   3,   1, THAA },
  {     0,  3705,    79,   5,   2, INTAILE },
  {     6,  6568,    74,   6,   2, SCX__BASS },
  {     1,  6613,  6397,   5,   7, SCX__TIFINAGH },
  {     9,  4441,  7218,   4,   3, INLIMBU },
  {     1,  6558,   749,   3,   5, SB__CLOSE },
  {     3,  6002,  6731,   6,   5, SCX__PHAGSPA },
  {     2,  4106,  3062,  10,   9, INCYRILLICEXTENDEDC },
  {    11,  3462,  1403,  10,  10, BLK__HIGHPUSURROGATES },
  {     7,  2074,  7502,   5,   3, SCX__BHKS },
  {     3,   256,  6736,   5,   6, BLK__SHARADA },
  {     0,  4416,  5718,   4,   8, INBOXDRAWING },
  {     1,  1311,    54,   4,   1, LB__CM },
  {     0,  6601,  1764,   5,   3, SCX__GRAN },
  {     1,  3869,  3845,  13,   7, JG__MANICHAEANDHAMEDH },
  {     1,  3904,  5157,   3,   3, WB__ZWJ },
  {     4,   794,   112,  25,   8, INMATHEMATICALALPHANUMERICSYMBOLS },
  {     4,  2095,   819,   3,   3, ISOSMA },
  {     2,  3308,  2396,  12,   9, ISHANGULJAMOEXTENDEDB },
  {     3,  4450,  2396,   9,   9, INMYANMAREXTENDEDB },
  {     5,  1884,  1131,  15,  10, BLK__MEETEIMAYEKEXTENSIONS },
  {     0,   494,  3112,   4,  15, INSUTTONSIGNWRITING },
  {     0,  4130,  1764,   4,   3, SC__GRAN },
  {     0,  4373,  7755,   4,   1, GC__L_ },
  {     5,  3054,    75,   8,  10, CYRILLICSUPPLEMENT },
  {     0,   162,    13,   3,   1, LANA },
  {    20,  6644,  1922,   5,   2, BIDIM__Y },
  {    13,  3186,  1586,  12,   9, INHANGULJAMOEXTENDEDA },
  {     9,   256,   863,  15,  17, BLK__SUPPLEMENTARYPRIVATEUSEAREAA },
  {     8,  1790,     1,   3,   1, SARB },
  {     3,  3728,  1912,  13,   7, ISCOPTICEPACTNUMBERS },
  {     0,  7175,     0,   4,   0, LEPC },
  {     7,  4573,    12,   7,   1, ISSYRIAC },
  {     0,   818,  6703,   4,   5, ISMARCHEN },
  {     3,  3263,  1906,   5,   2, SC__SYRC },
  {     0,  7426,  3482,   4,   6, SC__LINEARB },
  {     5,  1141,   400,   3,  10, INPUNCTUATION },
  {     0,  4034,  4688,   6,  11, BLK__VERTICALFORMS },
  {     1,  1789,    90,   7,  30, ISARABICMATHEMATICALALPHABETICSYMBOLS },
  {     3,  5251,  3416,   7,   9, ISSPACESEPARATOR },
  {     1,  3162,  7743,   4,   2, GCB__XX },
  {     0,  4311,     0,   6,   0, COMMON },
  {     1,  2057,     0,  11,   0, ISLATINEXTE },
  {    10,   201,    23,   3,   1, SAMR },
  {     0,   256,  1899,   5,   6, BLK__SINHALA },
  {     2,  1919,  4340,   6,   8, BLK__YIRADICALS },
  {     0,  7395,     8,   5,  39, ISUNIFIEDCANADIANABORIGINALSYLLABICSEXTENDED },
  {     7,   399,     0,   5,   0, PUNCT },
  {     1,  1179,  1932,   4,   2, ISPHAG },
  {     1,  4138,  6832,   6,   5, INSC__VIRAMA },
  {     1,  6612,  4641,   2,   3, VS__NO },
  {     0,  6921,  6979,   4,   6, SC__UNKNOWN },
  {     0,  2558,     0,  21,   0, CHANGESWHENCASEMAPPED },
  {     0,  7423,  1922,   3,   2, PCM__Y },
  {     1,  6547,     0,   8,   0, PATSYN__T },
  {     5,  2871,    36,  10,   2, INGLAGOLITIC },
  {    10,  1090,  1014,  25,   5, BLK__HALFWIDTHANDFULLWIDTHFORMS },
  {     1,  4945,     0,  13,   0, JG__TEHMARBUTA },
  {     0,  6581,  2757,   5,   3, SCX__DEVA },
  {     3,  2808,     0,  18,   0, ORNAMENTALDINGBATS },
  {     0,  2078,  7736,   3,   3, BC__FSI },
  {     0,  6849,  2936,   7,   4, JG__FARSIYEH },
  {    12,  7459,     0,   8,   0, DT__SUPER },
  {     1,    57,    41,   3,   1, TIBT },
  {     1,  1368,   552,   7,  27, BLK__CJKUNIFIEDIDEOGRAPHSEXTENSIONA },
  {     0,  5854,  6182,   6,   5, XPOSIXBLANK },
  {     8,  6161,  2579,   7,   5, ISPOSIXLOWER },
  {     1,  6613,  5045,   6,   3, SCX__TAILE },
  {     1,  6568,    61,   6,   2, SCX__BALI },
  {     0,  7426,  1937,   4,   3, SC__LINB },
  {     3,  4962,  7442,   3,   5, AGE__V100 },
  {     0,  5825,  2822,   4,   3, SC__NBAT },
  {     0,  5825,  7222,   4,   4, SC__NUSHU },
  {     2,  1744,  1047,  15,   7, SPACINGMODIFIERLETTERS },
  {     0,  3497,    13,  10,   1, BLK__LINEARA },
  {     0,  1459,  7164,   3,   6, SC__HATRAN },
  {     1,  3904,   251,  16,   4, WB__REGIONALINDICATOR },
  {     0,   440,     0,   2,   0, SM },
  {     2,  5182,  1117,   4,  24, INKATAKANAPHONETICEXTENSIONS },
  {     0,    16,  4066,   2,   2, DI__F },
  {     1,  1360,  5025,   8,   6, BLK__ARABICEXTA },
  {    11,  4656,  1912,   6,   7, AEGEANNUMBERS },
  {     3,  5667,  6754,   5,   3, SCX__SOYO },
  {     0,    65,  1922,   4,   2, IDEO__Y },
  {     5,  5667,  6736,   5,   6, SCX__SHARADA },
  {     1,   152,  1731,  17,   9, BLK__MISCELLANEOUSTECHNICAL },
  {     0,  2057,  1317,  17,   8, ISLATINEXTENDEDADDITIONAL },
  {     0,  4329,  6693,   6,   5, BLK__KAYAHLI },
  {     8,  3705,  6775,   5,   4, INTAIVIET },
  {     1,   468,  5049,   6,  10, BLK__MASARAMGONDI },
  {     1,  5625,   731,   2,   2, MTEI },
  {     1,  1160,    30,  19,   1, INVARIATIONSELECTORS },
  {     0,  5333,    13,   7,   1, KANAEXTA },
  {     2,  6916,  1835,   5,   2, SC__TAKR },
  {     0,   152,   203,  17,  20, BLK__MISCELLANEOUSMATHEMATICALSYMBOLSB },
  {     3,    39,     0,   3,   0, EXT },
  {     0,  4763,  5710,   4,   8, INBASICLATIN },
  {     3,  3781,  6892,   3,   4, IDS__YES },
  {     0,  1581,     6,   3,   1, LATN },
  {     1,     1,     0,  46,   0, BLK__UNIFIEDCANADIANABORIGINALSYLLABICSEXTENDED },
  {     0,  3800,   143,   4,   2, ISPALM },
  {     6,  3497,  7218,   6,   3, BLK__LIMBU },
  {    13,  2854,  7297,   4,   5, CCC__CCC24 },
  {     1,  1929,  1762,   3,   2, HEX__T },
  {     2,  4034,  1129,   7,  12, BLK__VEDICEXTENSIONS },
  {     2,  2696,    12,   7,   1, SCX__MERC },
  {     0,  1179,    61,   4,   2, ISPHLI },
  {     0,  1784,   113,   5,   7, INCJKSYMBOLS },
  {   256,  1498,   867,   4,   8, ISPRIVATEUSE },
  {     1,  2057,     0,   3,   0, ISL },
  {    16,   130,  6343,   3,   7, INGURMUKHI },
  {     0,  2057,    12,  15,   1, ISLATINEXTENDEDC },
  {     5,  1784,   668,   5,  27, INCJKUNIFIEDIDEOGRAPHSEXTENSIONE },
  {     1,   472,   112,  23,   8, MATHEMATICALALPHANUMERICSYMBOLS },
  {     2,  6639,  1611,   5,   6, BIDICONTROL },
  {     0,  6644,  6270,   5,   6, BIDIM__FALSE },
  {     7,  4856,  1065,   4,  25, ISOPTICALCHARACTERRECOGNITION },
  {     1,  1115,     0,  26,   0, KATAKANAPHONETICEXTENSIONS },
  {     0,  5202,     6,   5,   1, ISGRAN },
  {     9,  6901,  6310,   5,   6, SC__BALINESE },
  {     4,  4962,  7682,   3,   4, AGE__V61 },
  {     1,  1771,  3564,   3,   3, TANGUT },
  {     0,  4848,  5748,   5,   7, ISOLDPERSIAN },
  {     1,  3532,  1586,  11,   9, BLK__MYANMAREXTENDEDA },
  {     1,  7104,  6366,   4,   6, INJAMOEXTB },
  {    14,  3781,  6553,   3,   5, IDS__TRUE },
  {     0,  1459,  5778,   3,   4, SC__WARA },
  {     2,  7412,     0,   3,   0, LOE },
  {     1,  5516,   737,   9,   6, ISDECIMALNUMBER },
  {     0,     2,     0,   1,   0, L },
  {     2,  6276,    85,   5,   2, SC__KHAR },
  {     2,  4612,   399,   7,  11, LB__OPENPUNCTUATION },
  {    15,  2074,  6348,   4,   8, SCX__HIRAGANA },
  {     5,  3620,   399,   9,  11, INGENERALPUNCTUATION },
  {     2,  1030,     0,   5,   0, GREEK },
  {     1,  5637,     3,   4,   1, LB__BK },
  {     2,  6921,  6404,   4,   7, SC__UGARITIC },
  {     2,  2190,  7214,   4,   4, SC__BUHID },
  {     1,  2295,  7038,   3,   5, ISTHAANA },
  {     5,  2117,   777,  13,  11, BLK__GLAGOLITICSUPPLEMENT },
  {     4,  4490,     0,   6,   0, ISBOPO },
  {     2,  1094,  3450,   4,  12, HALFANDFULLFORMS },
  {     5,  3741,     0,   6,   0, ISDEVA },
  {     0,   972,  7117,   3,   7, ISEXTENDER },
  {     0,  2041,  3241,   3,   3, ISGONM },
  {     2,  7200,     5,   4,   1, WB__NU },
  {     1,  3279,  6669,   4,   5, INDESERET },
  {     7,   232,     5,   3,   1, TALU },
  {     7,  3050,    12,  15,   1, BLK__CYRILLICEXTC },
  {     4,  4742,     3,   4,   1, GC__SK },
  {     3,  2752,  6669,   6,   5, BLK__DESERET },
  {     2,  4136,  1867,   6,  17, ININSCRIPTIONALPARTHIAN },
  {     1,   156,   183,  13,  20, MISCELLANEOUSMATHEMATICALSYMBOLSA },
  {     0,  5852,  6266,   8,   4, ISXPOSIXWORD },
  {     3,  3883,   251,  16,   4, LB__REGIONALINDICATOR },
  {     9,  6458,  3098,   5,  14, INSMALLFORMVARIANTS },
  {     0,  1360,    36,   8,   2, BLK__ARABIC },
  {     8,  3779,     0,   5,   0, ISIDS },
  {     0,  4814,     0,   7,   0, ISBAMUM },
  {    10,  3904,  1096,   3,   2, WB__LF },
  {     1,  2696,    43,   6,   2, SCX__MEND },
  {    32,  5304,     2,   4,   1, BC__AL },
  {     1,  4253,  4932,   2,   2, KHOJ },
  {     6,  4699,  1229,   8,   9, CCC__IOTASUBSCRIPT },
  {     0,  1476,  2631,   2,   2, SHRD },
  {     2,  6167,  6892,   4,   4, XIDC__YES },
  {     0,   972,  3043,   3,   3, ISELBA },
  {     2,  6424,   166,   9,   3, EA__AMBIGUOUS },
  {     0,  1368,   552,   7,  17, BLK__CJKUNIFIEDIDEOGRAPHS },
  {     0,  5846,    23,   5,   1, ISKHMR },
  {     8,  7096,  6270,   4,   6, CWCF__FALSE },
  {     1,  3869,  4907,  13,   4, JG__MANICHAEANFIVE },
  {     1,  1699,    38,  15,   4, BLK__DIACRITICALSEXT },
  {     0,     1,  7562,   4,   3, BLK__NKO },
  {     0,  1459,   487,   3,   3, SC__HAN },
  {     2,  2193,     0,   4,   0, BRAH },
  {     2,  4962,  7698,   3,   4, AGE__V80 },
  {     1,  7186,  7028,   5,   5, SCX__REJANG },
  {     7,  5662,  1906,   5,   2, SC__MARC },
  {     6,    47,  7384,   3,   2, ISCWU },
  {     5,  6613,  6974,   6,   5, SCX__TAIVIET },
  {    15,  3869,  5258,   5,  11, JG__MALAYALAMLLLA },
  {     6,  1577,     0,  13,   0, BLK__LATINEXTE },
  {     8,  2854,     0,   5,   0, CCC__A },
  {     0,  3869,  4919,  13,   4, JG__MANICHAEANQOPH },
  {     6,  1667,    65,  13,  10, BLK__CJKCOMPATIDEOGRAPHS },
  {     0,  1311,  4958,   4,  13, LB__CARRIAGERETURN },
  {     0,  6498,  6266,   4,   4, PERLWORD },
  {     0,  6985,  1922,   5,   2, UIDEO__Y },
  {     0,  3822,    79,   4,   2, ISTALE },
  {     0,    47,    12,   3,   1, ISCC },
  {     8,  2074,  2129,   4,  20, SCX__INSCRIPTIONALPAHLAVI },
  {     0,  6581,  7514,   5,   3, SCX__DSRT },
  {     1,  3263,  3118,   4,   3, SC__SGNW },
  {     0,  6644,  1762,   5,   2, BIDIM__T },
  {     0,  3186,     0,  12,   0, INHANGULJAMO },
  {     0,  3600,    39,  12,   3, INDEVANAGARIEXT },
  {     0,  4983,  4607,  12,   5, LB__MANDATORYBREAK },
  {     0,  2078,   792,   3,   2, BC__WS },
  {     1,  3263,  6754,   4,   3, SC__SOYO },
  {     2,  3904,  1115,   3,   2, WB__KA },
  {     1,  2652,  7451,   3,   3, ISNEWA },
  {     0,  1784,  5340,   5,   4, INCJKEXTB },
  {     3,  2337,     0,   4,   0, BC__R },
  {     2,  3208,  1047,  14,   7, INMODIFIERTONELETTERS },
  {     9,  7459,     0,   6,   0, DT__SUP },
  {     0,  4962,  7662,   3,   4, AGE__V41 },
  {     0,  6644,  6892,   5,   4, BIDIM__YES },
  {     0,  2074,  7606,   4,   4, SCX__XPEO },
  {     0,  7527,     0,   4,   0, HANO },
  {     0,  3558,    12,   3,   1, SYRC },
  {     0,  6167,  6270,   4,   6, XIDC__FALSE },
  {     0,  1637,  6084,   3,   6, OLDPERMIC },
  {     0,  2057,     1,  10,   1, ISLATINEXTB },
  {    10,  5846,  1382,   6,   8, ISKHMERSYMBOLS },
  {     4,  5667,  5345,   5,   3, SCX__SHAW },
  {     0,  2720,    75,   8,   3, CHEROKEESUP },
  {     0,  2599,  4641,   5,   2, UPPER__N },
  {     0,  1538,  6998,   5,   5, BLK__GOTHIC },
  {     5,  2854,    13,   6,   1, CCC__ATA },
  {     0,     1,  4041,   4,  15, BLK__ZANABAZARSQUARE },
  {     1,  2854,  7055,   4,   5, CCC__CCC11 },
  {     0,  4329,  5027,   8,   4, BLK__KANAEXTA },
  {     1,  4106,    75,  10,  10, INCYRILLICSUPPLEMENT },
  {     0,  5412,     0,   9,   0, GC__LETTER },
  {     1,  1937,   192,  15,  10, INBYZANTINEMUSICALSYMBOLS },
  {    23,  4521,     0,   8,   0, ISLATIN1 },
  {     0,  1198,    74,  19,  11, ISVARIATIONSELECTORSSUPPLEMENT },
  {    26,  2386,     0,   6,   0, HANGUL },
  {     0,  2078,  1604,  17,   6, BC__POPDIRECTIONALFORMAT },
  {     0,  4628,  6096,   5,   8, SCX__PALMYRENE },
  {    16,  2516,  1992,  11,   6, INPC__TOPANDBOTTOM },
  {     1,  6882,  1762,   5,   2, PATWS__T },
  {    17,  1368,   639,   7,  27, BLK__CJKUNIFIEDIDEOGRAPHSEXTENSIOND },
  {     0,  2621,    10,   4,   1, ISLOE },
  {     1,  2190,  1555,   4,   3, SC__BENG },
  {     4,   367,  1762,   5,   2, NCHAR__T },
  {    21,   124,  1375,   9,  15, COMBININGMARKSFORSYMBOLS },
  {     3,  1721,   766,   2,   2, LYCI },
  {     0,  2854,  7367,   4,   5, CCC__CCC91 },
  {     3,  2479,    12,   4,   1, GC__CC },
  {     0,  1239,  1912,  14,   7, INANCIENTGREEKNUMBERS },
  {     0,  4780,  7234,   3,   4, INOSAGE },
  {     1,  3255,   232,   3,   3, ISITAL },
  {     3,  2074,  6060,   4,   9, SCX__NABATAEAN },
  {    12,  3476,     0,   6,   0, LATIN1 },
  {     1,    65,  4066,   4,   2, IDEO__F },
  {     3,  2193,  3941,   3,  12, BRAILLEPATTERNS },
  {     2,  6167,  4641,   4,   2, XIDC__N },
  {     3,  3366,  6892,   5,   4, STERM__YES },
  {     1,  7377,  4641,   3,   3, CWL__NO },
  {     4,  3822,     0,  13,   0, ISTAIXUANJING },
  {     0,  7423,  6553,   3,   5, PCM__TRUE },
  {     8,   842,  5344,   5,  10, BLK__PAHAWHHMONG },
  {     0,   935,    49,  10,   3, INENCLOSEDCJK },
  {     1,  2146,  6650,   2,   5, AVESTAN },
  {     2,  2074,  1863,   4,  21, SCX__INSCRIPTIONALPARTHIAN },
  {     1,    41,  1815,   2,   2, TELU },
  {     3,    26,  6060,   2,   9, INNABATAEAN },
  {     1,   522,  1596,   3,  22, ISSHORTHANDFORMATCONTROLS },
  {     0,  1581,     0,  14,   0, LATINEXTENDEDA },
  {    17,  7206,  6257,   4,   4, XIDSTART },
  {     1,  6558,    10,   4,   1, SB__SE },
  {     4,  6887,    41,   6,   1, QMARK__T },
  {     0,  5932,  4641,   5,   2, JOINC__N },
  {     5,  3263,  6754,   4,   6, SC__SOYOMBO },
  {     2,  2943,  3043,   4,   3, SC__ELBA },
  {     0,     1,  7450,   4,   4, BLK__NEWA },
  {     2,  5637,   113,   8,   7, LB__BREAKSYMBOLS },
  {     0,  2854,  7282,   4,   5, CCC__CCC21 },
  {     0,  6167,  1922,   4,   2, XIDC__Y },
  {     1,  1660,  6464,   3,   7, DEPRECATED },
  {     0,  1581,  2798,   8,  10, LATINEXTADDITIONAL },
  {     0,  1198,    74,   3,   4, ISVSSUP },
  {     2,  7602,     0,   4,   0, VAII },
  {     6,  5918,    10,   4,   1, TAILE },
  {     3,  5932,  1922,   5,   2, JOINC__Y },
  {     0,  5182,  5331,   4,   9, INKATAKANAEXT },
  {     1,  3835,     0,   4,   0, MANI },
  {    20,  5945,  4264,   8,   6, JT__TRANSPARENT },
  {     1,  5483,  6785,   4,   6, SC__TIRHUTA },
  {     1,  3366,  4066,   5,   2, STERM__F },
  {     7,  3466,  1403,   6,  10, HIGHPUSURROGATES },
  {     1,   494,   399,  14,  11, INSUPPLEMENTALPUNCTUATION },
  {     4,  6896,    20,   5,   2, SC__ARAB },
  {     0,  7380,     0,   3,   0, CWT },
  {     0,  6901,  6317,   6,   5, SC__BASSAVAH },
  {     1,  4848,  6084,   5,   6, ISOLDPERMIC },
  {     0,  5852,  6178,   9,   4, ISXPOSIXALNUM },
  {     3,  2652,  2822,   3,   3, ISNBAT },
  {     1,  3781,   247,  10,   8, IDSTRINARYOPERATOR },
  {     0,  1967,    12,  15,   1, INLATINEXTENDEDC },
  {     1,  7426,  1582,   4,   4, SC__LATIN },
  {     3,  3162,   136,   4,   2, GCB__CR },
  {     2,  4780,  1064,   3,  26, INOPTICALCHARACTERRECOGNITION },
  {     2,  2927,  7506,   2,   2, BUHD },
  {     0,  4619,  4015,   9,   9, SC__OLDSOUTHARABIAN },
  {     0,   522,     0,   3,   0, ISS },
  {     0,  3705,  3563,   4,  14, INTANGUTCOMPONENTS },
  {     0,  1836,  6270,   7,   6, RADICAL__FALSE },
  {     2,  4148,   100,   9,   3, ISALCHEMICAL },
  {     8,  2251,  6892,   2,   4, SD__YES },
  {     4,  4628,   142,   5,   3, SCX__PALM },
  {    24,  3146,     8,   4,   1, GC__PF },
  {    16,  1457,  2531,  14,   9, INSC__CONSONANTSUBJOINED },
  {     2,  7426,  7018,   4,   5, SC__LYCIAN },
  {     0,  4283,  2042,   5,   3, SCX__OSGE },
  {     1,  5289,   760,   9,   7, LB__PREFIXNUMERIC },
  {     0,  2417,  1047,  16,   7, BLK__MODIFIERTONELETTERS },
  {     0,  4718,   145,   4,   3, GC__MARK },
  {     4,  2826,   193,  13,   9, BLK__RUMINUMERALSYMBOLS },
  {     1,  4873,     0,   7,   0, ISUPPER },
  {     7,  3869,  5609,   5,  10, JG__MALAYALAMSSA },
  {     1,  3741,    39,  12,   8, ISDEVANAGARIEXTENDED },
  {     1,  5797,  2001,   9,   5, CCC__BELOWRIGHT },
  {     0,  4098,  3436,   4,  14, INCYPRIOTSYLLABARY },
  {     0,  6558,  6170,   4,   8, SB__SCONTINUE },
  {     8,  4373,    12,   4,   1, GC__LC },
  {     3,   491,    12,   3,   1, MERC },
  {     0,  3614,   853,   7,   4, ETHIOPICEXT },
  {     7,  6879,  7142,   3,   4, NFCQC__Y },
  {     0,  5666,  2148,   3,   2, ASCII },
  {     2,  1311,  5159,   3,   2, LB__JT },
  {     4,    26,  5498,   3,   4, INASCII },
  {     0,  2251,  1922,   2,   2, SD__Y },
  {     0,  4373,    41,   4,   1, GC__LT },
  {     1,  1023,  1008,  21,   6, ANCIENTGREEKMUSICALNOTATION },
  {     0,  3375,  3846,   5,   3, SCX__CHAM },
  {     2,  1522,  6655,   5,   6, BLK__BENGALI },
  {     2,  4024,  6078,   7,   6, BLK__OLDITALIC },
  {     2,  6161,   399,   7,   5, ISPOSIXPUNCT },
  {     1,  6882,     0,   5,   0, PATWS },
  {     0,  6613,   131,   6,   2, SCX__TANG },
  {    19,  2193,  3665,   3,   4, BRAILLE },
  {     4,  6182,     0,   5,   0, BLANK },
  {     6,  6161,  6266,   7,   4, ISPOSIXWORD },
  {     0,  4217,  3416,   5,   9, SPACESEPARATOR },
  {     0,  6411,  6270,   6,   6, COMPEX__FALSE },
  {     1,  2854,  7352,   4,   5, CCC__CCC35 },
  {     0,  1628,  7142,   4,   4, NFKCQC__Y },
  {     3,  3263,  3117,   4,  10, SC__SIGNWRITING },
  {     5,   367,  4641,   5,   3, NCHAR__NO },
  {     8,  7152,    16,   3,   2, NT__DI },
  {     4,  4619,  6090,   6,   6, SC__OLDTURKIC },
  {     0,  4369,  4641,   4,   2, DASH__N },
  {     4,  4763,     0,   7,   0, INBAMUM },
  {     0,    22,  4253,   2,   2, ORKH },
  {     1,  2720,     0,   4,   0, CHER },
  {     1,    33,    22,   2,   1, LAO },
  {     0,  7124,  1057,   4,   2, ISJAMO },
  {     0,  6002,  1932,   6,   2, SCX__PHAG },
  {     2,  2854,  6120,   5,   8, CCC__ABOVELEFT },
  {     0,   156,   788,  23,   6, MISCELLANEOUSSYMBOLSANDARROWS },
  {     0,  2027,  6322,   3,   7, ISBUGINESE },
  {     6,  5645,  7065,   4,   1, LB__H2 },
  {     3,  7626,     0,   4,   0, ZYYY },
  {     4,  2057,  5868,   4,   2, ISLAOO },
  {     2,  3508,     0,  10,   0, MATHSYMBOL },
  {     0,   223,  2472,  12,   7, SUPPLEMENTALARROWSC },
  {     3,    52,  2356,   2,  17, COUNTINGRODNUMERALS },
  {     0,  4962,  5699,   3,  11, AGE__UNASSIGNED },
  {     4,  5222,  1455,   3,   3, ISKTHI },
  {     5,   316,   113,  30,   7, ISCOMBININGDIACRITICALMARKSFORSYMBOLS },
  {     9,  1628,  6539,   4,   8, NFKCQC__MAYBE },
  {     0,  7580,     0,   4,   0, QAAI },
  {    25,  4106,  1850,  10,  13, INCYRILLICSUPPLEMENTARY },
  {     6,  1285,  5081,   5,   3, PHAISTOS },
  {     0,  1030,     3,   3,   1, GREK },
  {     5,   377,  3845,   3,   4, SIDDHAM },
  {     5,  3753,   777,   9,   4, ISETHIOPICSUP },
  {     0,  2190,  6655,   4,   6, SC__BENGALI },
  {     0,  3249,  1865,   5,  19, SC__INSCRIPTIONALPARTHIAN },
  {     2,  1522,  4662,   5,  12, BLK__BLOCKELEMENTS },
  {     1,  3779,    67,   4,   2, ISIDEO },
  {     0,  6613,  3563,   6,   4, SCX__TANGUT },
  {     5,  5031,  7010,   6,   4, BLK__KHOJKI },
  {     2,  1829,    74,  14,  11, BLK__CJKRADICALSSUPPLEMENT },
  {     2,   494,  1899,   3,  20, INSINHALAARCHAICNUMBERS },
  {     2,  3904,  1115,   3,   8, WB__KATAKANA },
  {     1,    75,   400,   4,  10, SUPPUNCTUATION },
  {     0,  5094,     7,   3,   1, CARI },
  {     2,    26,  6713,   2,   7, INNOBLOCK },
  {     0,  3375,  7511,   5,   3, SCX__CYRL },
  {     5,    49,     0,  26,   0, CJKCOMPATIBILITYIDEOGRAPHS },
  {     2,  4080,   100,   9,   3, INALCHEMICAL },
  {     3,  7426,  7176,   4,   3, SC__LEPC },
  {     1,  2854,  7247,   4,   5, CCC__CCC14 },
  {     1,  2337,   246,   4,   2, BC__RLO },
  {     0,   743,   767,  12,  21, BLK__ENCLOSEDIDEOGRAPHICSUPPLEMENT },
  {     0,  1759,  1286,   5,   3, BLK__THAI },
  {     4,  5222,  5027,   6,   4, ISKANAEXTA },
  {     8,  2687,  6674,   5,   6, SCX__ELBASAN },
  {    14,  2074,  5069,   4,   4, SCX__HUNG },
  {     0,  6916,  1815,   5,   2, SC__TALU },
  {     2,  4547,   113,   7,   6, ISOTHERSYMBOL },
  {     0,  6568,  6316,   6,   6, SCX__BASSAVAH },
  {     0,  7380,  4641,   3,   2, CWT__N },
  {     8,  6827,  1762,   5,   2, GREXT__T },
  {     1,  2074,  7505,   5,   3, SCX__BUHD },
  {     1,  4433,    75,   8,   3, INLATIN1SUP },
  {     9,  3869,  7714,   4,   3, JG__MEEM },
  {     2,   256,    68,  30,   7, BLK__SUPPLEMENTALSYMBOLSANDPICTOGRAPHS },
  {    18,  4072,   399,   8,  11, GC__OTHERPUNCTUATION },
  {     4,  2250,  6329,   3,   7, ISDUPLOYAN },
  {     0,  6612,  4066,   2,   2, VS__F },
  {     3,  1090,   144,   8,   5, BLK__HALFMARKS },
  {     1,    23,  4641,   2,   2, RI__N },
  {     0,   152,   788,  27,   6, BLK__MISCELLANEOUSSYMBOLSANDARROWS },
  {     3,  2479,     8,   4,   1, GC__CF },
  {     3,  6619,  2762,   5,   3, SCX__UGAR },
  {     0,  3162,  1096,   4,   2, GCB__LF },
  {     0,  6906,  2757,   4,   3, SC__DEVA },
  {    10,  2027,  7505,   3,   3, ISBUHD },
  {     2,  1119,  4337,   3,  11, KANGXIRADICALS },
  {     0,  3869,  5286,  13,   3, JG__MANICHAEANWAW },
  {     1,     1,  6791,   5,   6, BLK__UCASEXT },
  {     0,  3587,     0,   8,   0, INCOPTIC },
  {     2,   378,     0,  18,   0, IDEOGRAPHICSYMBOLS },
  {     5,   103,  6892,   5,   4, ALPHA__YES },
  {     1,  4283,  5748,   7,   7, SCX__OLDPERSIAN },
  {     4,   842,   866,   5,   9, BLK__PRIVATEUSE },
  {    18,  1789,  5026,   7,   5, ISARABICEXTA },
  {     2,   256,  2465,   7,   7, BLK__SUPARROWSB },
  {     0,  2437,   495,   8,  11, MONGOLIANSUPPLEMENT },
  {     0,   103,  4066,   5,   2, ALPHA__F },
  {     5,  6036,     0,   9,   0, BHAIKSUKI },
  {     0,  4718,     0,   4,   0, GC__M },
  {     3,  7164,     0,   6,   0, HATRAN },
  {     9,  4072,  1047,   8,   6, GC__OTHERLETTER },
  {     0,  4174,  1586,  10,   9, ISCYRILLICEXTENDEDA },
  {     0,  2584,  1047,   5,   6, CASEDLETTER },
  {     1,  1581,    11,  13,   1, LATINEXTENDEDD },
  {     3,  6276,   491,   5,   3, SC__KHMER },
  {     1,  6611,    41,   3,   1, AVST },
  {     1,  4619,  5069,   6,   9, SC__OLDHUNGARIAN },
  {     5,  2652,     1,   3,   1, ISNB },
  {     8,  7138,   792,   4,   1, LB__ZW },
  {     0,  4513,  1403,   6,  10, ISHIGHSURROGATES },
  {     0,  5817,  5740,   4,   8, INKHAROSHTHI },
  {     1,  2516,     0,   8,   0, INPC__TOP },
  {     0,  3344,   495,  10,  11, ISMONGOLIANSUPPLEMENT },
  {     2,  4763,  6316,   4,   6, INBASSAVAH },
  {     1,   972,    36,  20,   3, ISENCLOSEDALPHANUMERICS },
  {     4,  6440,     0,   6,   0, GRBASE },
  {     2,   286,  1375,  11,  15, INCOMBININGMARKSFORSYMBOLS },
  {     2,  5381,  2866,  10,   5, CCC__DOUBLEABOVE },
  {     8,  4718,   113,  11,   6, GC__MODIFIERSYMBOL },
  {     0,  4718,  1047,  11,   6, GC__MODIFIERLETTER },
  {     0,    85,  6029,   6,   3, ARABICPFA },
  {     2,  2041,  4075,   3,   3, ISGOTH },
  {     0,  6601,  2792,   5,   3, SCX__GEOR },
  {     0,  6879,  6539,   3,   8, NFCQC__MAYBE },
  {     1,  2250,     0,   5,   0, ISDIA },
  {     1,  5313,     6,   4,   1, BC__ON },
  {     4,   286,  1680,   5,  19, INCOMMONINDICNUMBERFORMS },
  {     0,    39,  6270,   3,   6, EXT__FALSE },
  {    20,  3781,  4066,   3,   2, IDS__F },
  {     4,   367,  6553,   5,   5, NCHAR__TRUE },
  {     0,  1123,     0,  18,   0, PHONETICEXTENSIONS },
  {    13,  6613,  7596,   5,   3, SCX__TGLG },
  {     0,  2041,  6998,   3,   5, ISGOTHIC },
  {     5,  2924,  7748,   3,   3, JG__REH },
  {     0,  4814,    75,   7,   3, ISBAMUMSUP },
  {    10,    65,  1762,   4,   2, IDEO__T },
  {     4,   818,  5049,   4,  10, ISMASARAMGONDI },
  {     0,  3800,  6884,   4,   3, ISPATWS },
  {     0,  5959,   405,   9,   5, LB__EXCLAMATION },
  {     8,  3869,  4596,  13,   4, JG__MANICHAEANAYIN },
  {     3,  4195,  2518,   4,   2, ISLEPC },
  {     1,  3904,   149,   3,   2, WB__FO },
  {     0,  2437,     0,   4,   0, MONG },
  {     2,    47,  5778,   2,  10, ISWARANGCITI },
  {     0,    39,  6553,   3,   5, EXT__TRUE },
  {     0,   918,   395,  17,  15, INCUNEIFORMNUMBERSANDPUNCTUATION },
  {     7,  3678,     0,   7,   0, SC__MODI },
  {     4,  6628,     2,   4,   1, WB__ML },
  {     0,  4639,   440,   4,   2, BC__NSM },
  {     8,  5182,  1117,   4,   6, INKATAKANA },
  {     0,  6161,    69,   7,   5, ISPOSIXGRAPH },
  {     1,   522,     3,   3,   1, ISSK },
  {    12,  7430,  7587,   4,   3, SC__RUNR },
  {     0,  6401,     1,   3,   1, AGHB },
  {     0,  2927,  6323,   2,   6, BUGINESE },
  {    12,  6276,  1116,   4,   7, SC__KATAKANA },
  {     0,  6149,    12,   6,   1, ISBIDIC },
  {     0,  3375,    14,   6,  16, SCX__CANADIANABORIGINAL },
  {     6,  3822,  5264,   4,   2, ISTAML },
  {     0,  2386,     0,  19,   0, HANGULJAMOEXTENDEDB },
  {    31,  6820,  6091,   4,   5, OLDTURKIC },
  {     0,  2924,  4931,   3,  14, JG__NOJOININGGROUP },
  {     1,  1459,  2721,   4,   7, SC__CHEROKEE },
  {     0,  3472,    75,  10,   3, BLK__LATIN1SUP },
  {     1,  2074,  6078,   4,   4, SCX__ITAL },
  {     4,    47,   581,   5,  27, ISCJKUNIFIEDIDEOGRAPHSEXTENSIONB },
  {     0,   818,  5039,   4,  10, ISMAHJONGTILES },
  {     4,  2871,   776,  10,   5, INGLAGOLITICSUP },
  {     0,  5667,  6112,   5,   8, SCX__SAMARITAN },
  {     3,  5222,  4337,   5,  11, ISKANGXIRADICALS },
  {     1,  2057,  7023,   3,   3, ISLYDI },
  {     1,  4814,  1117,   4,   3, ISBATAK },
  {     7,  2696,  7551,   5,   3, SCX__MROO },
  {     1,  3301,     0,   6,   0, ISEGYP },
  {     0,  3222,   495,  10,   4, INMONGOLIANSUP },
  {     2,    16,     0,   2,   0, DI },
  {     0,    49,  5813,   3,   4, CJKEXTC },
  {     0,  4780,  7230,   3,   4, INORIYA },
  {     0,  3869,  4911,  13,   4, JG__MANICHAEANHETH },
  {     0,  2682,  2099,   5,  18, SC__ANATOLIANHIEROGLYPHS },
  {     8,  3899,   495,   5,   2, SC__CANS },
  {     6,  6639,  4641,   5,   2, BIDIC__N },
  {     0,  1101,     7,   3,   1, THAI },
  {     0,  4612,     0,   5,   0, LB__OP },
  {     0,  2598,  6331,   3,   5, DUPLOYAN },
  {     0,  2382,     0,  23,   0, BLK__HANGULJAMOEXTENDEDB },
  {     1,  6558,  2599,   3,   5, SB__UPPER },
  {     9,  5662,  6379,   5,   6, SC__MAHAJANI },
  {     1,  1929,  6892,   3,   4, HEX__YES },
  {     1,  1288,  1929,   3,   3, ISAHEX },
  {     0,  1581,     0,   9,   0, LATINEXTE },
  {    13,    91,     0,   4,   0, MATH },
  {     0,  5481,  1047,   9,   6, INSC__TONELETTER },
  {     9,  2854,  7067,   4,   6, CCC__CCC129 },
  {     2,  7138,  6633,   4,   6, LB__ZWSPACE },
  {     1,    16,  6892,   3,   4, DIA__YES },
  {     0,  2716,  6994,   6,   4, BLK__CHAKMA },
  {     2,  2172,    13,   3,   1, LINA },
  {     1,  2057,  7018,   3,   3, ISLYCI },
  {     6,    26,  7450,   2,   4, INNEWA },
  {     1,  6601,  6336,   5,   7, SCX__GUJARATI },
  {     0,  5654,   347,   4,  10, LB__IDEOGRAPHIC },
  {     1,   248,     0,   2,   0, PE },
  {     1,   316,  1680,   5,  19, ISCOMMONINDICNUMBERFORMS },
  {     1,  2854,    23,   4,   1, CCC__R },
  {     7,  2386,  1560,   6,  17, HANGULCOMPATIBILITYJAMO },
  {     0,  2776,   399,  11,  11, BLK__GENERALPUNCTUATION },
  {     1,  5437,  3266,   7,   8, HST__LVTSYLLABLE },
  {     0,  4072,   113,   8,   6, GC__OTHERSYMBOL },
  {     1,  6446,  4066,   6,   2, HYPHEN__F },
  {     9,   897,     7,   6,   1, BLK__VAI },
  {     0,  5525,  1131,   5,  10, ISIPAEXTENSIONS },
  {     0,    52,  1573,   6,   4, COMPATJAMO },
  {     3,  5959,     0,   5,   0, LB__EX },
  {     1,  5528,     0,  13,   0, PATTERNSYNTAX },
  {     0,  6613,  2821,   6,   2, SCX__TAGB },
  {     3,  3904,  5148,   3,  12, WB__GLUEAFTERZWJ },
  {     5,  2728,     0,   9,   0, HALFMARKS },
  {     3,  4075,     0,   5,   0, OTHER },
  {     0,   156,  3508,   4,  12, MISCMATHSYMBOLSA },
  {     3,  2074,  7562,   4,   4, SCX__NKOO },
  {     1,  3822,  6766,   4,   5, ISTAGALOG },
  {     8,   439,   790,   3,   2, ISMRO },
  {     0,  3308,  1560,   8,  17, ISHANGULCOMPATIBILITYJAMO },
  {    16,  2924,  6511,   3,   9, JG__YEHBARREE },
  {     0,  5182,    75,   6,  10, INKANASUPPLEMENT },
  {     0,  3904,  7743,   3,   2, WB__XX },
  {     4,  6613,  7238,   6,   3, SCX__TAKRI },
  {     8,  6601,  2928,   5,   3, SCX__GURU },
  {     0,    12,  3035,   2,  15, CAUCASIANALBANIAN },
  {     3,  6838,  6386,   3,   5, SPECIALS },
  {     1,  4780,  5069,   5,   9, INOLDHUNGARIAN },
  {     4,   747,    49,   8,   3, ENCLOSEDCJK },
  {     2,  5421,  5115,   8,   7, GCB__SPACINGMARK },
  {     6,  6446,  4641,   6,   3, HYPHEN__NO },
  {     8,  2208,   202,   3,   2, ADLAM },
  {     2,  4329,  1117,   6,   6, BLK__KATAKANA },
  {     2,  2756,     0,   4,   0, DEVA },
  {    41,  5797,  2321,   9,   4, CCC__BELOWLEFT },
  {     3,  4404,  1047,  12,   6, GC__UPPERCASELETTER },
  {     5,  6424,     0,   4,   0, EA__A },
  {     2,  3869,  2770,  14,   3, JG__MANICHAEANTETH },
  {    17,  1688,     0,  11,   0, NUMBERFORMS },
  {     5,  6827,  4066,   5,   2, GREXT__F },
  {     4,  5483,  6779,   4,   6, SC__TIBETAN },
  {     0,  7380,  1762,   3,   2, CWT__T },
  {     4,  4513,    70,   4,   2, ISHIRA },
  {     3,  6612,  1762,   2,   2, VS__T },
  {     1,  4024,  4012,   7,  12, BLK__OLDNORTHARABIAN },
  {     0,  4628,  2974,   5,   3, SCX__PERM },
  {     0,  5996,    13,   5,   3, SCX__KANA },
  {     0,  3400,  2001,  16,   5, VO__TRANSFORMEDUPRIGHT },
  {     1,  6490,  6229,   5,   5, SOFTDOTTED },
  {     0,  3263,  1683,   4,   3, SC__SIND },
  {     0,  1119,  7007,   3,   3, KANBUN },
  {     1,  2250,  2820,   4,   6, ISDINGBATS },
  {     1,  2951,  1891,   4,   3, SC__MTEI },
  {     0,    16,  6270,   2,   6, DI__FALSE },
  {     0,  5005,  2974,   4,   3, SC__PERM },
  {    38,  3054,  1850,   8,  13, CYRILLICSUPPLEMENTARY },
  {     4,  6843,  4217,   6,   5, ISVERTSPACE },
  {     0,  1459,  1843,   4,   7, SC__CYRILLIC },
  {     3,  2682,  7447,   4,   3, SC__AHOM },
  {     1,  2027,  6183,   3,   4, ISBLANK },
  {     2,  2074,  7527,   4,   4, SCX__HANO },
  {     5,  5996,  7170,   5,   5, SCX__KAITHI },
  {     2,  5996,  6053,   6,   7, SCX__KHUDAWADI },
  {     1,  1789,  3072,   7,  10, ISARABICEXTENDEDA },
  {     2,  2696,  7545,   5,   3, SCX__MIAO },
  {     2,  7412,  1922,   3,   2, LOE__Y },
  {     1,  1459,  5648,   3,   6, SC__HEBREW },
  {     0,  6356,     0,   8,   0, JAMOEXTA },
  {     2,  5402,  3390,   3,   3, DT__MED },
  {     4,  5778,     0,  10,   0, WARANGCITI },
  {     0,  3781,  6892,   4,   4, IDST__YES },
  {     2,   133,    30,  11,   1, DIACRITICALS },
  {     0,  2479,  7760,   3,   2, GC__ZS },
  {     0,  5846,  7010,   4,   4, ISKHOJKI },
  {     1,  6613,  7593,   5,   3, SCX__TFNG },
  {     5,  2503,    39,  13,   3, INMEETEIMAYEKEXT },
  {     0,  2337,  2708,  14,   8, BC__RIGHTTOLEFTOVERRIDE },
  {     2,  6558,    55,   4,   1, SB__SP },
  {     2,   410,     0,  22,   0, INMISCELLANEOUSSYMBOLS },
  {     0,  3139,   399,   7,  11, INITIALPUNCTUATION },
  {     3,   935,   767,  10,  21, INENCLOSEDIDEOGRAPHICSUPPLEMENT },
  {     8,  1801,   574,  16,   4, COMPOSITIONEXCLUSION },
  {    26,   494,   880,  13,  17, INSUPPLEMENTARYPRIVATEUSEAREAB },
  {     0,  5996,  1455,   5,   3, SCX__KTHI },
  {     0,  2124,  6999,   2,   4, GOTHIC },
  {     3,    91,  4641,   4,   3, MATH__NO },
  {     0,  3162,  1610,   4,   7, GCB__CONTROL },
  {     0,  3741,    39,  12,   3, ISDEVANAGARIEXT },
  {     0,  4538,     0,   9,   0, ISMYANMAR },
  {     0,   747,    75,  16,   3, ENCLOSEDALPHANUMSUP },
  {     0,  2188,  7109,   6,   4, INSC__BINDU },
  {     3,  5222,     0,   6,   0, ISKANA },
  {     0,  7614,     0,   4,   0, YIII },
  {     2,   120,    39,  29,   8, BLK__COMBININGDIACRITICALMARKSEXTENDED },
  {    30,  1850,   882,  13,  15, SUPPLEMENTARYPRIVATEUSEAREAB },
  {    43,  1577,     0,  18,   0, BLK__LATINEXTENDEDA },
  {     0,  2491,    74,  12,  11, INCJKRADICALSSUPPLEMENT },
  {     0,  6624,    40,   4,   1, WB__EX },
  {     6,  2924,  7477,   3,   5, JG__KHAPH },
  {     0,  1664,  7038,   3,   5, INTHAANA },
  {     0,   144,     0,   4,   0, MARK },
  {     0,  3136,   399,  10,  11, GC__INITIALPUNCTUATION },
  {     0,  5854,  5504,   6,   6, XPOSIXXDIGIT },
  {     5,  6872,     2,   4,   1, LB__NL },
  {     0,  2839,  3563,   6,  14, BLK__TANGUTCOMPONENTS },
  {     0,   235,     0,  21,   0, MATHEMATICALOPERATORS },
  {     5,  2696,   790,   5,   2, SCX__MRO },
  {     1,  6845,  4217,   4,   5, VERTSPACE },
  {     1,  2741,     0,   4,   0, COPT },
  {    13,  7206,  4066,   4,   2, XIDS__F },
  {    12,  1288,  6649,   3,   6, ISAVESTAN },
  {     8,  5402,   747,   3,   3, DT__ENC },
  {     0,  3375,   495,   6,   2, SCX__CANS },
  {     2,    47,  5813,   5,   4, ISCJKEXTC },
  {     0,  4283,  5069,   7,   9, SCX__OLDHUNGARIAN },
  {    31,   522,  2458,  14,   7, ISSUPPLEMENTALARROWSA },
  {     2,  3869,  3846,  14,   6, JG__MANICHAEANTHAMEDH },
  {     3,  3366,  4641,   5,   3, STERM__NO },
  {     0,  1459,  5648,   3,   4, SC__HEBR },
  {     7,  4490,  2395,   9,   9, ISBOPOMOFOEXTENDED },
  {     6,  2854,  5788,   5,   9, CCC__ABOVERIGHT },
  {     0,  6827,  6553,   5,   5, GREXT__TRUE },
  {     0,  2074,  4041,   4,  15, SCX__ZANABAZARSQUARE },
  {     0,  5702,     0,   8,   0, ASSIGNED },
  {     2,  4075,   399,   5,  11, OTHERPUNCTUATION },
  {     4,  2417,  1047,  12,   7, BLK__MODIFIERLETTERS },
  {     3,  6411,     0,   6,   0, COMPEX },
  {     1,  5666,  5500,   3,  10, ASCIIHEXDIGIT },
  {     4,  2190,  6574,   4,   7, SC__BOPOMOFO },
  {     0,   439,   203,  15,  20, ISMISCELLANEOUSMATHEMATICALSYMBOLSB },
  {     0,  3320,     0,   6,   0, ISMERO },
  {     2,  7426,  7542,   4,   3, SC__LATN },
  {     2,  3779,     0,   6,   0, ISIDST },
  {     7,  5817,  6053,   4,   7, INKHUDAWADI },
  {     6,   494,   863,  13,  17, INSUPPLEMENTARYPRIVATEUSEAREAA },
  {     2,  6593,    76,   9,   2, GEORGIANSUP },
  {     0,   897,    74,  21,  11, BLK__VARIATIONSELECTORSSUPPLEMENT },
  {     1,  2787,   495,  11,  11, BLK__GEORGIANSUPPLEMENT },
  {     0,  2943,  6586,   4,   7, SC__ETHIOPIC },
  {     0,  6601,  6594,   5,   7, SCX__GEORGIAN },
  {     1,  6613,  6391,   6,   6, SCX__TAGBANWA },
  {     0,  3899,    23,   5,   2, SC__CARI },
  {     0,  2516,  1992,  11,  14, INPC__TOPANDBOTTOMANDRIGHT },
  {     3,  4329,  5331,   6,   9, BLK__KATAKANAEXT },
  {    10,  7423,  6892,   3,   4, PCM__YES },
  {     0,  6276,  4932,   5,   2, SC__KHOJ },
  {     4,  6002,  5755,   7,   7, SCX__PHOENICIAN },
  {     1,  4148,   994,   4,  25, ISALPHABETICPRESENTATIONFORMS },
  {     9,  7100,  4641,   4,   3, CWCM__NO },
  {     2,  1311,  4971,   5,  12, LB__COMPLEXCONTEXT },
  {     0,  2074,  7580,   4,   4, SCX__QAAI },
  {     1,  2295,     0,  17,   0, ISTRANSPORTANDMAP },
  {     0,  5483,  7033,   4,   5, SC__TELUGU },
  {     1,  5437,     0,   7,   0, HST__LVT },
  {     2,  1063,     0,  27,   0, OPTICALCHARACTERRECOGNITION },
  {     1,  4848,  4012,   5,  12, ISOLDNORTHARABIAN },
  {     6,  1459,  7626,   3,   4, SC__ZYYY },
  {     2,    85,    75,   6,   3, ARABICSUP },
  {     0,  2787,   495,  11,   4, BLK__GEORGIANSUP },
  {     0,  2599,  6553,   5,   5, UPPER__TRUE },
  {     0,  2854,  7061,   4,   6, CCC__CCC122 },
  {     0,  2057,     6,   5,   1, ISLATN },
  {     1,  6533,     0,   5,   0, LB__QU },
  {     0,   316,    75,  27,  10, ISCOMBININGDIACRITICALMARKSSUPPLEMENT },
  {     5,  4441,  3441,   9,   9, INLINEARBSYLLABARY },
  {     3,  6837,     0,   4,   0, ISPE },
  {     1,  3375,  1034,   6,   2, SCX__CAKM },
  {     1,    80,  6046,   2,   7, EMOTICONS },
  {     4,  3930,  6310,   6,   6, BLK__BALINESE },
  {     0,  3869,  5559,   5,  10, JG__MALAYALAMBHA },
  {     3,  7618,     0,   4,   0, ZANB },
  {     0,   439,  7551,   3,   3, ISMROO },
  {     0,  5672,  5372,   6,   9, SCX__SYLOTINAGRI },
  {     2,  7462,  1227,   6,   5, SUPERANDSUB },
  {    21,  6488,  6229,   7,   5, ISSOFTDOTTED },
  {     0,  1062,  4927,   2,   2, SOYO },
  {     3,  2943,     0,   7,   0, SC__EGYP },
  {     0,  5483,  7596,   4,   3, SC__TGLG },
  {     0,   152,  3508,   8,  12, BLK__MISCMATHSYMBOLSA },
  {     0,   494,  6754,   3,   6, INSOYOMBO },
  {     5,   636,     1,  29,   1, CJKUNIFIEDIDEOGRAPHSEXTENSIONB },
  {     0,  2556,  1374,   5,   3, ISCHAKMA },
  {     9,  6639,  4641,   5,   3, BIDIC__NO },
  {     0,  4814,  6316,   4,   6, ISBASSAVAH },
  {     0,  5510,    11,   6,   1, ISCASED },
  {    17,  2382,     0,  10,   0, BLK__HANGUL },
  {     0,   246,     0,   2,   0, LO },
  {     1,  4802,   131,   2,   2, RJNG },
  {     2,  6613,  7033,   5,   3, SCX__TELU },
  {     2,  1884,    39,  15,   3, BLK__MEETEIMAYEKEXT },
  {     4,  6372,  6366,   6,   6, BLK__JAMOEXTB },
  {     2,  2556,    54,   5,   1, ISCHAM },
  {     0,  2143,    53,   2,   2, AHOM },
  {     1,  5662,  6698,   5,   5, SC__MANDAIC },
  {     2,  6916,  3563,   5,   4, SC__TANGUT },
  {     0,  2057,     2,   3,   1, ISLL },
  {     0,  1968,     0,   2,   0, NL },
  {     4,    26,  1688,   2,  11, INNUMBERFORMS },
  {     0,  2190,  3430,   4,   3, SC__BOPO },
  {     4,  4186,  1762,   4,   2, IDSB__T },
  {     1,  1967,     1,  10,   1, INLATINEXTB },
  {     3,    47,  4041,   2,  15, ISZANABAZARSQUARE },
  {     3,  2752,    39,  14,   8, BLK__DEVANAGARIEXTENDED },
  {     1,  4024,   136,   5,   2, BLK__OCR },
  {     2,   842,    74,  21,  11, BLK__PHONETICEXTENSIONSSUPPLEMENT },
  {     0,  1660,  4641,   3,   2, DEP__N },
  {     3,  5490,  1912,   8,   7, ISAEGEANNUMBERS },
  {     0,  1577,    11,  17,   1, BLK__LATINEXTENDEDD },
  {     4,  4283,  3448,   5,   3, SCX__ORYA },
  {     3,  6558,  2973,   4,   4, SB__STERM },
  {     0,  2951,     0,   7,   0, SC__MERO },
  {     3,  2190,     0,   7,   0, SC__BRAH },
  {     0,  1239,  1008,  23,   6, INANCIENTGREEKMUSICALNOTATION },
  {     1,    23,  1762,   2,   2, RI__T },
  {    16,  3320,  2106,  10,  11, ISMEROITICHIEROGLYPHS },
  {     0,  3899,  3035,   5,  15, SC__CAUCASIANALBANIAN },
  {     5,  3476,    75,   6,   3, LATIN1SUP },
  {     3,  6276,  7170,   4,   5, SC__KAITHI },
  {    11,  7426,    26,   4,   3, SC__LINA },
  {     0,  3753,     0,   6,   0, ISETHI },
  {     0,  3249,  2131,   5,  18, SC__INSCRIPTIONALPAHLAVI },
  {     3,  2027,  7502,   3,   3, ISBHKS },
  {    23,  5202,  5842,   4,   4, ISGRBASE },
  {     8,  2074,  6322,   5,   3, SCX__BUGI },
  {     4,  4848,  4015,   8,   9, ISOLDSOUTHARABIAN },
  {    14,   522,  1405,   4,   7, ISSURROGATE },
  {    13,  6612,  1922,   2,   2, VS__Y },
  {     2,  7415,    31,   6,   1, NFDQC__Y },
  {     1,   316,  6414,   5,   3, ISCOMPEX },
  {     8,  7415,  6893,   6,   3, NFDQC__YES },
  {     0,  4598,  6780,   4,   5, INTIBETAN },
  {    68,  2854,  7739,   4,   2, CCC__KV },
  {     4,  2312,  7491,   5,   3, SCX__ADLM },
  {     2,  3054,     1,  16,   1, CYRILLICEXTENDEDB },
  {     0,  2556,     0,  23,   0, ISCHANGESWHENCASEMAPPED },
  {     1,  7415,     0,   7,   0, NFDQC__N },
  {     0,  6906,  6329,   4,   3, SC__DUPL },
  {     5,  4554,  3418,   4,   7, ISSEPARATOR },
  {     0,  6558,   489,   3,   2, SB__NU },
  {     0,   846,     0,  11,   0, PHONETICEXT },
  {     1,  7206,     0,   4,   0, XIDS },
  {     0,   747,   767,   8,  21, ENCLOSEDIDEOGRAPHICSUPPLEMENT },
  {     7,  2074,  6574,   5,   7, SCX__BOPOMOFO },
  {    79,   410,    68,  29,   7, INMISCELLANEOUSSYMBOLSANDPICTOGRAPHS },
  {     4,  6606,  1328,   7,   5, SCX__JAVANESE },
  {     0,  2479,  7756,   3,   2, GC__ZL },
  {     9,  1951,    38,  16,   4, INGEOMETRICSHAPESEXT },
  {     0,  4195,  7014,   4,   4, ISLEPCHA },
  {     0,  7426,  7539,   4,   3, SC__LAOO },
  {     0,  2682,  7491,   4,   3, SC__ADLM },
  {     1,   522,  5885,   3,   3, ISSAMR },
  {     1,  3934,    75,   5,  10, BAMUMSUPPLEMENT },
  {     0,  6882,  6892,   5,   4, PATWS__YES },
  {     4,  7148,  7142,   4,   4, NFKDQC__Y },
  {     0,   159,  4066,   2,   2, CE__F },
  {     1,  2973,     0,   4,   0, TERM },
  {     0,  5122,   737,  10,   6, GC__DECIMALNUMBER },
  {     4,     1,  1688,   4,  11, BLK__NUMBERFORMS },
  {     1,  6639,  6270,   5,   6, BIDIC__FALSE },
  {     9,  6161,   103,   7,   5, ISPOSIXALPHA },
  {     0,  2687,  6586,   5,   7, SCX__ETHIOPIC },
  {     2,  2833,     6,   3,  41, INUNIFIEDCANADIANABORIGINALSYLLABICSEXTENDED },
  {     0,   159,  1922,   2,   2, CE__Y },
  {     0,   256,  3112,   6,  15, BLK__SUTTONSIGNWRITING },
  {     8,  3366,  4641,   5,   2, STERM__N },
  {     0,  1937,  4662,   3,  12, INBLOCKELEMENTS },
  {     0,  1699,    74,  15,   4, BLK__DIACRITICALSSUP },
  {     0,  5541,   144,   3,   4, ISQMARK },
  {     1,  1884,  5059,   6,  10, BLK__MENDEKIKAKUI },
  {     1,  1360,    89,   8,   6, BLK__ARABICMATH },
  {     1,    26,  7562,   2,   3, INNKO },
  {     1,  5823,  4803,   8,   6, INSC__NONJOINER },
  {     0,  6715,  4666,   5,   8, BLOCKELEMENTS },
  {     2,   972,     0,  18,   0, ISENCLOSEDALPHANUM },
  {     2,  1141,  5344,   3,  10, INPAHAWHHMONG },
  {     5,  6446,  6270,   6,   6, HYPHEN__FALSE },
  {     0,  3263,  6748,   4,   6, SC__SIDDHAM },
  {     7,  1937,  3939,   3,  14, INBRAILLEPATTERNS },
  {     2,  1784,   697,   5,  27, INCJKUNIFIEDIDEOGRAPHSEXTENSIONF },
  {     0,  6843,  4690,   6,   9, ISVERTICALFORMS },
  {     0,  4809,  4688,   4,  11, INVERTICALFORMS },
  {     0,  1937,  7214,   3,   4, INBUHID },
  {     4,  6568,  1117,   6,   3, SCX__BATAK },
  {    18,  5958,    13,   3,   1, ELBA },
  {    16,    47,  6661,   5,   4, ISCJKEXTD },
  {     0,  7104,  6358,   4,   6, INJAMOEXTA },
  {     1,  2579,     0,   9,   0, LOWERCASE },
  {     1,  3532,  2396,  11,   9, BLK__MYANMAREXTENDEDB },
  {     0,  5854,  5505,   6,   5, XPOSIXDIGIT },
  {     0,  5333,  1590,   8,   5, KANAEXTENDEDA },
  {     0,  3146,   400,   4,  10, GC__PUNCTUATION },
  {     0,  4619,  6084,   6,   6, SC__OLDPERMIC },
  {     0,  5852,  7611,   3,   3, ISXSUX },
  {     0,    23,  6892,   2,   4, RI__YES },
  {     1,  5797,     0,   9,   0, CCC__BELOW },
  {     3,  3869,  4243,  13,   6, JG__MANICHAEANLAMEDH },
  {     0,  4283,  7570,   5,   3, SCX__ORKH },
  {     0,  7508,     7,   3,   1, PRTI },
  {     2,  4369,  1762,   4,   2, DASH__T },
  {     0,   156,   203,  13,  20, MISCELLANEOUSMATHEMATICALSYMBOLSB },
  {     0,  5541,  7581,   3,   3, ISQAAI },
  {     2,  6827,  6270,   5,   6, GREXT__FALSE },
  {     4,    72,  5717,   2,   2, PHNX },
  {     8,  1459,  7508,   4,   3, SC__CPRT },
  {     0,  3263,    22,   6,   1, SC__SYLO },
  {     4,   522,   880,  13,  17, ISSUPPLEMENTARYPRIVATEUSEAREAB },
  {     3,  4831,   399,   6,  11, ISDASHPUNCTUATION },
  {     1,  3186,  3978,   8,   9, INHANGULSYLLABLES },
  {     3,  3472,    75,  10,  10, BLK__LATIN1SUPPLEMENT },
  {     0,  4441,    75,   4,   2, INLISU },
  {     0,  6849,    10,   4,   1, JG__FE },
  {    37,  6161,  5505,   7,   5, ISPOSIXDIGIT },
  {     1,  2074,  7622,   4,   4, SCX__ZINH },
  {     9,  1778,    90,   7,  30, INARABICMATHEMATICALALPHABETICSYMBOLS },
  {     3,    69,     6,   3,   1, GRAN },
  {    22,  4106,     0,  10,   0, INCYRILLIC },
  {     0,  7175,     0,   6,   0, LEPCHA },
  {     1,  1475,  5649,   3,   3, ISHEBR },
  {     0,  6901,  1035,   5,   2, SC__BAMU },
  {     2,  5222,    75,   6,   3, ISKANASUP },
  {     0,  5667,  1899,   5,   6, SCX__SINHALA },
  {     1,  5959,  1751,   4,   8, LB__EMODIFIER },
  {     4,  2278,  1047,  17,   7, ISSPACINGMODIFIERLETTERS },
  {     2,  2951,  7548,   4,   3, SC__MLYM },
  {     0,  2074,  1618,   4,   4, SCX__HANG },
  {     4,  2337,  2990,  14,   7, BC__RIGHTTOLEFTISOLATE },
  {    10,  4992,    13,   3,   1, ORYA },
  {     2,  1577,     1,  12,   1, BLK__LATINEXTB },
  {     0,  7206,  6270,   4,   6, XIDS__FALSE },
  {     0,  3501,  3441,   7,   9, LINEARBSYLLABARY },
  {     3,   124,    39,  25,   8, COMBININGDIACRITICALMARKSEXTENDED },
  {     0,  1115,     0,   8,   0, KATAKANA },
  {     0,  6440,  6553,   6,   5, GRBASE__TRUE },
  {     0,  4750,    13,   5,   1, HST__NA },
  {     4,   522,  6748,   3,   3, ISSIDD },
  {     5,  4106,  1586,  10,   9, INCYRILLICEXTENDEDA },
  {     1,  1618,     0,   4,   0, HANG },
  {     0,  3429,     0,   4,   0, BOPO },
  {     0,  5182,  7007,   5,   3, INKANBUN },
  {     2,  2074,  5778,   4,  10, SCX__WARANGCITI },
  {     4,    55,  1274,   2,   2, PAUC },
  {     4,  2854,     2,   4,   1, CCC__L },
  {     1,  6985,  4066,   5,   2, UIDEO__F },
  {     3,  2839,  7238,   6,   3, BLK__TAKRI },
  {     1,  1475,  5503,   3,   7, ISHEXDIGIT },
  {     2,  4024,  1064,   5,  26, BLK__OPTICALCHARACTERRECOGNITION },
  {     2,    47,     8,   3,   1, ISCF },
  {     1,   794,  5039,   4,   5, INMAHJONG },
  {     0,  2924,  7467,   3,   5, JG__ALAPH },
  {     0,  1778,  1341,   7,  19, INARABICPRESENTATIONFORMSA },
  {     0,  2924,  6217,   3,  10, JG__DALATHRISH },
  {     0,   494,  6760,   6,   3, INSUPPUAA },
  {     0,  3869,  5619,   5,  10, JG__MALAYALAMTTA },
  {     1,  2839,  6766,   6,   5, BLK__TAGALOG },
  {     5,  3344,     6,  10,   1, ISMONGOLIAN },
  {    68,   439,     0,  22,   0, ISMISCELLANEOUSSYMBOLS },
  {     2,  1784,  5027,   5,   4, INCJKEXTA },
  {     0,  5645,     2,   4,   1, LB__HL },
  {     0,    49,  1014,  16,   5, CJKCOMPATIBILITYFORMS },
  {    36,  4317,  2741,  12,   6, BLK__GREEKANDCOPTIC },
  {     0,  2437,   495,   8,   4, MONGOLIANSUP },
  {     5,  6533,  1008,   6,   6, LB__QUOTATION },
  {     1,  7383,  4641,   3,   2, CWU__N },
  {     0,  5842,    30,   3,   1, BASS },
  {     2,  5212,    40,   5,   2, ISGREXT },
  {     8,  2666,  3978,   4,   9, ISYISYLLABLES },
  {     8,  2696,  1890,   6,   9, SCX__MEETEIMAYEK },
  {     0,  2491,    74,  12,   4, INCJKRADICALSSUP },
  {     0,  6916,  6969,   5,   5, SC__TAITHAM },
  {     1,   368,    54,   3,   1, CHAM },
  {     0,  6778,     0,   7,   0, TIBETAN },
  {    26,  1459,  6943,   3,   7, SC__HANUNOO },
  {     1,  4619,  2023,   5,   2, SC__OLCK },
  {     1,  6901,    30,   6,   1, SC__BASS },
  {     7,  1538,    38,  18,   9, BLK__GEOMETRICSHAPESEXTENDED },
  {     0,  2854,     1,   6,   1, CCC__ATB },
  {     1,  4186,  4066,   4,   2, IDSB__F },
  {    18,  2382,  3978,  10,   9, BLK__HANGULSYLLABLES },
  {     3,  1285,  5081,   5,   7, PHAISTOSDISC },
  {     1,  1115,  7003,   2,   4, KAITHI },
  {     0,  6644,  4066,   5,   2, BIDIM__F },
  {     0,  1360,  3071,   8,  11, BLK__ARABICEXTENDEDA },
  {     0,  2377,     0,   4,   0, EGYP },
  {    23,  6471,  4217,   7,   5, ISHORIZSPACE },
  {     4,  1062,     0,   2,   0, SO },
  {     2,    47,  1014,  11,   5, ISCJKCOMPATFORMS },
  {     0,    91,   247,   4,   9, MATHOPERATORS },
  {     0,    23,  1922,   2,   2, RI__Y },
  {     0,  6167,  4066,   4,   2, XIDC__F },
  {     1,  4705,  6392,   3,   5, TAGBANWA },
  {     0,  3612,   777,   9,  11, INETHIOPICSUPPLEMENT },
  {     2,  4348,    36,   7,   2, BLK__MUSIC },
  {     0,   367,  1922,   5,   2, NCHAR__Y },
  {     1,  2251,  6270,   2,   6, SD__FALSE },
  {     0,  3330,  1047,  14,   7, ISMODIFIERTONELETTERS },
  {    20,    49,     0,   9,   0, CJKCOMPAT },
  {     6,  7100,     0,   4,   0, CWCM },
  {     0,  3676,  1047,  14,   6, INSC__MODIFYINGLETTER },
  {     0,    23,  4066,   2,   2, RI__F },
  {     2,  2479,     6,   4,   1, GC__CN },
  {     0,   128,   347,   3,  31, INIDEOGRAPHICDESCRIPTIONCHARACTERS },
  {    21,  5298,     6,   6,   2, SCX__MANI },
  {     4,   120,    75,  29,  10, BLK__COMBININGDIACRITICALMARKSSUPPLEMENT },
  {     1,  3822,   131,   4,   2, ISTANG },
  {     6,  5402,    10,   6,   1, DT__NONE },
  {     2,  3781,  4066,   4,   2, IDST__F },
  {     6,  2556,  1636,  17,   6, ISCHANGESWHENCASEFOLDED },
  {    64,    84,  7241,   2,   3, TAMIL },
  {    31,  1939,    12,  13,   1, BYZANTINEMUSIC },
  {     8,  2962,  3416,  11,   9, BC__EUROPEANSEPARATOR },
  {     0,   286,  2356,   4,  17, INCOUNTINGRODNUMERALS },
  {     3,  3718,     0,   6,   0, ISCHER },
  {     3,  5825,  6061,   4,   8, SC__NABATAEAN },
  {     6,   439,  1423,   6,  11, ISMISCPICTOGRAPHS },
  {     0,  2854,  7287,   4,   5, CCC__CCC22 },
  {     0,   818,  5039,   4,   5, ISMAHJONG },
  {     0,  4742,  5115,   7,   7, GC__SPACINGMARK },
  {     1,  2609,    74,  12,  11, ISCJKRADICALSSUPPLEMENT },
  {     1,  4041,     0,  15,   0, ZANABAZARSQUARE },
  {     0,  6990,  1762,   4,   2, AHEX__T },
  {    22,  2579,  1922,   5,   2, LOWER__Y },
  {     2,  3718,    75,  10,  10, ISCHEROKEESUPPLEMENT },
  {     0,   724,     0,  13,   0, BLK__CUNEIFORM },
  {     0,  1115,    61,   2,   2, KALI },
  {    10,    84,  5264,   2,   2, TAML },
  {     4,  4329,    75,   8,   3, BLK__KANASUP },
  {     0,  2854,     2,   5,   1, CCC__AL },
  {     1,  1019,  6649,   5,   6, BLK__AVESTAN },
  {    19,  5505,     0,   5,   0, DIGIT },
  {     0,    75,  2472,   3,   7, SUPARROWSC },
  {     2,   522,  2458,   5,   7, ISSUPARROWSA },
  {    80,   410,  1731,   6,   9, INMISCTECHNICAL },
  {     2,   159,  1762,   2,   2, CE__T },
  {     1,  6624,     1,   4,   1, WB__EB },
  {     8,  4962,  7670,   3,   4, AGE__V51 },
  {     1,  1288,  1912,  14,   7, ISANCIENTGREEKNUMBERS },
  {     0,  2516,  2001,   5,   5, INPC__RIGHT },
  {     9,  1660,  6553,   3,   5, DEP__TRUE },
  {     4,  5637,  7065,   4,   1, LB__B2 },
  {     0,  4024,  6720,   6,   5, BLK__OLCHIKI },
  {     2,  6547,  6271,   7,   5, PATSYN__FALSE },
  {     0,  6078,     0,   4,   0, ITAL },
  {     1,  2095,   136,   3,   2, ISOCR },
  {     0,  2652,     0,   3,   0, ISN },
  {     1,   120,  1680,   7,  19, BLK__COMMONINDICNUMBERFORMS },
  {     1,  3781,  4641,   3,   2, IDS__N },
  {     0,  6613,  7038,   5,   3, SCX__THAA },
  {     0,  4742,    54,   4,   1, GC__SM },
  {     2,  4564,   247,   9,   9, ISSUPMATHOPERATORS },
  {     1,  3753,  3061,   9,   9, ISETHIOPICEXTENDED },
  {    16,   399,    13,   2,   1, PUA },
  {     0,   743,    30,  24,   1, BLK__ENCLOSEDALPHANUMERICS },
  {     0,  1311,  2042,   3,   2, LB__SG },
  {     1,  1047,     0,   6,   0, LETTER },
  {     0,   156,   113,   4,   7, MISCSYMBOLS },
  {     0,  3822,  6775,   5,   4, ISTAIVIET },
  {     3,  3146,    12,   4,   1, GC__PC },
  {     0,  4674,  2130,   5,  19, BLK__INSCRIPTIONALPAHLAVI },
  {     2,   818,  6379,   4,   6, ISMAHAJANI },
  {     4,  2951,  1646,   4,   3, SC__MULT },
  {     0,  7391,    13,   4,   1, EA__NA },
  {     0,  2074,  7535,   4,   4, SCX__HMNG },
  {     0,  2924,  5283,   3,   3, JG__NUN },
  {     0,   747,     0,  16,   0, ENCLOSEDALPHANUM },
  {    14,  6724,    11,   5,   1, ISMAND },
  {     2,  2652,  3485,   3,   3, ISNARB },
  {     0,  6887,  6271,   6,   5, QMARK__FALSE },
  {     8,  4962,  7702,   3,   4, AGE__V90 },
  {     1,  6896,  6304,   5,   6, SC__ARMENIAN },
  {     3,  5444,  1912,   8,   7, INAEGEANNUMBERS },
  {     3,  4619,   819,   4,   3, SC__OSMA },
  {     0,  7430,  7028,   4,   5, SC__REJANG },
  {     2,  1198,  2148,   4,   2, ISVAII },
  {     1,   522,  5762,   3,   9, ISSAURASHTRA },
  {     0,  1368,    39,   7,   4, BLK__CJKEXTE },
  {     0,  7244,  4027,   3,   2, BPT__O },
  {    51,  4156,    20,  10,  10, ISCANADIANABORIGINAL },
  {    20,   494,    68,  28,   7, INSUPPLEMENTALSYMBOLSANDPICTOGRAPHS },
  {     8,  6281,  5755,   6,   7, SC__PHOENICIAN },
  {     3,  7206,  4641,   4,   3, XIDS__NO },
  {     0,  6827,  4641,   5,   3, GREXT__NO },
  {     4,  4862,     0,  11,   0, ISTITLECASE },
  {     2,  7459,  3096,   4,   4, DT__SMALL },
  {     0,  2854,  7327,   4,   5, CCC__CCC30 },
  {    65,  1433,  1904,   6,  15, SINHALAARCHAICNUMBERS },
  {     0,    33,  5868,   2,   2, LAOO },
  {     0,  1459,  7164,   3,   4, SC__HATR },
  {    21,  2924,  7710,   3,   4, JG__ALEF },
  {    39,  2696,  6296,   5,   8, SCX__MONGOLIAN },
  {    34,  4166,  3436,   4,  14, ISCYPRIOTSYLLABARY },
  {     2,  4148,   105,   4,   3, ISALPHA },
  {     0,  1789,    90,   7,   5, ISARABICMATH },
  {     0,  3705,  3563,   4,   4, INTANGUT },
  {    21,  5222,  2451,   3,   3, ISKNDA },
  {     8,  6276,  1455,   4,   3, SC__KTHI },
  {     0,  4136,  2133,   6,  16, ININSCRIPTIONALPAHLAVI },
  {     0,   494,  1217,   5,  22, INSUPERSCRIPTSANDSUBSCRIPTS },
  {    10,  1141,     0,  13,   0, INPHONETICEXT },
  {     3,  1043,    23,   2,   1, OCR },
  {     0,  4780,  5748,   5,   7, INOLDPERSIAN },
  {     0,  3629,   495,   9,   4, INGEORGIANSUP },
  {     0,    16,  4641,   3,   2, DIA__N },
  {     0,  5842,  5711,   3,   7, BASICLATIN },
  {     0,   818,   113,   6,   6, ISMATHSYMBOL },
  {     2,  3035,    39,   4,   3, UCASEXT },
  {     2,  1141,   866,   3,   9, INPRIVATEUSE },
  {     2,    13,  2100,   3,  17, ANATOLIANHIEROGLYPHS },
  {     2,  3678,  6297,   5,   7, SC__MONGOLIAN },
  {     0,  1311,     1,   4,   1, LB__CB },
  {     4,   367,  6892,   5,   4, NCHAR__YES },
  {     0,  6372,  1057,   6,   2, BLK__JAMO },
  {     1,  3366,  6553,   5,   5, STERM__TRUE },
  {    20,  2854,  3127,  12,   5, CCC__ATTACHEDBELOW },
  {     1,  4742,  3416,   8,   9, GC__SPACESEPARATOR },
  {     4,  1667,    65,  13,  13, BLK__CJKCOMPATIDEOGRAPHSSUP },
  {    21,  5172,  2741,  10,   6, INGREEKANDCOPTIC },
  {     9,    23,     0,   2,   0, RI },
  {     0,  7181,  4893,   5,   2, SCX__LAO },
  {     2,  6062,     3,   4,   1, BATAK },
  {     3,  3779,   380,   4,  30, ISIDEOGRAPHICSYMBOLSANDPUNCTUATION },
  {     0,  1119,  4337,   3,   3, KANGXI },
  {     3,  2216,  1047,  17,   7, INSPACINGMODIFIERLETTERS },
  {     0,  2041,    38,  16,   9, ISGEOMETRICSHAPESEXTENDED },
  {     0,  6446,  4641,   6,   2, HYPHEN__N },
  {     2,   316,  2728,  11,   9, ISCOMBININGHALFMARKS },
  {     0,  4283,   819,   5,   3, SCX__OSMA },
  {     5,    47,  7622,   2,   4, ISZINH },
  {    40,  7380,  6892,   3,   4, CWT__YES },
  {     0,   256,  1217,   7,  22, BLK__SUPERSCRIPTSANDSUBSCRIPTS },
  {     2,  2318,     0,   4,   0, BC__L },
  {     1,  1833,    74,  10,   4, CJKRADICALSSUP },
  {     1,   972,   767,  10,  21, ISENCLOSEDIDEOGRAPHICSUPPLEMENT },
  {     0,  1784,  6661,   5,   4, INCJKEXTD },
  {    36,  4106,  5340,  10,   4, INCYRILLICEXTB },
  {     0,  5662,  6703,   5,   5, SC__MARCHEN },
  {     6,  4186,  1922,   4,   2, IDSB__Y },
  {    66,  5182,  6689,   5,   4, INKANNADA },
  {     0,  1771,  3564,   3,  13, TANGUTCOMPONENTS },
  {    33,  2924,  7729,   3,   4, JG__ZAIN },
  {     0,  1667,    58,  13,   7, BLK__CJKCOMPATIBILITY },
  {     0,  6804,  4641,   5,   2, CWKCF__N },
  {     5,  2854,  7262,   4,   5, CCC__CCC17 },
  {     0,  1939,   192,  13,  10, BYZANTINEMUSICALSYMBOLS },
  {     1,  1459,  7576,   3,   4, SC__QAAC },
  {     1,  7244,  7454,   3,   5, BPT__NONE },
  {     1,  4329,  7007,   7,   3, BLK__KANBUN },
  {     0,  1667,    58,  13,  17, BLK__CJKCOMPATIBILITYIDEOGRAPHS },
  {     6,  5986,    76,  11,   9, GLAGOLITICSUPPLEMENT },
  {    17,  6633,  4641,   6,   3, WSPACE__NO },
  {     3,  2696,  7549,   5,   3, SCX__MYMR },
  {     0,  6827,  1922,   5,   2, GREXT__Y },
  {    10,  2756,     0,  10,   0, DEVANAGARI },
  {     0,  4128,  3238,  10,   9, INSC__GEMINATIONMARK },
  {     1,  2652,     0,   4,   0, ISNO },
  {     1,  5005,  5344,   4,  10, SC__PAHAWHHMONG },
  {     1,  1090,  5649,   5,   5, BLK__HEBREW },
  {     0,  6916,   131,   5,   2, SC__TANG },
  {     3,  6827,  4641,   5,   2, GREXT__N },
  {     0,  6417,    53,   4,   5, DT__COMPAT },
  {     1,   522,   235,  14,  21, ISSUPPLEMENTALMATHEMATICALOPERATORS },
  {     1,  4837,  1403,   5,  10, ISLOWSURROGATES },
  {     0,  5481,   144,   9,   4, INSC__TONEMARK },
  {     1,  1179,  5717,   4,   2, ISPHNX },
  {     4,  6568,  3936,   6,   3, SCX__BAMUM },
  {     3,  3811,     7,   3,   1, ISRI },
  {     0,  2190,  6322,   4,   7, SC__BUGINESE },
  {     2,  7181,  7434,   5,   3, SCX__LIMB },
  {     2,  6882,  6270,   5,   6, PATWS__FALSE },
  {     0,  4573,   777,   7,   4, ISSYRIACSUP },
  {     0,  2951,  7545,   4,   3, SC__MIAO },
  {     1,  2074,  7164,   4,   4, SCX__HATR },
  {     1,  6809,    26,   4,   4, DT__FINAL },
  {     0,  5825,  6070,   4,   8, SC__NEWTAILUE },
  {     1,    16,  4641,   2,   3, DI__NO },
  {     1,  6896,   736,   5,   2, SC__ARMN },
  {     6,  3753,   777,   9,  11, ISETHIOPICSUPPLEMENT },
  {     9,  7152,  5125,   3,   7, NT__DECIMAL },
  {     0,  3781,  1762,   4,   2, IDST__T },
  {     0,  1751,  1047,   8,   7, MODIFIERLETTERS },
  {     2,  4699,    30,   5,   1, CCC__IS },
  {     0,  4348,   191,   7,  11, BLK__MUSICALSYMBOLS },
  {     2,   256,  2472,  16,   7, BLK__SUPPLEMENTALARROWSC },
  {    10,  7377,  4641,   3,   2, CWL__N },
  {     1,  4138,  3280,  11,  10, INSC__VOWELINDEPENDENT },
  {     0,  5005,  6104,   4,   3, SC__PAUC },
  {    19,  3577,     0,  10,   0, INCHEROKEE },
  {     0,  6558,    12,   4,   1, SB__SC },
  {     0,    16,  6553,   2,   5, DI__TRUE },
  {     8,  3869,  4249,  13,   6, JG__MANICHAEANSAMEKH },
  {     4,  2057,  7023,   3,   5, ISLYDIAN },
  {     0,  4729,    11,   4,   1, GC__ND },
  {     0,  6612,    75,   2,   3, VSSUP },
  {     0,  3249,   232,   4,   3, SC__ITAL },
  {     1,  4028,  4015,   6,   9, OLDSOUTHARABIAN },
  {    32,  2826,  1735,   6,   3, BLK__RUNIC },
  {     7,   156,  1731,  13,   9, MISCELLANEOUSTECHNICAL },
  {     5,    47,  7626,   2,   4, ISZYYY },
  {     3,  2682,  6649,   4,   6, SC__AVESTAN },
  {     0,  1528,     0,   1,   0, Z },
  {     0,  1288,  5498,   3,   4, ISASCII },
  {    11,  3462,  6350,   6,   6, BLK__HIRAGANA },
  {     0,  2716,    75,  12,  10, BLK__CHEROKEESUPPLEMENT },
  {     2,  4369,     0,   4,   0, DASH },
  {     0,  3035,     0,   4,   0, UCAS },
  {    34,  1434,  1763,   4,   4, INHATRAN },
  {     1,  2737,     0,  10,   0, BLK__COPTIC },
  {     2,  1475,  5649,   3,   5, ISHEBREW },
  {     1,  2095,  2023,   4,   2, ISOLCK },
  {     0,  4317,  6680,   6,   5, BLK__GRANTHA },
  {     1,  6192,     0,   5,   0, PRINT },
  {     1,  1683,  5321,   3,   5, INDOMINO },
  {     5,  1888,    39,  11,   3, MEETEIMAYEKEXT },
  {     5,   256,   400,   8,  10, BLK__SUPPUNCTUATION },
  {     0,  3612,  3061,   9,   9, INETHIOPICEXTENDED },
  {    42,  1967,    10,  15,   1, INLATINEXTENDEDE },
  {     1,  2078,  1105,   4,   2, BC__PDF },
  {     0,  1457,  3664,  14,   6, INSC__CONSONANTKILLER },
  {     0,    52,  2356,   2,   9, COUNTINGROD },
  {     0,   144,    12,   3,   1, MARC },
  {     0,  2584,  6270,   5,   6, CASED__FALSE },
  {     1,  2318,  1279,  19,   4, BC__LEFTTORIGHTEMBEDDING },
  {     1,  4821,   113,  10,   7, ISCURRENCYSYMBOLS },
  {     0,  5700,     0,  10,   0, UNASSIGNED },
  {    35,  6906,  6931,   4,   6, SC__DESERET },
  {     0,  6613,  7033,   5,   5, SCX__TELUGU },
  {     1,  2652,  7563,   3,   2, ISNKO },
  {     2,  4082,   192,   7,  10, ALCHEMICALSYMBOLS },
  {    20,  2652,  7223,   3,   3, ISNSHU },
  {     0,  6990,  4066,   4,   2, AHEX__F },
  {     8,  1459,  7531,   3,   4, SC__HLUW },
  {     4,    52,     0,   2,   0, CO },
  {     0,  4222,  7029,   4,   4, ISREJANG },
  {     0,  6411,  6553,   6,   5, COMPEX__TRUE },
  {     0,   152,     0,  24,   0, BLK__MISCELLANEOUSSYMBOLS },
  {     0,  6446,  6553,   6,   5, HYPHEN__TRUE },
  {     8,  3770,   495,   9,  11, ISGEORGIANSUPPLEMENT },
  {    16,  5132,  5115,   9,   7, GC__ENCLOSINGMARK },
  {     0,  5212,     3,   5,   1, ISGREK },
  {     0,  5204,  5842,   8,   4, GRAPHEMEBASE },
  {    45,  4373,    54,   4,   1, GC__LM },
  {     9,  2951,  7549,   4,   3, SC__MYMR },
  {     9,  4862,  7600,   4,   2, ISTIBT },
  {     0,    16,  4641,   3,   3, DIA__NO },
  {     1,  5541,  7577,   3,   3, ISQAAC },
  {     1,  6168,  1762,   3,   2, IDC__T },
  {     2,   256,  1899,   5,  20, BLK__SINHALAARCHAICNUMBERS },
  {    12,  1459,  7622,   3,   4, SC__ZINH },
  {     5,  7186,  7584,   5,   3, SCX__RJNG },
  {     1,   955,    30,  17,   1, ISCUNEIFORMNUMBERS },
  {     0,   865,     0,  14,   0, PRIVATEUSEAREA },
  {     0,  4529,   115,   4,   2, ISLIMB },
  {     0,  4483,   777,   7,  11, INSYRIACSUPPLEMENT },
  {     0,   156,     0,  20,   0, MISCELLANEOUSSYMBOLS },
  {     0,  1699,  5321,   5,  10, BLK__DOMINOTILES },
  {     1,    47,   668,   5,  27, ISCJKUNIFIEDIDEOGRAPHSEXTENSIONE },
  {    84,  5222,  7007,   5,   3, ISKANBUN },
  {     1,  6348,     0,   4,   0, HIRA },
  {     0,   846,  5755,   3,   7, PHOENICIAN },
  {     1,  1744,   145,   8,   3, SPACINGMARK },
  {     3,  4763,  1117,   4,   3, INBATAK },
  {     0,  1311,    55,   4,   1, LB__CP },
  {   134,  1789,   736,   4,   2, ISARMN },
  {     4,   494,  1413,   5,  21, INSUPSYMBOLSANDPICTOGRAPHS },
  {     0,  3263,  6742,   4,   6, SC__SHAVIAN },
  {     0,  4573,    12,   5,   1, ISSYRC },
  {     0,  4619,  7226,   4,   4, SC__OGHAM },
  {     8,  2973,  1762,   4,   2, TERM__T },
  {     2,  3162,  5441,   4,   3, GCB__LVT },
  {     6,  1667,  1014,  13,   5, BLK__CJKCOMPATFORMS },
  {     2,  5667,  5762,   5,   3, SCX__SAUR },
  {     1,  1660,  4066,   3,   2, DEP__F },
  {     0,  2584,     0,   5,   0, CASED },
  {     4,  1884,     0,  15,   0, BLK__MEETEIMAYEK },
  {    13,  2854,  7362,   4,   5, CCC__CCC84 },
  {     0,   743,  6045,   5,   8, BLK__EMOTICONS },
  {     3,  2584,  6553,   5,   5, CASED__TRUE },
  {     4,  2558,  1636,  15,   6, CHANGESWHENCASEFOLDED },
  {     0,  1967,    22,   4,   1, INLAO },
  {     0,   378,     0,  32,   0, IDEOGRAPHICSYMBOLSANDPUNCTUATION },
  {     4,  2924,  6237,   3,  10, JG__REVERSEDPE },
  {     3,  4283,  6078,   7,   6, SCX__OLDITALIC },
  {     1,  2854,  6797,   4,   7, CCC__OVERLAY },
  {     0,  2479,   399,  12,  11, GC__CONNECTORPUNCTUATION },
  {     1,  4556,  3367,   8,   8, SENTENCETERMINAL },
  {     1,  2854,  2867,   5,   4, CCC__ABOVE },
  {     2,  3869,   692,  13,   3, JG__MANICHAEANONE },
  {     4,  2843,     0,  11,   0, TAIXUANJING },
  {     2,  6558,    39,   3,   6, SB__EXTEND },
  {     1,  5667,  3118,   5,   3, SCX__SGNW },
  {     0,  7124,  1328,   5,   5, ISJAVANESE },
  {     4,  4814,    74,   4,   2, ISBASS },
  {     0,  4283,  7226,   5,   4, SCX__OGHAM },
  {     1,  2951,  3537,   4,   6, SC__MYANMAR },
  {     0,  4995,   760,  10,   7, LB__POSTFIXNUMERIC },
  {     1,  5437,     0,   6,   0, HST__LV },
  {     0,  4742,  3417,   4,   8, GC__SEPARATOR },
  {     0,  2074,  7602,   4,   4, SCX__VAII },
  {     0,   897,    74,   5,   4, BLK__VSSUP },
  {     4,  6613,  1815,   6,   2, SCX__TALU },
  {     0,  6128,     1,   5,   1, GCB__EB },
  {     0,  1475,  3450,   6,  12, ISHALFANDFULLFORMS },
  {     4,  2652,  1689,   3,  10, ISNUMBERFORMS },
  {     1,   865,     0,  10,   0, PRIVATEUSE },
  {     5,   818,   247,  14,   9, ISMATHEMATICALOPERATORS },
  {     0,  4538,  1586,   9,   9, ISMYANMAREXTENDEDA },
  {     0,  2752,    39,  14,   3, BLK__DEVANAGARIEXT },
  {     0,  1789,  6028,   7,   4, ISARABICPFA },
  {     7,  4366,   399,   7,  11, GC__DASHPUNCTUATION },
  {     0,  6161,  2599,   7,   5, ISPOSIXUPPER },
  {     0,  3822,  1815,   4,   2, ISTALU },
  {     0,  4433,     0,   8,   0, INLATIN1 },
  {     2,  2337,    61,   4,   2, BC__RLI },
  {     7,  6547,  1042,   7,   2, PATSYN__NO },
  {    16,   494,  2458,  14,   7, INSUPPLEMENTALARROWSA },
  {     2,  4814,    61,   4,   2, ISBALI },
  {    23,  4780,  4012,   5,  12, INOLDNORTHARABIAN },
  {     0,  7531,     0,   4,   0, HLUW },
  {     0,  4995,     0,   5,   0, LB__PO },
  {     3,  2074,  7221,   4,   5, SCX__NUSHU },
  {     5,  2295,  1286,   3,   3, ISTHAI },
  {     1,  7423,  4066,   3,   2, PCM__F },
  {     3,   522,  1899,   3,   6, ISSINHALA },
  {     0,  5182,    75,   6,   3, INKANASUP },
  {     1,  7377,  6892,   3,   4, CWL__YES },
  {     0,  3869,  5599,   5,  10, JG__MALAYALAMNYA },
  {     1,  5855,   104,   6,   4, POSIXALPHA },
  {     0,  5945,     0,   4,   0, JT__T },
  {     3,  6547,    31,   7,   1, PATSYN__Y },
  {    68,  6364,     0,   8,   0, JAMOEXTB },
  {     0,  1141,  6096,   3,   8, INPALMYRENE },
  {     0,    49,   389,   3,  21, CJKSYMBOLSANDPUNCTUATION },
  {    13,  5629,    12,   3,   1, JT__C },
  {     3,  2188,   737,  18,   6, INSC__BRAHMIJOININGNUMBER },
  {     4,  6558,   749,   3,   2, SB__CL },
  {     5,  1937,  6655,   3,   6, INBENGALI },
  {     1,  5662,     6,   5,   2, SC__MANI },
  {     0,  7104,  1328,   5,   5, INJAVANESE },
  {     1,  4529,    13,   8,   1, ISLINEARA },
  {     0,  2843,  6775,   3,   4, TAIVIET },
  {     1,  3208,     0,   6,   0, INMODI },
  {     0,  1023,     0,  17,   0, ANCIENTGREEKMUSIC },
  {     2,  4088,  3035,   4,  15, INCAUCASIANALBANIAN },
  {     1,  7162,  6381,   4,   4, MAHAJANI },
  {    16,  6411,  6892,   6,   4, COMPEX__YES },
  {    30,   972,  1044,  10,  19, ISENCLOSEDCJKLETTERSANDMONTHS },
  {     0,  4814,  5710,   4,   8, ISBASICLATIN },
  {    22,  4174,  3062,  10,   9, ISCYRILLICEXTENDEDC },
  {     5,  5228,  1647,   4,   2, ISMULT },
  {    17,  3934,     0,   4,   0, BAMU },
  {    28,  7391,  4302,   4,   6, EA__NEUTRAL },
  {     0,  6985,  4641,   5,   3, UIDEO__NO },
  {     0,  6916,  6391,   5,   6, SC__TAGBANWA },
  {    64,   955,     0,  11,   0, ISCUNEIFORM },
  {     4,  2589,     0,   5,   0, TITLE },
  {     0,  2652,    11,   3,   1, ISND },
  {     5,  4140,  7603,   4,   3, SC__VAII },
  {     0,  5251,     0,   7,   0, ISSPACE },
  {     4,  2479,     0,   4,   0, GC__C },
  {     0,   552,     0,  16,   0, UNIFIEDIDEOGRAPH },
  {    38,  3629,     6,   9,   1, INGEORGIAN },
  {     5,  7206,  4641,   4,   2, XIDS__N },
  {     7,  4619,  7570,   4,   3, SC__ORKH },
  {     0,  2479,  1528,   3,   1, GC__Z },
  {     7,  3779,  1877,   6,   3, ISIDSTART },
  {     4,  6440,  1762,   6,   2, GRBASE__T },
  {    16,  2854,  7317,   4,   5, CCC__CCC28 },
  {     1,  1459,  5069,   3,   4, SC__HUNG },
  {    17,  1789,  1001,   7,  19, ISARABICPRESENTATIONFORMSB },
  {    32,   439,     6,   3,   1, ISMN },
  {     0,  5264,   114,   2,   2, MLYM },
  {     1,  4253,  7010,   2,   4, KHOJKI },
  {     0,   159,  4641,   2,   2, CE__N },
  {    21,  5172,     0,   7,   0, INGREEK },
  {     0,  2078,    10,  23,   1, BC__POPDIRECTIONALISOLATE },
  {     1,  5031,  1382,   8,   8, BLK__KHMERSYMBOLS },
  {     1,  3779,  6170,   4,   8, ISIDCONTINUE },
  {     6,  3375,  2721,   5,   7, SCX__CHEROKEE },
  {     0,  3779,    12,   4,   1, ISIDC },
  {   135,  2766,  3060,  10,  10, BLK__ETHIOPICEXTENDED },
  {     0,  2074,  7164,   4,   6, SCX__HATRAN },
  {     1,  1239,     0,  19,   0, INANCIENTGREEKMUSIC },
  {     2,  5654,     0,   5,   0, LB__IN },
  {     8,  2584,  6892,   5,   4, CASED__YES },
  {     0,  7181,  3482,   5,   6, SCX__LINEARB },
  {    65,  3354,     0,   6,   0, ISSUND },
  {     0,    47,     0,   3,   0, ISC },
  {     0,  2312,  7497,   5,   3, SCX__AVST },
  {     0,  4186,  4641,   4,   3, IDSB__NO },
  {     1,  2924,  6856,   3,   8, JG__SWASHKAF },
  {     1,  1937,  3939,   3,   6, INBRAILLE },
  {     0,  3263,  5354,   4,  10, SC__SORASOMPENG },
  {     2,  5648,     0,   6,   0, HEBREW },
  {     2,  6906,  6329,   4,   7, SC__DUPLOYAN },
  {    21,  2074,  2194,   5,   5, SCX__BRAHMI },
  {     0,  2503,  5059,   4,  10, INMENDEKIKAKUI },
  {     0,  2074,  5648,   4,   6, SCX__HEBREW },
  {     1,  5959,  5842,   4,   4, LB__EBASE },
  {     5,  6161,  6192,   7,   5, ISPOSIXPRINT },
  {     7,  5139,    10,   3,   1, OSGE },
  {     3,    21,  5718,   2,   8, BOXDRAWING },
  {     0,  5298,  6703,   6,   5, SCX__MARCHEN },
  {     1,  3097,     0,   3,   0, ALL },
  {     1,  2471,    61,   2,   2, BALI },
  {    10,  5662,  3837,   5,   8, SC__MANICHAEAN },
  {     0,  1967,  7023,   3,   5, INLYDIAN },
  {     1,  6558,    79,   3,   2, SB__LE },
  {    23,  1311,   103,   3,  10, LB__ALPHABETIC },
  {     9,  6906,  1598,   5,   2, SC__DSRT },
  {     6,  3330,     0,   6,   0, ISMODI },
  {     2,  3536,  2396,   7,   9, MYANMAREXTENDEDB },
  {     0,  7096,  4641,   4,   2, CWCF__N },
  {     1,  6628,     6,   4,   1, WB__MN },
  {     3,  4148,   105,   4,   8, ISALPHABETIC },
  {     0,    85,  1002,   6,  18, ARABICPRESENTATIONFORMSB },
  {    26,  6887,     0,   7,   0, QMARK__Y },
  {     0,  2074,  7566,   4,   4, SCX__NSHU },
  {     0,    23,  4641,   2,   3, RI__NO },
  {     0,  6985,  4641,   5,   2, UIDEO__N },
  {     3,  1457,  3232,   6,  15, INSC__CANTILLATIONMARK },
  {     0,    47,  6188,   3,   4, ISCNTRL },
  {     1,  1577,  2798,  12,  10, BLK__LATINEXTADDITIONAL },
  {     4,  6168,  4066,   3,   2, IDC__F },
  {     1,   972,   776,  20,  12, ISENCLOSEDALPHANUMERICSUPPLEMENT },
  {     1,  4750,    41,   4,   1, HST__T },
  {     8,  6417,    53,   4,   2, DT__COM },
  {     0,  4811,  1130,   4,  11, VEDICEXTENSIONS },
  {     6,  1637,  5069,   3,   9, OLDHUNGARIAN },
  {     0,   103,  4641,   5,   3, ALPHA__NO },
  {     0,     1,  5778,   4,  10, BLK__WARANGCITI },
  {    14,     1,  6713,   4,   7, BLK__NOBLOCK },
  {     0,  7181,  7434,   5,   4, SCX__LIMBU },
  {    40,  4459,  1998,  11,   8, INPC__BOTTOMANDRIGHT },
  {     1,  7550,     0,   4,   0, MROO },
  {    16,  1577,  7018,   5,   5, BLK__LYCIAN },
  {     0,  6558,    39,   3,   2, SB__EX },
  {    25,  5222,  1117,   4,   6, ISKATAKANA },
  {     0,    49,    39,   3,   4, CJKEXTE },
  {    64,  7124,    13,   5,   1, ISJAVA },
  {    68,   935,    37,  21,   2, INENCLOSEDALPHANUMERICS },
  {     7,    75,  6763,   4,   3, SUPPUAB },
  {     1,   128,   379,   3,  17, INIDEOGRAPHICSYMBOLS },
  {     2,   749,   399,   5,  11, CLOSEPUNCTUATION },
  {    20,  4848,  6078,   5,   6, ISOLDITALIC },
  {     1,  4174,    75,  10,  10, ISCYRILLICSUPPLEMENT },
  {     2,  1581,    12,   8,   1, LATINEXTC },
  {    66,  4483,   777,   7,   4, INSYRIACSUP },
  {     5,   156,  1731,   4,   9, MISCTECHNICAL },
  {     7,   286,    39,  27,   8, INCOMBININGDIACRITICALMARKSEXTENDED },
  {     1,  6804,  6270,   5,   6, CWKCF__FALSE },
  {    75,    47,   389,   5,  21, ISCJKSYMBOLSANDPUNCTUATION },
  {     2,  4788,     0,   9,   0, INPC__LEFT },
  {     8,  1577,    22,   6,   1, BLK__LAO },
  {    34,   901,    30,  17,   1, VARIATIONSELECTORS },
  {     5,  2312,  2099,   6,  18, SCX__ANATOLIANHIEROGLYPHS },
  {     0,   316,  2356,   4,  17, ISCOUNTINGRODNUMERALS },
  {     1,  2826,  7028,   5,   5, BLK__REJANG },
  {     0,  7181,  1582,   5,   4, SCX__LATIN },
  {     0,  4283,  6720,   6,   5, SCX__OLCHIKI },
  {     5,  5222,  6689,   5,   4, ISKANNADA },
  {     0,  6593,     0,   8,   0, GEORGIAN },
  {    13,   522,  6736,   3,   6, ISSHARADA },
  {     3,  3400,     5,   4,   1, VO__TU },
  {     0,   636,    13,  29,   1, CJKUNIFIEDIDEOGRAPHSEXTENSIONA },
  {     5,  7377,  1762,   3,   2, CWL__T },
  {     0,   743,     0,  20,   0, BLK__ENCLOSEDALPHANUM },
  {    34,    47,     6,   3,   1, ISCN },
  {     1,  7412,  4641,   3,   3, LOE__NO },
  {     0,  5806,  2209,   7,   7, GC__CASEDLETTER },
  {     1,  3554,  5372,   6,   9, BLK__SYLOTINAGRI },
  {     0,  1179,     8,   3,   1, ISPF },
  {     1,  4174,     0,  10,   0, ISCYRILLIC },
  {     2,  1789,  6304,   4,   6, ISARMENIAN },
  {     1,  2696,  6963,   5,   6, SCX__MULTANI },
  {    10,  2741,  1912,  11,   7, COPTICEPACTNUMBERS },
  {    12,  4884,   852,   5,   5, ISVEDICEXT },
  {     0,    32,     0,   2,   0, LL },
  {    16,  4174,  5340,  10,   4, ISCYRILLICEXTB },
  {     0,  1433,    13,   6,   1, SINHALA },
  {     2,  1459,  7580,   3,   4, SC__QAAI },
  {     8,  1457,     0,  14,   0, INSC__CONSONANT },
  {     0,  2854,    85,   6,   2, CCC__ATAR },
  {     1,  7181,  7018,   5,   5, SCX__LYCIAN },
  {     9,  7383,  4066,   3,   2, CWU__F },
  {     0,  4529,    75,   4,   2, ISLISU },
  {     6,  1967,     0,  11,   0, INLATINEXTE },
  {     3,  6804,  1922,   5,   2, CWKCF__Y },
  {     6,  1815,     0,   2,   0, LU },
  {     0,  4369,  6892,   4,   4, DASH__YES },
  {     4,  1778,   790,   4,   4, INARROWS },
  {     2,  3987,     0,  15,   0, IMPERIALARAMAIC },
  {    17,  6424,  1106,   3,   9, EA__FULLWIDTH },
  {     1,  5690,  1047,   9,   6, WB__HEBREWLETTER },
  {     1,   439,    68,  29,   7, ISMISCELLANEOUSSYMBOLSANDPICTOGRAPHS },
  {     2,  6916,    79,   5,   2, SC__TALE },
  {     3,  4186,  4641,   4,   2, IDSB__N },
  {     0,  2433,   495,  12,   4, BLK__MONGOLIANSUP },
  {     3,  7487,  2973,   4,   4, SB__ATERM },
  {     0,  3330,   113,  10,   6, ISMODIFIERSYMBOL },
  {     0,  2382,  6685,   7,   4, BLK__HANUNOO },
  {     0,  3822,  1835,   4,   2, ISTAKR },
  {    27,  5667,  1683,   5,   3, SCX__SIND },
  {     0,  2074,  7558,   4,   4, SCX__NBAT },
  {     1,  3883,     7,   4,   1, LB__RI },
  {     0,  4814,    75,   7,  10, ISBAMUMSUPPLEMENT },
  {     0,   175,  5763,   2,   8, SAURASHTRA },
  {     1,  6644,  4641,   5,   2, BIDIM__N },
  {    54,   144,  6704,   3,   4, MARCHEN },
  {    12,  2074,  7614,   4,   4, SCX__YIII },
  {   135,  4962,  7650,   3,   4, AGE__V31 },
  {     2,  2373,  2103,   9,  14, BLK__EGYPTIANHIEROGLYPHS },
  {     2,  3781,  4641,   4,   2, IDST__N },
  {     0,  1836,  6892,   7,   4, RADICAL__YES },
  {     1,  3532,     0,  11,   0, BLK__MYANMAR },
  {     0,  5402,  7706,   3,   4, DT__WIDE },
  {     0,  7462,  1219,   5,  20, SUPERSCRIPTSANDSUBSCRIPTS },
  {    25,  4513,  1403,   8,  10, ISHIGHPUSURROGATES },
  {     7,  3770,     0,   6,   0, ISGEOR },
  {     6,  2558,  1628,  11,  14, CHANGESWHENNFKCCASEFOLDED },
  {     0,  6837,    54,   5,   1, ISPERM },
  {     1,  6624,  5842,   4,   4, WB__EBASE },
  {     4,  2696,  1646,   5,   3, SCX__MULT },
  {    13,  2041,  6336,   3,   7, ISGUJARATI },
  {     3,  3781,  1922,   4,   2, IDST__Y },
  {     0,   256,   235,  16,  21, BLK__SUPPLEMENTALMATHEMATICALOPERATORS },
  {    12,  2074,  5778,   4,   4, SCX__WARA },
  {     0,  6613,  5264,   6,   2, SCX__TAML },
  {     2,  2924,  5552,   3,   7, JG__SEMKATH },
  {    16,  1288,  7447,   3,   3, ISAHOM },
  {     2,  4317,     0,   9,   0, BLK__GREEK },
  {     3,    47,  6805,   3,   4, ISCWKCF },
  {     3,   794,  5049,   4,  10, INMASARAMGONDI },
  {     0,  3429,    22,   7,   1, BOPOMOFO },
  {     0,  5986,     0,  10,   0, GLAGOLITIC },
  {     0,  5385,  5322,   2,   9, DOMINOTILES },
  {     0,  2599,     0,   5,   0, UPPER },
  {     0,    55,     0,   1,   0, P },
  {     0,  1360,  6304,   6,   6, BLK__ARMENIAN },
  {     1,  2579,  4641,   5,   2, LOWER__N },
  {     0,  2250,    38,  13,   4, ISDIACRITICALSEXT },
  {     0,  3612,   777,   9,   4, INETHIOPICSUP },
  {     3,  2479,  5111,   5,  11, GC__COMBININGMARK },
  {     0,  6804,     0,   5,   0, CWKCF },
  {     5,  5452,  1131,   5,  10, INIPAEXTENSIONS },
  {   129,  5825,  7563,   4,   2, SC__NKO },
  {     0,  2839,    79,   7,   2, BLK__TAILE },
  {    16,  2057,    10,  15,   1, ISLATINEXTENDEDE },
  {    12,   955,   395,  17,  15, ISCUNEIFORMNUMBERSANDPUNCTUATION },
  {     0,  5855,  6182,   5,   5, POSIXBLANK },
  {     5,  1019,  7447,   5,   3, BLK__AHOM },
  {     0,  6872,     5,   4,   1, LB__NU },
  {     0,  4156,    30,  10,   9, ISCANADIANSYLLABICS },
  {    10,  3162,  1687,   4,   2, GCB__CN },
  {     2,  1179,    30,  19,   1, ISPHONETICEXTENSIONS },
  {     0,  4598,  6398,   4,   6, INTIFINAGH },
  {     1,  6002,   104,   6,   2, SCX__PHLP },
  {     7,  4862,  6786,   4,   5, ISTIRHUTA },
  {     0,  1457,  4470,  14,   4, INSC__CONSONANTDEAD },
  {     0,  2973,  6892,   4,   4, TERM__YES },
  {     1,  2095,  2042,   3,   3, ISOSGE },
  {     1,  1759,  7033,   5,   5, BLK__TELUGU },
  {     0,  5204,    39,   8,   6, GRAPHEMEEXTEND },
  {     0,  2190,  7505,   4,   3, SC__BUHD },
  {     1,  1577,    12,  17,   1, BLK__LATINEXTENDEDC },
  {     0,   468,   112,  27,   8, BLK__MATHEMATICALALPHANUMERICSYMBOLS },
  {     1,  6613,  1286,   5,   3, SCX__THAI },
  {     7,  1784,   610,   5,  27, INCJKUNIFIEDIDEOGRAPHSEXTENSIONC },
  {    45,  3023,  3106,   6,   4, BLK__CARIAN },
  {     1,  3800,  6097,   4,   7, ISPALMYRENE },
  {     0,   819,  3098,   3,  14, SMALLFORMVARIANTS },
  {    11,   522,    11,   3,   1, ISSD },
  {    32,  3366,  6270,   5,   6, STERM__FALSE },
  {     3,  2924,  4889,   3,  14, JG__HAMZAONHEHGOAL },
  {     5,    47,  5027,   5,   4, ISCJKEXTA },
  {    33,   316,  5733,   5,   7, ISCOMPATJAMO },
  {     2,  4186,   247,   9,   8, IDSBINARYOPERATOR },
  {     0,  1360,  1340,   8,  20, BLK__ARABICPRESENTATIONFORMSA },
  {     0,  5637,    13,   4,   1, LB__BA },
  {    36,  4217,     0,   5,   0, SPACE },
  {     0,  3462,  1394,   9,  19, BLK__HIGHPRIVATEUSESURROGATES },
  {     3,     5,  6980,   2,   5, UNKNOWN },
  {     5,  6168,  6892,   3,   4, IDC__YES },
  {     6,  3255,  3988,   3,  14, ISIMPERIALARAMAIC },
  {     5,  2095,  7570,   3,   3, ISORKH },
  {     0,  1784,  5726,   5,   7, INCJKSTROKES },
  {     0,  5402,   788,   4,   5, DT__NARROW },
  {     2,  3822,  6771,   5,   4, ISTAITHAM },
  {    15,  3904,     7,   4,   1, WB__RI },
  {     2,  1542,    38,  14,   9, GEOMETRICSHAPESEXTENDED },
  {     2,  2924,  4915,   3,   4, JG__KAPH },
  {     2,  2445,    75,  13,   3, BLK__SUNDANESESUP },
  {    16,  4831,     0,   6,   0, ISDASH },
  {    10,  2839,  5725,   6,   2, BLK__TAGS },
  {     8,    16,  6553,   3,   5, DIA__TRUE },
  {     1,  7124,  6358,   4,   6, ISJAMOEXTA },
  {     1,  5854,   104,   7,   4, XPOSIXALPHA },
  {     0,  2914,   776,  10,  12, ISGLAGOLITICSUPPLEMENT },
  {     0,  6818,  6091,   6,   5, ISOLDTURKIC },
  {     9,  3263,  5373,   6,   8, SC__SYLOTINAGRI },
  {     1,  3869,   248,  13,   2, JG__MANICHAEANPE },
  {     3,  2078,  4212,   3,  10, BC__WHITESPACE },
  {     4,  3869,  5579,   5,  10, JG__MALAYALAMNGA },
  {     0,  5504,     0,   6,   0, XDIGIT },
  {     0,  2818,     0,   8,   0, DINGBATS },
  {     1,  4148,  5015,   4,  10, ISALPHABETICPF },
  {     1,  4513,  6350,   4,   6, ISHIRAGANA },
  {    40,  1459,  7618,   3,   4, SC__ZANB },
  {     6,  3781,  6270,   4,   6, IDST__FALSE },
  {     2,  7181,  7176,   5,   5, SCX__LEPCHA },
  {     0,  2830,     0,   4,   0, RUMI },
  {     4,  1778,  1001,   7,  19, INARABICPRESENTATIONFORMSB },
  {    50,  2854,  7073,   4,   6, CCC__CCC130 },
  {     0,  7152,    44,   3,   2, NT__DE },
  {     0,   494,  1596,   3,  22, INSHORTHANDFORMATCONTROLS },
  {     2,  3966,   115,  14,   5, BLK__CURRENCYSYMBOLS },
  {     5,  3811,  1837,   3,   6, ISRADICAL },
  {     2,  4388,   399,   4,  11, OPENPUNCTUATION },
  {     7,   522,  7590,   3,   3, ISSHRD },
  {     4,   133,     0,   9,   0, DIACRITIC },
  {     0,  4116,  7014,   4,   4, INLEPCHA },
  {     1,  5855,  6178,   6,   4, POSIXALNUM },
  {     0,  4106,  2396,  10,   9, INCYRILLICEXTENDEDB },
  {     3,  6815,  1084,   4,   3, DT__INIT },
  {     0,  1062,  6755,   2,   5, SOYOMBO },
  {     0,  2973,  1922,   4,   2, TERM__Y },
  {     1,  2924,  6227,   3,  10, JG__KNOTTEDHEH },
  {     0,  2766,   776,  10,  12, BLK__ETHIOPICSUPPLEMENT },
  {     6,   494,  2465,   5,   7, INSUPARROWSB },
  {     0,    16,  4066,   3,   2, DIA__F },
  {     4,  2337,     0,  14,   0, BC__RIGHTTOLEFT },
  {     3,  3023,  3035,   6,  15, BLK__CAUCASIANALBANIAN },
  {    12,  1035,  6708,   2,   5, MULTANI },
  {     1,  3869,  5880,   5,   9, JG__MALAYALAMRA },
  {     2,    47,     7,   3,   1, ISCI },
  {     5,  4674,   347,   5,  31, BLK__IDEOGRAPHICDESCRIPTIONCHARACTERS },
  {     3,   636,     0,  30,   0, CJKUNIFIEDIDEOGRAPHSEXTENSIOND },
  {    17,   494,  6763,   6,   3, INSUPPUAB },
  {     0,  6128,    40,   5,   1, GCB__EX },
  {     0,  3705,  7238,   4,   3, INTAKRI },
  {     3,  1459,  7610,   3,   4, SC__XSUX },
  {    17,    55,  6105,   2,   7, PAUCINHAU },
  {     1,  1288,  1008,  23,   6, ISANCIENTGREEKMUSICALNOTATION },
  {     1,  3577,  6994,   4,   4, INCHAKMA },
  {     1,  7181,  7018,   5,   3, SCX__LYCI },
  {     1,  7426,  6957,   4,   6, SC__LINEARA },
  {     3,  6985,  6270,   5,   6, UIDEO__FALSE },
  {     1,    39,  1762,   3,   2, EXT__T },
  {     0,  5797,    23,   5,   1, CCC__BR },
  {     0,  1637,  5748,   3,   7, OLDPERSIAN },
  {     1,  7550,     0,   3,   0, MRO },
  {     1,  2057,     5,   3,   1, ISLU },
  {     0,   606,     0,   2,   0, NB },
  {     0,  2433,     6,  12,   1, BLK__MONGOLIAN },
  {     1,  2962,   251,  17,   4, BC__EUROPEANTERMINATOR },
  {     1,    47,   552,   5,  17, ISCJKUNIFIEDIDEOGRAPHS },
  {     0,  1311,    50,   4,   1, LB__CJ },
  {     2,  2599,  1762,   5,   2, UPPER__T },
  {   129,  2190,  7502,   4,   3, SC__BHKS },
  {     3,  6804,  4066,   5,   2, CWKCF__F },
  {     2,  1141,   866,   3,  13, INPRIVATEUSEAREA },
  {    14,   286,     0,  27,   0, INCOMBININGDIACRITICALMARKS },
  {     2,  2057,    11,  10,   1, ISLATINEXTD },
  {     0,  6558,   136,   3,   2, SB__CR },
  {     0,  3614,   777,   7,  11, ETHIOPICSUPPLEMENT },
  {     0,  1683,  2820,   4,   6, INDINGBATS },
  {     3,  3162,  1500,   4,   7, GCB__PREPEND },
  {   111,  4809,   853,   6,   4, INVEDICEXT },
  {    13,  3791,  1865,   4,  19, ISINSCRIPTIONALPARTHIAN },
  {     9,   152,   788,   8,   6, BLK__MISCARROWS },
  {    10,  3811,   862,   4,   2, ISRUNR },
  {     9,   728,   395,  15,  15, CUNEIFORMNUMBERSANDPUNCTUATION },
  {     0,  1522,  3939,   5,   6, BLK__BRAILLE },
  {     1,   743,  6674,   5,   6, BLK__ELBASAN },
  {     2,  3301,  2104,   8,  13, ISEGYPTIANHIEROGLYPHS },
  {     0,    84,  5442,   2,   2, TAVT },
  {     1,  1368,   581,   7,  27, BLK__CJKUNIFIEDIDEOGRAPHSEXTENSIONB },
  {     0,  4156,  3035,   4,  15, ISCAUCASIANALBANIAN },
  {     0,  3934,     0,   5,   0, BAMUM },
  {     1,  4148,     2,   4,   1, ISALL },
  {    10,  2173,   728,  15,   9, INEARLYDYNASTICCUNEIFORM },
  {     0,  7181,  7023,   5,   3, SCX__LYDI },
  {     0,  3497,  3441,  11,   9, BLK__LINEARBSYLLABARY },
  {     1,    91,   484,   4,   8, MATHALPHANUM },
  {     0,  3162,    77,   4,   2, GCB__PP },
  {     6,  7423,  6270,   3,   6, PCM__FALSE },
  {     8,  5662,    43,   5,   2, SC__MAND },
  {     1,  1459,  7527,   3,   4, SC__HANO },
  {     0,  3050,     1,  20,   1, BLK__CYRILLICEXTENDEDB },
  {     3,  3263,  1899,   4,   6, SC__SINHALA },
  {    16,  6161,  4217,   7,   5, ISPOSIXSPACE },
  {    33,  1288,  5498,   3,  12, ISASCIIHEXDIGIT },
  {     1,  5654,    11,   4,   1, LB__ID },
  {     0,  7377,  1922,   3,   2, CWL__Y },
  {    33,  3869,  1893,   4,   2, JG__MIM },
  {     0,   128,    11,   3,   2, INIDC },
  {    53,  4873,  1047,  11,   6, ISUPPERCASELETTER },
  {     0,  1119,    75,   4,  10, KANASUPPLEMENT },
  {     5,  6916,  7241,   5,   3, SC__TAMIL },
  {     0,  3899,  1034,   5,   2, SC__CAKM },
  {    46,  7377,  4066,   3,   2, CWL__F },
  {    73,  7562,     0,   3,   0, NKO },
  {     0,  1457,  1278,  18,  10, INSC__CONSONANTPRECEDINGREPHA },
  {     0,  3146,     0,   4,   0, GC__P },
  {     0,  4283,  7472,   5,   3, SCX__OGAM },
  {     8,  6446,     0,   6,   0, HYPHEN },
  {     1,  1459,  2386,   3,   6, SC__HANGUL },
  {     0,  3577,    75,  10,   3, INCHEROKEESUP },
  {     0,  6266,     0,   4,   0, WORD },
  {     0,    72,    61,   2,   2, PHLI },
  {     0,  4729,     2,   4,   1, GC__NL },
  {     0,  1929,  4641,   3,   2, HEX__N },
  {    56,  4628,  6104,   5,   8, SCX__PAUCINHAU },
  {     0,  2687,     0,   8,   0, SCX__EGYP },
  {     0,     1,   606,   4,   2, BLK__NB },
  {     0,   468,  6698,   6,   5, BLK__MANDAIC },
  {    20,  2854,  7312,   4,   5, CCC__CCC27 },
  {     0,   522,  1899,   3,  20, ISSINHALAARCHAICNUMBERS },
  {     0,    85,  1586,   6,   9, ARABICEXTENDEDA },
  {    41,   439,    12,   3,   1, ISMC },
  {     1,  6440,  1922,   6,   2, GRBASE__Y },
  {    10,  6990,  4641,   4,   2, AHEX__N },
  {    64,  6322,    85,   2,   2, UGAR },
  {     0,  4217,  6498,   5,   4, SPACEPERL },
  {     0,   439,     0,   3,   0, ISM },
  {     1,  2854,    23,   5,   1, CCC__AR },
  {     0,  2251,  6553,   2,   5, SD__TRUE },
  {     0,  2780,   399,   7,  11, GENERALPUNCTUATION },
  {     0,  2278,  6385,   4,   6, ISSPECIALS },
  {   102,  6167,  4641,   4,   3, XIDC__NO },
  {     2,  3344,   495,  10,   4, ISMONGOLIANSUP },
  {     4,  7383,  4641,   3,   3, CWU__NO },
  {     0,  2117,    12,  13,   1, BLK__GLAGOLITIC },
  {     1,  1115,  6693,   2,   5, KAYAHLI },
  {     2,  5212,    39,   7,   3, ISGREEKEXT },
  {     1,  3308,     7,   5,   1, ISHANI },
  {    36,  7383,  6892,   3,   4, CWU__YES },
  {     0,  4962,  7686,   3,   4, AGE__V62 },
  {     0,  2233,   113,  17,   7, INTRANSPORTANDMAPSYMBOLS },
  {     1,  6633,  6892,   6,   4, WSPACE__YES },
  {     0,  4529,  3489,  10,   8, ISLINEARBIDEOGRAMS },
  {     0,  6411,  4641,   6,   3, COMPEX__NO },
  {    64,  4962,  7674,   3,   4, AGE__V52 },
  {    13,   410,   788,   6,   6, INMISCARROWS },
  {     0,  2924,  1031,  19,   3, JG__BURUSHASKIYEHBARREE },
  {    10,  5483,  6785,   4,   3, SC__TIRH },
  {    33,  6483,  3098,   5,  14, ISSMALLFORMVARIANTS },
  {     4,   152,   183,  17,  20, BLK__MISCELLANEOUSMATHEMATICALSYMBOLSA },
  {     3,   743,  1044,  12,  19, BLK__ENCLOSEDCJKLETTERSANDMONTHS },
  {    65,  6633,     0,   6,   0, WSPACE },
  {     4,  5667,  5762,   5,   9, SCX__SAURASHTRA },
  {    35,  3612,    12,   9,   1, INETHIOPIC },
  {     4,  2095,  3448,   3,   3, ISORYA },
  {     0,  2078,  4293,   3,  15, BC__BOUNDARYNEUTRAL },
  {     0,  5854,    69,   6,   5, XPOSIXGRAPH },
  {     5,  1784,   639,   5,  27, INCJKUNIFIEDIDEOGRAPHSEXTENSIOND },
  {     2,   468,   484,   8,   8, BLK__MATHALPHANUM },
  {     0,  2843,   113,  11,   7, TAIXUANJINGSYMBOLS },
  {     0,  1368,  6665,   7,   4, BLK__CJKEXTF },
  {     2,  1628,  6539,   4,   4, NFKCQC__M },
  {     1,   793,    11,   3,   1, SIND },
  {    16,  3554,   777,   9,   4, BLK__SYRIACSUP },
  {     0,  3050,     1,  15,   1, BLK__CYRILLICEXTB },
  {     2,  4529,  3416,   6,   9, ISLINESEPARATOR },
  {     1,  1476,  6744,   3,   4, SHAVIAN },
  {     5,  1001,    41,   3,   1, CPRT },
  {    18,     1,     0,  38,   0, BLK__UNIFIEDCANADIANABORIGINALSYLLABICS },
  {     2,  1667,     0,  13,   0, BLK__CJKCOMPAT },
  {    22,  7181,    26,   5,   3, SCX__LINA },
  {     0,  4674,   379,   5,  17, BLK__IDEOGRAPHICSYMBOLS },
  {    17,  4130,  2928,   4,   3, SC__GURU },
  {     0,  2041,  6343,   3,   7, ISGURMUKHI },
  {    12,  1759,     0,  19,   0, BLK__TRANSPORTANDMAP },
  {     1,  3781,  6270,   3,   6, IDS__FALSE },
  {    37,  2766,  5025,  10,   6, BLK__ETHIOPICEXTA },
  {     2,  5222,    61,   4,   2, ISKALI },
  {     0,  3639,  6404,   3,   7, ISUGARITIC },
  {     0,    75,  3112,   2,  15, SUTTONSIGNWRITING },
  {     1,  6161,  6187,   7,   5, ISPOSIXCNTRL },
  {     0,  5172,    39,   7,   3, INGREEKEXT },
  {     0,  3116,     0,  11,   0, SIGNWRITING },
  {    13,    81,     0,   2,   0, ME },
  {    12,  2973,  6270,   4,   6, TERM__FALSE },
  {     5,   522,    68,  28,   7, ISSUPPLEMENTALSYMBOLSANDPICTOGRAPHS },
  {     4,  5654,   760,   8,   7, LB__INFIXNUMERIC },
  {     0,  7096,  1762,   4,   2, CWCF__T },
  {     6,  2854,  7049,   4,   6, CCC__CCC107 },
  {     1,    85,     0,  10,   0, ARABICMATH },
  {     0,  2720,    75,   8,  10, CHEROKEESUPPLEMENT },
  {     2,  2193,     7,   3,   1, BRAI },
  {     7,  2250,     0,   4,   0, ISDI },
  {     0,    54,     0,   1,   0, M },
  {     3,  2854,     1,   6,   2, CCC__ATBL },
  {     2,  6990,  1922,   4,   2, AHEX__Y },
  {     0,  1577,    11,  12,   1, BLK__LATINEXTD },
  {    22,  2503,  1131,  13,  10, INMEETEIMAYEKEXTENSIONS },
  {     0,  6985,  6892,   5,   4, UIDEO__YES },
  {     1,  6478,     0,   5,   0, ALNUM },
  {     4,  6837,  4217,   6,   5, ISPERLSPACE },
  {     4,   842,  5755,   7,   7, BLK__PHOENICIAN },
  {    14,  7129,    30,   5,   1, ISXIDS },
  {    34,  1179,     0,   3,   0, ISP },
  {     3,    16,  6892,   2,   4, DI__YES },
  {     1,  4075,   737,   5,   6, OTHERNUMBER },
  {     0,  4619,  6078,   6,   6, SC__OLDITALIC },
  {    76,  5996,  2451,   5,   3, SCX__KNDA },
  {     0,  4283,  4012,   7,  12, SCX__OLDNORTHARABIAN },
  {     2,  1019,  1912,  16,   7, BLK__ANCIENTGREEKNUMBERS },
  {     0,  5932,     0,   5,   0, JOINC },
  {     0,  6281,  5717,   5,   2, SC__PHNX },
  {     0,  5452,    39,   5,   3, INIPAEXT },
  {     0,   410,  1731,  15,   9, INMISCELLANEOUSTECHNICAL },
  {     8,  2924,  6861,   3,   3, JG__KAF },
  {     0,    23,  6553,   2,   5, RI__TRUE },
  {     2,  1141,  5078,   4,   6, INPHAISTOS },
  {     4,  1784,  5813,   5,   4, INCJKEXTC },
  {     4,   223,   399,  12,  11, SUPPLEMENTALPUNCTUATION },
  {     2,   130,  6336,   3,   7, INGUJARATI },
  {     9,  6488,  5355,   4,   9, ISSORASOMPENG },
  {     0,   522,  6748,   3,   6, ISSIDDHAM },
  {     6,  3054,  3436,   2,   5, CYPRIOT },
  {     1,  1683,  5321,   3,  10, INDOMINOTILES },
  {    10,  3162,  5157,   4,   3, GCB__ZWJ },
  {    11,  4106,  5027,  10,   4, INCYRILLICEXTA },
  {     1,   368,  1374,   3,   3, CHAKMA },
  {     0,   120,     0,  29,   0, BLK__COMBININGDIACRITICALMARKS },
  {     0,  4811,   853,   4,   4, VEDICEXT },
  {     1,  2074,  1555,   5,   3, SCX__BENG },
  {     4,  2057,    13,  10,   1, ISLATINEXTA },
  {     3,  7244,  4058,   3,   6, BPT__CLOSE },
  {     0,  1581,     1,  13,   1, LATINEXTENDEDB },
  {     0,  6804,  1762,   5,   2, CWKCF__T },
  {     0,  2854,  7061,   4,   5, CCC__CCC12 },
  {     1,   286,    75,  27,  10, INCOMBININGDIACRITICALMARKSSUPPLEMENT },
  {     2,  6276,  2451,   4,   3, SC__KNDA },
  {     0,  4573,  5372,   4,   9, ISSYLOTINAGRI },
  {     0,  3416,     0,   9,   0, SEPARATOR },
  {     1,  4619,  7234,   4,   4, SC__OSAGE },
  {    15,  4404,  5701,   4,   9, GC__UNASSIGNED },
  {     0,  2295,  7038,   3,   3, ISTHAA },
  {     7,  1863,     0,  21,   0, INSCRIPTIONALPARTHIAN },
  {     2,  3536,  5027,   7,   4, MYANMAREXTA },
  {     0,  5846,  5740,   4,   8, ISKHAROSHTHI },
  {    97,  3614,   777,   7,   4, ETHIOPICSUP },
  {     0,  1929,  6553,   3,   5, HEX__TRUE },
  {     1,  6882,  4641,   5,   2, PATWS__N },
  {     0,  7423,  4641,   3,   2, PCM__N },
  {     7,  1751,     0,   4,   0, MODI },
  {    64,  1368,   668,   7,  27, BLK__CJKUNIFIEDIDEOGRAPHSEXTENSIONE },
  {     3,  6849,  5548,   4,  11, JG__FINALSEMKATH },
  {     1,  2516,  1998,  15,   8, INPC__TOPANDLEFTANDRIGHT },
  {     4,   410,   113,   6,   7, INMISCSYMBOLS },
  {     0,  1311,  6520,   3,   9, LB__AMBIGUOUS },
  {     2,  4814,  6310,   4,   6, ISBALINESE },
  {     0,   766,  6892,   2,   4, CI__YES },
  {     5,   972,    49,  10,   3, ISENCLOSEDCJK },
  {     8,  4705,     1,   3,   1, TAGB },
  {     2,    16,  1922,   2,   2, DI__Y },
  {    13,  1179,    90,   3,   2, ISPCM },
  {     1,  2973,  6553,   4,   5, TERM__TRUE },
  {    11,   818,   247,   6,   9, ISMATHOPERATORS },
  {     0,  4962,  7638,   3,   4, AGE__V20 },
  {     5,  6155,  1610,   6,   7, ISJOINCONTROL },
  {    77,  2074,  7214,   5,   4, SCX__BUHID },
  {     0,  6167,     0,   4,   0, XIDC },
  {    12,  1360,  6027,   8,   5, BLK__ARABICPFA },
  {    15,  7412,  4066,   3,   2, LOE__F },
  {     0,  7380,  1922,   3,   2, CWT__Y },
  {    72,   901,     0,  17,   0, VARIATIONSELECTOR },
  {     0,  6887,     0,   9,   0, QMARK__YES },
  {     0,   357,  4964,   3,   4, DESERET },
  {   264,  2716,    75,  12,   3, BLK__CHEROKEESUP },
  {    47,  2074,  6348,   4,   4, SCX__HIRA },
  {     1,  6558,  1604,   3,   6, SB__FORMAT },
  {    68,   256,  6754,   5,   6, BLK__SOYOMBO },
  {     1,  3054,     0,   8,   0, CYRILLIC },
  {     4,  4962,  7646,   3,   4, AGE__V30 },
  {    26,  2652,     2,   3,   1, ISNL },
  {     1,  6827,  6892,   5,   4, GREXT__YES },
  {     0,    75,  2458,   3,   7, SUPARROWSA },
  {     7,    85,     0,  35,   0, ARABICMATHEMATICALALPHABETICSYMBOLS },
  {   128,   522,  2973,   3,   4, ISSTERM },
  {    13,  3082,   113,  14,   7, BLK__LETTERLIKESYMBOLS },
  {     0,  2027,  3939,   3,   6, ISBRAILLE },
  {     0,   522,  2472,   5,   7, ISSUPARROWSC },
  {    74,  4034,   852,   7,   5, BLK__VEDICEXT },
  {     1,  2854,  7277,   4,   5, CCC__CCC20 },
  {     0,  2924,  2937,   3,   3, JG__YEH },
  {     2,  4506,   399,   7,  11, ISFINALPUNCTUATION },
  {     4,  7487,    41,   4,   1, SB__AT },
  {     4,  1023,  1912,  12,   7, ANCIENTGREEKNUMBERS },
  {     4,  2696,     0,   8,   0, SCX__MERO },
  {     0,  5304,  1047,   9,   6, BC__ARABICLETTER },
  {     2,  7383,     0,   3,   0, CWU },
  {     0,  2027,  3939,   3,  14, ISBRAILLEPATTERNS },
  {     0,  7490,     0,   4,   0, ADLM },
  {    18,  3869,  4237,  13,   6, JG__MANICHAEANDALETH },
  {    67,  2666,     0,   4,   0, ISYI },
  {     0,  3162,    41,   4,   1, GCB__T },
  {     3,  6263,  4803,   7,   6, LB__WORDJOINER },
  {    12,  4459,     0,  11,   0, INPC__BOTTOM },
  {     4,  7477,    23,   3,   1, KHAR },
  {     3,  7426,    13,   4,   3, SC__LANA },
  {     0,  2216,  6385,   4,   6, INSPECIALS },
  {    70,  5381,    13,   5,   1, CCC__DA },
  {     1,  1538,  6336,   5,   7, BLK__GUJARATI },
  {    25,  1683,     0,  16,   0, INDICNUMBERFORMS },
  {     2,  2854,  7055,   4,   6, CCC__CCC118 },
  {    60,   818,  1906,   4,   2, ISMARC },
  {    22,  1778,  6033,   7,   4, INARABICPFB },
  {     8,   316,  1057,   5,   3, ISCOMMON },
  {     8,  7523,     0,   4,   0, HANI },
  {     1,   103,  6270,   5,   6, ALPHA__FALSE },
  {    54,  1967,     1,  15,   1, INLATINEXTENDEDB },
  {     6,    37,     0,   2,   0, CS },
  {    64,  1311,    30,   3,   2, LB__SY },
  {     6,  2652,  7563,   3,   3, ISNKOO },
  {     1,  3146,    10,   4,   1, GC__PE },
  {     0,  4138,  3281,  10,   9, INSC__VOWELDEPENDENT },
  {     1,  2924,  6214,   3,   3, JG__QAF },
  {    10,   316,  2356,   4,   9, ISCOUNTINGROD },
  {     0,   439,  1731,  15,   9, ISMISCELLANEOUSTECHNICAL },
  {     0,  4742,    22,   4,   1, GC__SO },
  {    16,  1784,  6665,   5,   4, INCJKEXTF },
  {    93,  6558,  2579,   3,   5, SB__LOWER },
  {    12,    49,   113,   3,   7, CJKSYMBOLS },
  {     1,  7186,  7587,   5,   3, SCX__RUNR },
  {     1,  1929,  6270,   3,   6, HEX__FALSE },
  {     0,  3263,  5345,   4,   3, SC__SHAW },
  {     5,  2027,  1555,   3,   3, ISBENG },
  {    10,  7622,     0,   4,   0, ZINH },
  {     0,  6310,  3418,   6,   7, LINESEPARATOR },
  {     4,  2924,  7406,   3,   6, JG__YUDHHE },
  {    43,  3536,  3938,   2,   2, MYMR },
  {   139,  2924,  4896,   3,   3, JG__HEH },
  {     0,  1117,    23,   3,   1, TAKR },
  {     3,  6168,  1922,   3,   2, IDC__Y },
  {     1,  7096,  4066,   4,   2, CWCF__F },
  {     1,  2854,  7337,   4,   5, CCC__CCC32 },
  {     1,  3800,  4207,   4,  15, ISPATTERNWHITESPACE },
  {     6,  5429,     0,   5,   0, HST__L },
  {     0,  4024,  7226,   5,   4, BLK__OGHAM },
  {     0,  1557,  7521,   2,   2, GUJR },
  {     0,  3263,  5762,   4,   3, SC__SAUR },
  {     3,  6990,  6892,   4,   4, AHEX__YES },
  {     0,  6558,   760,   3,   7, SB__NUMERIC },
  {     1,  7191,  2001,   5,   5, VO__UPRIGHT },
  {     7,  3781,  6553,   4,   5, IDST__TRUE },
  {     2,  6168,  4641,   3,   2, IDC__N },
  {     1,  2540,   113,  16,   7, INYIJINGHEXAGRAMSYMBOLS },
  {     4,  2074,   487,   4,   3, SCX__HAN },
  {   161,  2579,  1403,   3,  10, LOWSURROGATES },
  {     6,  3600,     0,  12,   0, INDEVANAGARI },
  {     0,  5996,  7010,   6,   4, SCX__KHOJKI },
  {     1,  2924,  7745,   3,   3, JG__GAF },
  {     0,  7206,  6553,   4,   5, XIDS__TRUE },
  {     4,  1664,  1286,   3,   3, INTHAI },
  {     0,  1660,  1762,   3,   2, DEP__T },
  {     2,  3718,    75,  10,   3, ISCHEROKEESUP },
  {     0,   766,  4066,   2,   2, CI__F },
  {     0,  1662,     0,   2,   0, PO },
  {    29,  3904,  7417,   3,   2, WB__DQ },
  {     0,  3263,  5885,   4,   3, SC__SAMR },
  {     8,  4373,  1047,  12,   6, GC__LOWERCASELETTER },
  {     2,  4024,  5748,   7,   7, BLK__OLDPERSIAN },
  {     9,  4521,    75,   8,  10, ISLATIN1SUPPLEMENT },
  {     3,  5648,     0,   4,   0, HEBR },
  {     0,  1789,   777,   7,  11, ISARABICSUPPLEMENT },
  {     0,   487,     0,   3,   0, HAN },
  {     3,  3429,  2395,   7,   9, BOPOMOFOEXTENDED },
  {     1,  1179,     0,  13,   0, ISPHONETICEXT },
  {     4,  6263,    50,   4,   1, LB__WJ },
  {     0,  3779,   380,   4,  16, ISIDEOGRAPHICSYMBOLS },
  {     0,  1115,    39,   8,   3, KATAKANAEXT },
  {    18,  3249,  3988,   4,  14, SC__IMPERIALARAMAIC },
  {     0,  2924,  7721,   3,   4, JG__SEEN },
  {    19,  3904,   136,   3,   2, WB__CR },
  {     5,  2741,     0,   6,   0, COPTIC },
  {     2,  2074,  7562,   4,   3, SCX__NKO },
  {     0,    26,   994,   4,  25, INALPHABETICPRESENTATIONFORMS },
  {     0,  4986,    36,   5,   2, MANDAIC },
  {    11,  5846,  6053,   4,   7, ISKHUDAWADI },
  {     0,  2914,     0,   6,   0, ISGLAG },
  {     0,  2409,  4002,   8,   7, MEROITICCURSIVE },
  {     3,  4369,  6553,   4,   5, DASH__TRUE },
  {     1,  2095,  6725,   3,   6, ISOSMANYA },
  {     8,  2027,  2194,   3,   3, ISBRAH },
  {     5,    39,  4641,   3,   3, EXT__NO },
  {     0,    91,  6270,   4,   6, MATH__FALSE },
  {   114,  4538,  2396,   9,   9, ISMYANMAREXTENDEDB },
  {     0,  5797,     2,   5,   1, CCC__BL },
  {     3,  2623,   363,  16,   5, LOGICALORDEREXCEPTION },
  {     0,  3779,   348,   4,   9, ISIDEOGRAPHIC },
  {     0,  3741,    55,   4,   1, ISDEP },
  {     0,  5031,  6053,   6,   7, BLK__KHUDAWADI },
  {     3,  2312,  7210,   5,   4, SCX__ADLAM },
  {   128,   256,   399,  16,  11, BLK__SUPPLEMENTALPUNCTUATION },
  {    16,  2639,    43,   4,   2, ISMEND },
  {     1,  7380,  6553,   3,   5, CWT__TRUE },
  {    10,  2579,  4641,   5,   3, LOWER__NO },
  {    14,  4024,  6090,   7,   6, BLK__OLDTURKIC },
  {    84,  5182,  4337,   5,  11, INKANGXIRADICALS },
  {     4,  2854,  7252,   4,   5, CCC__CCC15 },
  {     0,    39,  1922,   3,   2, EXT__Y },
  {    19,  1476,  6738,   3,   4, SHARADA },
  {     1,  7181,  3639,   5,   3, SCX__LISU },
  {     1,  2924,  7406,   3,   4, JG__YUDH },
  {    20,  5202,     0,   7,   0, ISGRAPH },
  {     1,  2095,  6720,   4,   5, ISOLCHIKI },
  {     7,  4253,  6053,   2,   7, KHUDAWADI },
  {    29,   751,  4962,   2,   3, OSAGE },
  {     1,  1030,    39,   5,   3, GREEKEXT },
  {     1,  1179,  5078,   4,  10, ISPHAISTOSDISC },
  {     5,  1784,   552,   5,  17, INCJKUNIFIEDIDEOGRAPHS },
  {     8,  5510,  1650,   7,   8, ISCASEIGNORABLE },
  {     7,  1288,  7494,   3,   3, ISAGHB },
  {     0,  3904,  4075,   3,   5, WB__OTHER },
  {     0,  6901,    61,   5,   2, SC__BALI },
  {     0,  6837,  6266,   6,   4, ISPERLWORD },
  {    15,    57,  6398,   2,   6, TIFINAGH },
  {     0,  3920,  3416,  10,   9, BC__SEGMENTSEPARATOR },
  {     0,  1239,   113,   9,   7, INANCIENTSYMBOLS },
  {     3,   346,     0,  32,   0, IDEOGRAPHICDESCRIPTIONCHARACTERS },
  {     0,    61,  7218,   2,   3, LIMBU },
  {   196,  5854,  6178,   7,   4, XPOSIXALNUM },
  {     0,  4529,     0,   9,   0, ISLINEARB },
  {     0,  5854,   399,   6,   5, XPOSIXPUNCT },
  {    24,  5852,  5504,   8,   6, ISXPOSIXXDIGIT },
  {     0,  4130,  4075,   4,   3, SC__GOTH },
  {    34,  6887,  1042,   6,   2, QMARK__NO },
  {     1,  2251,     0,   2,   0, SD },
  {     0,  1288,  2099,   4,  18, ISANATOLIANHIEROGLYPHS },
  {     3,  2924,  2770,   4,   3, JG__BETH },
  {    99,  7535,     0,   4,   0, HMNG },
  {     0,   728,     0,   9,   0, CUNEIFORM },
  {    14,    64,  4340,   2,   8, YIRADICALS },
  {     4,  7091,  6832,   5,   5, CCC__VIRAMA },
  {     2,  1035,   113,   7,   7, MUSICALSYMBOLS },
  {    49,  3497,  3488,  11,   9, BLK__LINEARBIDEOGRAMS },
  {     0,   256,  2458,   7,   7, BLK__SUPARROWSA },
  {     4,  4729,     0,   4,   0, GC__N },
  {     0,  7426,  7434,   4,   4, SC__LIMBU },
  {     0,  5846,    85,   4,   2, ISKHAR },
  {     0,  3162,  5148,   4,  12, GCB__GLUEAFTERZWJ },
  {    13,  1581,    10,  13,   1, LATINEXTENDEDE },
  {     0,  6727,     0,   3,   0, ANY },
  {    12,   256,  2458,  16,   7, BLK__SUPPLEMENTALARROWSA },
  {     0,   522,  1683,   3,   3, ISSIND },
  {     1,  2951,  2106,  11,  11, SC__MEROITICHIEROGLYPHS },
  {     0,  6558,  7743,   3,   2, SB__XX },
  {     2,  4156,    23,   4,   2, ISCARI },
  {     1,  2558,  2579,  11,  10, CHANGESWHENLOWERCASED },
  {     8,   256,  1596,   5,  22, BLK__SHORTHANDFORMATCONTROLS },
  {     0,  4945,  2143,   4,   2, JG__TAH },
  {     0,  2927,  7215,   2,   3, BUHID },
  {     1,  2579,  4066,   5,   2, LOWER__F },
  {     5,  1789,   777,   7,   4, ISARABICSUP },
  {     0,  5298,  6379,   6,   6, SCX__MAHAJANI },
  {     2,  7148,  7142,   4,   6, NFKDQC__YES },
  {     2,    30,  5373,   3,   8, SYLOTINAGRI },
  {     8,  7148,  7418,   4,   4, NFKDQC__N },
  {    11,  2830,  1735,   2,   3, RUNIC },
  {     1,  4130,  6343,   4,   7, SC__GURMUKHI },
  {     2,  3308,     0,   8,   0, ISHANGUL },
  {     0,  1023,   113,   7,   7, ANCIENTSYMBOLS },
  {     1,    47,  4212,   2,  10, ISWHITESPACE },
  {     1,  7395,   555,   5,  13, ISUNIFIEDIDEOGRAPH },
  {     0,  7155,  4076,   4,   4, SB__OTHER },
  {     4,    47,  7756,   2,   2, ISZL },
  {     1,  3366,  1922,   5,   2, STERM__Y },
  {     0,  7181,  6957,   5,   6, SCX__LINEARA },
  {     0,  4366,  5506,   4,   4, GC__DIGIT },
  {     7,  1288,  5703,   3,   7, ISASSIGNED },
  {     0,   159,  6892,   2,   4, CE__YES },
  {     0,  6831,    73,   3,   1, TIRH },
  {    18,  3822,    79,   5,   2, ISTAILE },
  {     0,  2924,  4243,   3,   3, JG__LAM },
  {     0,  4329,  1586,   8,   9, BLK__KANAEXTENDEDA },
  {     9,  3308,     0,   6,   0, ISHANG },
  {     8,  4547,   399,   7,  11, ISOTHERPUNCTUATION },
  {     1,  1457,  4075,   5,   5, INSC__OTHER },
  {     1,  3753,  3072,   9,  10, ISETHIOPICEXTENDEDA },
  {     0,  7181,  7176,   5,   3, SCX__LEPC },
  {    16,   794,   247,  14,   9, INMATHEMATICALOPERATORS },
  {    21,  2558,  2599,  11,  10, CHANGESWHENUPPERCASED },
  {     2,    12,     0,   1,   0, C },
  {     1,    43,     0,   2,   0, ND },
  {     0,    47,     0,  38,   0, ISCJKCOMPATIBILITYIDEOGRAPHSSUPPLEMENT },
  {     1,  1778,    12,   7,   1, INARABIC },
  {     1,  1542,    30,  14,   1, GEOMETRICSHAPES },
  {    78,  6639,     0,   5,   0, BIDIC },
  {    17,  7412,  6270,   3,   6, LOE__FALSE },
  {     3,  4862,  6786,   4,   2, ISTIRH },
  {     0,  6168,     0,  10,   0, IDCONTINUE },
  {     1,  1459,    64,   3,   2, SC__YI },
  {     1,  6872,  2172,   7,   4, LB__NEXTLINE },
  {     2,    85,  1342,   6,  18, ARABICPRESENTATIONFORMSA },
  {     1,  4392,  1047,  12,   6, GC__TITLECASELETTER },
  {     0,  2318,   876,   4,   2, BC__LRE },
  {    72,  2386,    13,  18,   1, HANGULJAMOEXTENDEDA },
  {     2,  1581,     0,   5,   0, LATIN },
  {     0,  4674,    11,   5,   2, BLK__IDC },
  {     1,  4373,     0,   5,   0, GC__LO },
  {     1,  2766,   776,  10,   5, BLK__ETHIOPICSUP },
  {     2,  7426,  7023,   4,   5, SC__LYDIAN },
  {     0,    47,   610,   5,  27, ISCJKUNIFIEDIDEOGRAPHSEXTENSIONC },
  {     0,  4195,     0,   8,   0, ISLETTER },
  {    40,  4674,    39,   7,   3, BLK__IPAEXT },
  {    39,  6619,  6404,   5,   7, SCX__UGARITIC },
  {    14,  1094,  1014,  21,   5, HALFWIDTHANDFULLWIDTHFORMS },
  {     3,    54,    12,   1,   1, MC },
  {     0,  2951,   790,   4,   2, SC__MRO },
  {     4,   410,  1423,   6,  11, INMISCPICTOGRAPHS },
  {     1,  2880,   131,   2,   2, TFNG },
  {     2,    64,     0,   2,   0, YI },
  {     0,   636,     0,  20,   0, CJKUNIFIEDIDEOGRAPHS },
  {     0,  3705,  7241,   4,   3, INTAMIL },
  {     1,  6601,  2122,   5,   3, SCX__GLAG },
  {     0,  3869,  4255,  14,   5, JG__MANICHAEANTWENTY },
  {     5,  2924,  6207,   3,  10, JG__AFRICANQAF },
  {     1,    49,  5340,   3,   4, CJKEXTB },
  {     1,    47,   113,   5,   7, ISCJKSYMBOLS },
  {     1,   410,  3508,   6,  12, INMISCMATHSYMBOLSA },
  {    18,  6916,  5264,   5,   2, SC__TAML },
  {     0,  2074,  7576,   4,   4, SCX__QAAC },
  {    66,   108,   131,   2,   2, BENG },
  {     0,  2250,  5507,   4,   3, ISDIGIT },
  {    16,   972,    75,  18,   3, ISENCLOSEDALPHANUMSUP },
  {     9,  3554,   777,   9,  11, BLK__SYRIACSUPPLEMENT },
  {    22,  3054,    75,   8,   3, CYRILLICSUP },
  {     0,  3263,  6748,   4,   3, SC__SIDD },
  {     0,  6562,    34,   6,   4, SCX__ARABIC },
  {    25,  1581,    11,   8,   1, LATINEXTD },
  {     2,  2190,  6037,   4,   8, SC__BHAIKSUKI },
  {     3,  6724,  3838,   5,   7, ISMANICHAEAN },
  {     3,    65,  6553,   4,   5, IDEO__TRUE },
  {    20,   766,  1762,   2,   2, CI__T },
  {    34,  6613,  6766,   6,   5, SCX__TAGALOG },
  {     0,  4780,   136,   3,   2, INOCR },
  {     0,  4064,   399,   8,  11, GC__FINALPUNCTUATION },
  {    10,  5031,  5740,   6,   8, BLK__KHAROSHTHI },
  {     0,  5959,     1,   4,   1, LB__EB },
  {     0,  4780,  6090,   5,   6, INOLDTURKIC },
  {     0,  2295,  7596,   3,   3, ISTGLG },
  {     7,  1311,    23,   4,   1, LB__CR },
  {    20,  6133,  2391,   8,   5, HST__VOWELJAMO },
  {     5,     1,  7221,   4,   5, BLK__NUSHU },
  {   150,  2083,     0,   2,   0, PD },
  {     0,  3050,    75,  12,   3, BLK__CYRILLICSUP },
  {    32,   494,  2472,  14,   7, INSUPPLEMENTALARROWSC },
  {     0,  4750,  1654,  13,   4, HST__NOTAPPLICABLE },
  {     0,  6167,  6553,   4,   5, XIDC__TRUE },
  {     5,  6606,    13,   7,   1, SCX__JAVA },
  {     0,  7138,  5158,   4,   2, LB__ZWJ },
  {    44,  6845,  4690,   4,   9, VERTICALFORMS },
  {    10,  1179,    12,   3,   1, ISPC },
  {     1,  2074,  7450,   4,   4, SCX__NEWA },
  {     1,   494,  5354,   3,  10, INSORASOMPENG },
  {     1,  2250,    74,  13,   4, ISDIACRITICALSSUP },
  {     0,  1019,  2099,   6,  18, BLK__ANATOLIANHIEROGLYPHS },
  {    52,  2839,  6775,   7,   4, BLK__TAIVIET },
  {    16,   794,  6703,   4,   5, INMARCHEN },
  {     2,   522,  6763,   6,   3, ISSUPPUAB },
  {    38,  4138,  6452,   6,   6, INSC__VISARGA },
  {     0,  7758,     0,   2,   0, ZP },
  {    44,  2599,  6892,   5,   4, UPPER__YES },
  {    49,  5566,   147,   2,   2, BHKS },
  {     9,  2854,  7267,   4,   5, CCC__CCC18 },
  {     1,  1459,  1618,   3,   4, SC__HANG },
  {     0,  3930,     0,   9,   0, BLK__BAMUM },
  {     0,  3753,    12,   9,   1, ISETHIOPIC },
  {     2,  1751,   113,   8,   6, MODIFIERSYMBOL },
  {     0,   156,  1423,   4,  11, MISCPICTOGRAPHS },
  {    33,   439,   788,   6,   6, ISMISCARROWS },
  {     0,  1714,   728,  17,   9, BLK__EARLYDYNASTICCUNEIFORM },
  {     1,  3811,     0,   6,   0, ISRUMI },
  {     2,    47,  1528,   2,   1, ISZ },
  {     0,  7383,  1922,   3,   2, CWU__Y },
  {    11,   468,   247,   8,   9, BLK__MATHOPERATORS },
  {     0,  4718,    10,   4,   1, GC__ME },
  {     6,  5825,  7451,   4,   3, SC__NEWA },
  {     6,  6547,     8,   7,   1, PATSYN__F },
  {     0,  3263,  3485,   4,   3, SC__SARB },
  {     2,  3753,  5026,   9,   5, ISETHIOPICEXTA },
  {     1,  2074,  7554,   4,   4, SCX__NARB },
  {    12,  2924,  5860,   3,  11, JG__AFRICANNOON },
  {     5,  5667,  7590,   5,   3, SCX__SHRD },
  {     0,  5228,   192,   6,  10, ISMUSICALSYMBOLS },
  {    34,  4459,  2524,  11,   7, INPC__BOTTOMANDLEFT },
  {   256,  6990,  4641,   4,   3, AHEX__NO },
  {    65,  4283,  7234,   5,   4, SCX__OSAGE },
  {     0,  3429,  2395,   7,   4, BOPOMOFOEXT },
  {    17,   367,  4066,   5,   2, NCHAR__F },
  {     4,  2250,  5321,   3,  10, ISDOMINOTILES },
  {     0,  4538,  3938,   4,   2, ISMYMR },
  {     1,  5182,  7003,   4,   4, INKAITHI },
  {     0,  5667,  1652,   5,   3, SCX__SORA },
  {     9,  2854,  2001,  17,   5, CCC__ATTACHEDABOVERIGHT },
  {     1,  6458,  3455,   5,   7, INSMALLFORMS },
  {     4,  5188,   192,   6,  10, INMUSICALSYMBOLS },
  {    32,  6558,   149,   3,   2, SB__FO },
  {     1,  6276,  5740,   5,   8, SC__KHAROSHTHI },
  {    18,  5298,    43,   6,   2, SCX__MAND },
  {    64,    16,  1762,   2,   2, DI__T },
  {    17,  7152,  7455,   3,   4, NT__NONE },
  {     0,  1836,  1762,   7,   2, RADICAL__T },
  {     0,  1557,  6337,   2,   6, GUJARATI },
  {    65,  5035,  1382,   4,   8, KHMERSYMBOLS },
  {    46,    47,    66,  12,  12, ISCJKCOMPATIDEOGRAPHSSUP },
  {   101,  3497,    75,   6,   2, BLK__LISU },
  {     0,  1937,  2194,   3,   5, INBRAHMI },
  {     2,  7096,  6553,   4,   5, CWCF__TRUE },
  {     0,  4130,  7520,   4,   3, SC__GUJR },
  {     2,  2696,  4002,  12,   7, SCX__MEROITICCURSIVE },
  {     0,  7459,  7741,   4,   2, DT__SQR },
  {     0,  1459,  7535,   3,   4, SC__HMNG },
  {     2,  2149,    66,  12,  12, INCJKCOMPATIDEOGRAPHSSUP },
  {     1,  1311,   374,  26,   3, LB__CONDITIONALJAPANESESTARTER },
  {     0,  1778,  3072,   7,  10, INARABICEXTENDEDA },
  {     9,  2943,  1455,   4,   3, SC__ETHI },
  {     1,  4067,   399,   5,  11, FINALPUNCTUATION },
  {    90,  2924,   248,   3,   2, JG__PE },
  {     0,  2924,  6941,   3,   3, JG__HAH },
  {     2,  2250,  5321,   3,   5, ISDOMINO },
  {     7,  2924,  7482,   3,   5, JG__ZHAIN },
  {    42,    30,     0,   1,   0, S },
  {     0,   743,   767,  12,  14, BLK__ENCLOSEDIDEOGRAPHICSUP },
  {    24,  4329,  4337,   7,  11, BLK__KANGXIRADICALS },
  {     0,  2854,  3127,  12,   9, CCC__ATTACHEDBELOWLEFT },
  {     0,  6887,     8,   6,   1, QMARK__F },
  {     0,    47,  7508,   3,   3, ISCPRT },
  {     0,  2129,     0,  20,   0, INSCRIPTIONALPAHLAVI },
  {     1,   468,  5039,   6,  10, BLK__MAHJONGTILES },
  {    12,  5852,  2579,   8,   5, ISXPOSIXLOWER },
  {     0,  2579,  1762,   5,   2, LOWER__T },
  {     1,  1929,  4066,   3,   2, HEX__F },
  {   196,     1,  6404,   5,   7, BLK__UGARITIC },
  {     0,  1019,   113,  11,   7, BLK__ANCIENTSYMBOLS },
  {     1,  6896,    34,   5,   4, SC__ARABIC },
  {    12,  3822,  3563,   4,  14, ISTANGUTCOMPONENTS },
  {     8,  3366,  1762,   5,   2, STERM__T },
  {     0,  3162,     7,   5,   1, GCB__RI },
  {    47,  1459,  7511,   4,   3, SC__CYRL },
  {     0,  1179,   104,   4,   2, ISPHLP },
  {     1,  4962,  7733,   3,   3, AGE__NA },
  {     9,  2903,  1613,   5,   4, ISCONTROL },
  {    36,   522,  5345,   3,   3, ISSHAW },
  {     0,  3781,     0,   3,   0, IDS },
  {    65,   522,  6742,   3,   6, ISSHAVIAN },
  {     2,  3054,    12,  11,   1, CYRILLICEXTC },
  {     0,    85,    75,   6,  10, ARABICSUPPLEMENT },
  {     0,  3705,  6771,   5,   4, INTAITHAM },
  {     1,  6613,  7241,   6,   3, SCX__TAMIL },
  {     3,  3811,   193,  11,   9, ISRUMINUMERALSYMBOLS },
  {    20,     1,  6069,   4,   9, BLK__NEWTAILUE },
  {     0,  5298,  6698,   6,   5, SCX__MANDAIC },
  {     0,   522,  2465,  14,   7, ISSUPPLEMENTALARROWSB },
  {    32,  3146,    22,   4,   1, GC__PO },
  {     9,  1311,  4600,   6,  12, LB__CONTINGENTBREAK },
  {     0,  4674,  1131,   7,  10, BLK__IPAEXTENSIONS },
  {     2,  2190,  3665,   6,   4, SC__BRAILLE },
  {    64,    47,  5340,   5,   4, ISCJKEXTB },
  {     3,  3930,    75,   9,   3, BLK__BAMUMSUP },
  {     5,  6562,  6304,   6,   6, SCX__ARMENIAN },
  {    15,  6882,  4066,   5,   2, PATWS__F },
  {     2,  3639,  6791,   3,   6, ISUCASEXT },
  {    66,  4186,     0,   4,   0, IDSB },
  {     5,  5637,     1,   4,   1, LB__BB },
  {     5,   522,  5762,   3,   3, ISSAUR },
  {    17,   316,  2886,   5,  17, ISCOMPOSITIONEXCLUSION },
  {     0,  5667,  6748,   5,   6, SCX__SIDDHAM },
  {     0,   124,  2728,   9,   9, COMBININGHALFMARKS },
  {    63,  7244,   123,   3,   2, BPT__C },
  {     0,  6724,     7,   5,   1, ISMANI },
  {    33,  2074,  3939,   5,   3, SCX__BRAI },
  {     0,  6133,     0,   5,   0, HST__V },
  {     2,  5662,  5258,   5,   7, SC__MALAYALAM },
  {     6,  6502,     0,   6,   0, SYRIAC },
  {     4,  1475,  1014,  23,   5, ISHALFWIDTHANDFULLWIDTHFORMS },
  {     0,  2854,  5099,   4,  12, CCC__NOTREORDERED },
  {     0,  1660,  6892,   3,   4, DEP__YES },
  {     0,  5005,  6104,   4,   8, SC__PAUCINHAU },
  {     0,  7426,  3639,   4,   3, SC__LISU },
  {     0,  4329,  6689,   7,   4, BLK__KANNADA },
  {     1,   819,  3455,   3,   7, SMALLFORMS },
  {    66,   256,  6763,   8,   3, BLK__SUPPUAB },
  {     5,   256,  5354,   5,  10, BLK__SORASOMPENG },
  {    21,  1789,   156,   4,   2, ISARMI },
  {     0,    55,  6097,   2,   7, PALMYRENE },
  {     0,  2830,   193,   9,   9, RUMINUMERALSYMBOLS },
  {     0,   736,     0,   2,   0, MN },
  {     0,  1784,   389,   5,  21, INCJKSYMBOLSANDPUNCTUATION },
  {     1,   156,  4893,   2,   2, MIAO },
  {    29,  4742,   114,   4,   5, GC__SYMBOL },
  {    20,  3970,   115,  10,   5, CURRENCYSYMBOLS },
  {     1,  2924,  7472,   3,   5, JG__GAMAL },
  {     0,  4642,   144,  10,   4, NONSPACINGMARK },
  {     3,  3375,  7508,   5,   3, SCX__CPRT },
  {     0,   494,  6748,   3,   6, INSIDDHAM },
  {    11,   124,   113,  28,   7, COMBININGDIACRITICALMARKSFORSYMBOLS },
  {     9,  7380,  6270,   3,   6, CWT__FALSE },
  {     7,  3375,  3106,   6,   4, SCX__CARIAN },
  {     8,  6613,  7038,   5,   5, SCX__THAANA },
  {   371,   260,    68,  26,   7, SUPPLEMENTALSYMBOLSANDPICTOGRAPHS },
  {    27,  3678,   131,   5,   2, SC__MONG },
  {     2,  1581,    13,   8,   1, LATINEXTA },
  {     1,   494,  6112,   3,   8, INSAMARITAN },
  {     0,  6612,  6553,   2,   5, VS__TRUE },
  {     0,   316,     0,  27,   0, ISCOMBININGDIACRITICALMARKS },
  {    12,  6613,    79,   6,   2, SCX__TALE },
  {    20,  2621,     0,   4,   0, ISLO },
  {     0,   494,  2458,   5,   7, INSUPARROWSA },
  {     5,  2621,   363,  18,   5, ISLOGICALORDEREXCEPTION },
  {     1,  4311,  1683,   6,  16, COMMONINDICNUMBERFORMS },
  {    40,   152,  3520,   8,  12, BLK__MISCMATHSYMBOLSB },
  {     1,  2639,    39,  13,   3, ISMEETEIMAYEKEXT },
  {     1,  3781,  4641,   4,   3, IDST__NO },
  {     0,  1778,   777,   7,   4, INARABICSUP },
  {    76,  4075,  1047,   5,   6, OTHERLETTER },
  {     0,  2682,  7497,   4,   3, SC__AVST },
  {    93,  2927,    25,   2,   2, BUGI },
  {    68,  5193,  2142,   9,   7, INPSALTERPAHLAVI },
  {     0,  2041,  2928,   3,   3, ISGURU },
  {     8,  1311,  6864,   3,   8, LB__LINEFEED },
  {     0,   636,    12,  29,   1, CJKUNIFIEDIDEOGRAPHSEXTENSIONC },
  {     0,   179,     0,   2,   0, PI },
  {     0,  1179,    11,   3,   1, ISPD },
  {     0,  5541,  3238,   6,   9, ISQUOTATIONMARK },
  {     2,  1459,  6348,   3,   4, SC__HIRA },
  {     0,  2078,  2979,   3,  18, BC__FIRSTSTRONGISOLATE },
  {     3,  1141,  5755,   5,   7, INPHOENICIAN },
  {     7,  2854,  5391,   4,  11, CCC__KANAVOICING },
  {    18,  7459,     1,   5,   1, DT__SUB },
  {    26,  3536,     0,   7,   0, MYANMAR },
  {   149,  5402,     6,  10,   1, DT__NONCANON },
  {    15,  3653,  1735,   4,   3, INRUNIC },
  {     0,  7395,  1658,   5,   4, ISUNICODE },
  {     0,  2599,  1922,   5,   2, UPPER__Y },
  {    12,  6372,  6358,   6,   6, BLK__JAMOEXTA },
  {   425,  2652,  1658,  14,   9, ISNONCHARACTERCODEPOINT },
  {     0,  1042,     0,   2,   0, NO },
  {     1,  7164,     0,   4,   0, HATR },
  {     0,  1967,    12,  10,   1, INLATINEXTC },
  {    20,  2943,  6674,   4,   6, SC__ELBASAN },
  {     5,  5823,   738,   6,   5, INSC__NUMBER },
  {     0,  4678,  1131,   3,  10, IPAEXTENSIONS },
  {    57,  3587,  1912,  13,   7, INCOPTICEPACTNUMBERS },
  {     2,    26,  7210,   3,   4, INADLAM },
  {     1,   410,  4893,   4,   2, INMIAO },
  {     1,  3800,  5530,   4,  11, ISPATTERNSYNTAX },
  {    16,  2278,   145,  10,   3, ISSPACINGMARK },
  {   128,  6472,  1599,   4,  19, SHORTHANDFORMATCONTROLS },
  {     2,  3501,     0,   7,   0, LINEARB },
  {    16,    78,  5089,   2,  10, PLAYINGCARDS },
  {     1,  1500,   144,  22,   4, PREPENDEDCONCATENATIONMARK },
  {    18,  2318,  2990,  14,   7, BC__LEFTTORIGHTISOLATE },
  {    28,  5922,     0,   4,   0, JT__D },
  {     1,  1476,   792,   3,   1, SHAW },
  {     3,  3770,   495,   9,   4, ISGEORGIANSUP },
  {    15,  4416,  2395,   9,   4, INBOPOMOFOEXT },
  {    35,  4856,   399,   6,  11, ISOPENPUNCTUATION },
  {     0,  1836,  4066,   7,   2, RADICAL__F },
  {     3,  3050,    13,  20,   1, BLK__CYRILLICEXTENDEDA },
  {     2,  2190,     7,   6,   1, SC__BRAI },
  {    21,  4619,  6720,   5,   5, SC__OLCHIKI },
  {     0,  6916,  5045,   5,   3, SC__TAILE },
  {     0,  4317,    39,   9,   3, BLK__GREEKEXT },
  {     0,  2639,     0,  13,   0, ISMEETEIMAYEK },
  {     8,   103,  6553,   5,   5, ALPHA__TRUE },
  {     0,  6601,  1031,   5,   4, SCX__GREEK },
  {   128,  5852,  5505,   3,   5, ISXDIGIT },
  {     3,   724,    30,  19,   1, BLK__CUNEIFORMNUMBERS },
  {     2,  4674,   379,   5,  31, BLK__IDEOGRAPHICSYMBOLSANDPUNCTUATION },
  {    10,    47,  6633,   2,   6, ISWSPACE },
  {     0,  1929,     0,   3,   0, HEX },
  {     8,  5855,  4217,   5,   5, POSIXSPACE },
  {     2,  1699,  5321,   5,   5, BLK__DOMINO },
  {    28,   439,  3508,   6,  12, ISMISCMATHSYMBOLSA },
  {     8,  1459,  7614,   3,   4, SC__YIII },
  {     6,  2124,    93,   2,   2, GOTH },
  {     1,  1288,  7491,   3,   3, ISADLM },
  {    16,  3054,     0,  17,   0, CYRILLICEXTENDEDC },
  {     1,  5667,  6748,   5,   3, SCX__SIDD },
  {     0,  5212,  2741,  10,   6, ISGREEKANDCOPTIC },
  {     1,  7412,  4641,   3,   2, LOE__N },
  {     0,  3869,  4585,  13,   5, JG__MANICHAEANGIMEL },
  {     0,   103,  1762,   5,   2, ALPHA__T },
  {     0,  2914,    36,  10,   2, ISGLAGOLITIC },
  {     0,  4529,    13,   5,   1, ISLINA },
  {   150,  6168,  6553,   3,   5, IDC__TRUE },
  {     3,  4186,  6270,   4,   6, IDSB__FALSE },
  {    14,  2839,  3563,   6,   4, BLK__TANGUT },
  {   120,   842,   866,   5,  13, BLK__PRIVATEUSEAREA },
  {    26,  1699,  1379,  15,  11, BLK__DIACRITICALSFORSYMBOLS },
  {     0,  2924,  7400,   3,   6, JG__LAMADH },
  {     0,  2833,  6404,   3,   7, INUGARITIC },
  {     0,  1577,    10,  17,   1, BLK__LATINEXTENDEDE },
  {     6,   286,   113,  30,   7, INCOMBININGDIACRITICALMARKSFORSYMBOLS },
  {   128,  2149,     0,  11,   0, INCJKCOMPAT },
  {     2,  3753,   853,   9,   4, ISETHIOPICEXT },
  {     7,  4837,     0,  11,   0, ISLOWERCASE },
  {     9,  5483,  7599,   4,   3, SC__TIBT },
  {     0,  4138,     0,  10,   0, INSC__VOWEL },
  {     6,  1660,     0,   3,   0, DEP },
  {     2,  6916,  6974,   5,   5, SC__TAIVIET },
  {    18,  2924,  5187,   3,   3, JG__AIN },
  {     0,  5502,     0,   8,   0, HEXDIGIT },
  {     2,   105,    25,   3,   1, PHAG },
  {     6,  3162,     2,   4,   1, GCB__L },
  {     0,  3425,  2395,  11,   4, BLK__BOPOMOFOEXT },
  {     0,  1360,   776,   8,  12, BLK__ARABICSUPPLEMENT },
  {     0,  3869,  4915,  13,   4, JG__MANICHAEANKAPH },
  {     0,   747,    75,  20,  10, ENCLOSEDALPHANUMERICSUPPLEMENT },
  {    98,  4490,    22,   9,   1, ISBOPOMOFO },
  {     0,     1,  1632,   5,   3, BLK__UCAS },
  {     6,  1751,  1047,   8,   6, MODIFIERLETTER },
  {     0,  1029,  3145,   2,   2, TGLG },
  {     0,   201,  6115,   4,   5, SAMARITAN },
  {     4,  1577,  7023,   5,   5, BLK__LYDIAN },
  {   328,  2924,  2009,   4,   2, JG__BEH },
  {     7,   794,   247,   6,   9, INMATHOPERATORS },
  {    20,  3781,  1762,   3,   2, IDS__T },
  {     0,  3400,  3393,   3,   7, VO__ROTATED },
  {     5,  6581,  6329,   5,   7, SCX__DUPLOYAN },
  {    26,  1784,   552,   5,  27, INCJKUNIFIEDIDEOGRAPHSEXTENSIONA },
  {     0,  2924,   754,   3,   3, JG__DAL },
  {     9,    47,     0,  18,   0, ISCJKCOMPATIBILITY },
  {     5,  1557,  2830,   2,   2, GURU },
  {     0,  1311,   175,   3,   2, LB__SA },
  {     0,  2720,     0,   8,   0, CHEROKEE },
  {    26,  5852,   104,   9,   4, ISXPOSIXALPHA },
  {     3,  7129,  6170,   5,   8, ISXIDCONTINUE },
  {   316,  1721,     7,   3,   1, LYDI },
  {     6,  2190,     0,   9,   0, SC__BRAHMI },
  {     7,  2652,  6070,   3,   8, ISNEWTAILUE },
  {     0,   494,  5364,   5,   8, INSUPERANDSUB },
  {     4,  2160,    30,  13,   1, INDIACRITICALS },
  {     0,  4425,  1403,   6,  10, INHIGHSURROGATES },
  {    44,  1368,  5813,   7,   4, BLK__CJKEXTC },
  {     0,  1951,    38,  16,   9, INGEOMETRICSHAPESEXTENDED },
  {     0,  2318,   790,   4,   2, BC__LRO },
  {    33,  1141,    30,  19,   1, INPHONETICEXTENSIONS },
  {     0,  7155,  1047,   4,   6, SB__OLETTER },
  {     7,  3779,   247,  12,   8, ISIDSTRINARYOPERATOR },
  {     9,  3904,  6437,   3,   3, WB__GAZ },
  {     1,  6568,  7500,   6,   2, SCX__BATK },
  {     0,   410,   183,  15,  20, INMISCELLANEOUSMATHEMATICALSYMBOLSA },
  {     1,  4024,  7234,   5,   4, BLK__OSAGE },
  {    24,  1360,    89,   8,  31, BLK__ARABICMATHEMATICALALPHABETICSYMBOLS },
  {    22,  4945,  4899,  13,   4, JG__TEHMARBUTAGOAL },
  {     0,  3375,    23,   6,   2, SCX__CARI },
  {     0,   522,   863,  13,  17, ISSUPPLEMENTARYPRIVATEUSEAREAA },
  {     0,  4742,     0,   4,   0, GC__S },
  {     2,  6060,     0,   9,   0, NABATAEAN },
  {    18,  2190,  6322,   4,   3, SC__BUGI },
  {     0,  4024,  7230,   5,   4, BLK__ORIYA },
  {     0,  4770,   113,  10,   7, INCURRENCYSYMBOLS },
  {     0,  5690,     2,   4,   1, WB__HL },
  {     2,    47,  7101,   3,   3, ISCWCM },
  {     1,  3869,  5569,   5,  10, JG__MALAYALAMLLA },
  {    22,  6502,    75,   6,  10, SYRIACSUPPLEMENT },
  {   238,  6879,  7418,   3,   4, NFCQC__N },
  {     1,  1141,  5078,   4,  10, INPHAISTOSDISC },
  {    98,  1141,  5088,   3,  11, INPLAYINGCARDS },
  {     0,  4619,  5748,   6,   7, SC__OLDPERSIAN },
  {     2,  7181,  1937,   5,   3, SCX__LINB },
  {     4,  2854,  7079,   4,   6, CCC__CCC132 },
  {     2,  5141,  3416,   7,   9, GC__LINESEPARATOR },
  {     0,  7395,     8,   5,  31, ISUNIFIEDCANADIANABORIGINALSYLLABICS },
  {   133,  6613,  6785,   5,   3, SCX__TIRH },
  {    39,   743,    75,  20,   3, BLK__ENCLOSEDALPHANUMSUP },
  {     0,  4024,  4015,  10,   9, BLK__OLDSOUTHARABIAN },
  {   165,   367,     0,   5,   0, NCHAR },
  {   233,  3375,  1063,   5,   5, SCX__COPTIC },
  {     0,  2074,  7602,   4,   3, SCX__VAI },
  {     1,   766,  4641,   2,   2, CI__N },
  {     1,  1836,  6553,   7,   5, RADICAL__TRUE },
  {     3,   316,   144,  11,   4, ISCOMBININGMARK },
  {     1,  5212,     0,   7,   0, ISGREEK },
  {     1,   901,    74,  17,  11, VARIATIONSELECTORSSUPPLEMENT },
  {     4,  1699,  2820,   6,   6, BLK__DINGBATS },
  {     0,   636,     8,  29,   1, CJKUNIFIEDIDEOGRAPHSEXTENSIONF },
  {     0,  5932,  6553,   5,   5, JOINC__TRUE },
  {   257,  1179,     7,   3,   1, ISPI },
  {     0,  1577,    13,  12,   1, BLK__LATINEXTA },
  {     0,   766,  1922,   2,   2, CI__Y },
  {     0,   818,  5258,   4,   7, ISMALAYALAM },
  {     2,  4275,     0,   5,   0, LB__CL },
  {     4,  2312,  7447,   5,   3, SCX__AHOM },
  {     0,  6613,  6785,   5,   6, SCX__TIRHUTA },
  {     5,  6901,  7500,   5,   2, SC__BATK },
  {     0,  4450,  1586,   9,   9, INMYANMAREXTENDEDA },
  {     0,   751,  6726,   2,   5, OSMANYA },
  {    11,  5817,  7010,   4,   4, INKHOJKI },
  {    16,  6488,    70,   4,   2, ISSORA },
  {     0,  3146,   400,   4,   4, GC__PUNCT },
  {     7,  4195,   113,  12,   7, ISLETTERLIKESYMBOLS },
  {    65,   256,   880,  15,  17, BLK__SUPPLEMENTARYPRIVATEUSEAREAB },
  {     1,  2854,  2708,   4,   2, CCC__OV },
  {     0,  6168,  4641,   3,   3, IDC__NO },
  {     1,  3705,     0,  13,   0, INTAIXUANJING },
  {     0,  2687,  2103,   9,  14, SCX__EGYPTIANHIEROGLYPHS },
  {     0,  6910,    13,   6,   1, SC__JAVA },
  {     0,  4573,   246,   4,   2, ISSYLO },
  {    10,  3400,     0,   5,   0, VO__TR },
  {     0,  2696,  5059,   6,  10, SCX__MENDEKIKAKUI },
  {     0,   439,  1731,   6,   9, ISMISCTECHNICAL },
  {     0,  4474,   247,   9,   9, INSUPMATHOPERATORS },
  {    10,  3162,   251,  17,   4, GCB__REGIONALINDICATOR },
  {     2,  1637,  6078,   3,   6, OLDITALIC },
  {     4,    47,    66,  12,   9, ISCJKCOMPATIDEOGRAPHS },
  {     1,  2516,     0,  15,   0, INPC__TOPANDLEFT },
  {     1,    26,  5015,   4,  10, INALPHABETICPF },
  {    11,  4780,  6720,   4,   5, INOLCHIKI },
  {     4,  3208,  1047,  10,   7, INMODIFIERLETTERS },
  {     0,  5222,    75,   6,  10, ISKANASUPPLEMENT },
  {    17,  5996,  6950,   5,   6, SCX__KANNADA },
  {     0,  3800,  1274,   4,   2, ISPAUC },
  {     4,  3781,  1877,   4,   3, IDSTART },
  {    14,  2479,  6188,   4,   4, GC__CNTRL },
  {    33,  5996,  4932,   6,   2, SCX__KHOJ },
  {     8,  5412,   737,   9,   6, GC__LETTERNUMBER },
  {     0,  6831,  6787,   3,   4, TIRHUTA },
  {    65,  3366,     0,   5,   0, STERM },
  {   128,  4652,  1912,  10,   7, BLK__AEGEANNUMBERS },
  {     9,  6424,    73,   3,   1, EA__H },
  {    11,  6167,     0,  11,   0, XIDCONTINUE },
  {    98,  2766,  3071,  10,  11, BLK__ETHIOPICEXTENDEDA },
  {     4,  3354,     0,  11,   0, ISSUNDANESE },
  {     0,  3811,  7584,   3,   3, ISRJNG },
  {     0,  4166,     2,   5,   1, ISCYRL },
  {    43,  2854,  7043,   4,   6, CCC__CCC103 },
  {    28,  3375,   729,   5,   8, SCX__CUNEIFORM },
  {     0,  6424,   792,   3,   1, EA__W },
  {     1,  3082,  7014,   6,   4, BLK__LEPCHA },
  {     0,  3375,  2721,   5,   3, SCX__CHER },
  {     0,  2951,  5059,   5,  10, SC__MENDEKIKAKUI },
  {     1,  4348,  6708,   6,   5, BLK__MULTANI },
  {     2,  1789,    12,   7,   1, ISARABIC },
  {   132,  2652,  7222,   3,   4, ISNUSHU },
  {    11,  7100,  6553,   4,   5, CWCM__TRUE },
  {     0,   346,     0,  11,   0, IDEOGRAPHIC },
  {     2,  3425,    22,  11,   1, BLK__BOPOMOFO },
  {     0,    49,     0,   3,   0, CJK },
  {     5,  4450,     0,   9,   0, INMYANMAR },
  {     8,  7412,  6553,   3,   5, LOE__TRUE },
  {     0,   972,  6674,   3,   6, ISELBASAN },
  {   253,  7610,     0,   4,   0, XSUX },
  {     0,  6633,  1922,   6,   2, WSPACE__Y },
  {     3,  1434,  1014,  23,   5, INHALFWIDTHANDFULLWIDTHFORMS },
  {   101,    49,     0,  16,   0, CJKCOMPATIBILITY },
  {    13,  3375,  7159,   5,   5, SCX__CHAKMA },
  {   128,  6633,  4641,   6,   2, WSPACE__N },
  {    53,  3653,     0,   6,   0, INRUMI },
  {     0,  1610,     0,   7,   0, CONTROL },
  {     0,  7630,     0,   4,   0, ZZZZ },
  {     0,   103,  1922,   5,   2, ALPHA__Y },
  {    36,  3054,     2,   3,   1, CYRL },
  {    40,  3612,  3072,   9,  10, INETHIOPICEXTENDEDA },
  {     1,   747,  1044,   8,  19, ENCLOSEDCJKLETTERSANDMONTHS },
  {     1,  2903,  3954,   5,  12, ISCONTROLPICTURES },
  {     0,  6612,     0,   2,   0, VS },
  {     0,  4425,  1394,   7,  19, INHIGHPRIVATEUSESURROGATES },
  {    15,  2479,     0,   5,   0, GC__CO },
  {     0,  2074,  3939,   5,   6, SCX__BRAILLE },
  {     8,  3930,  5710,   6,   8, BLK__BASICLATIN },
  {     0,  4547,     0,   7,   0, ISOTHER },
  {   138,  2318,     0,  14,   0, BC__LEFTTORIGHT },
  {     0,  3705,  6766,   4,   5, INTAGALOG },
  {     0,  2057,     1,  15,   1, ISLATINEXTENDEDB },
  {   160,  3869,  4580,  13,   5, JG__MANICHAEANALEPH },
  {     5,   377,    11,   3,   1, SIDD },
  {     0,  3639,    65,   3,   4, ISUIDEO },
  {     0,  2639,     0,   4,   0, ISME },
  {     0,  5188,  6708,   4,   5, INMULTANI },
  {     0,  2854,  7302,   4,   5, CCC__CCC25 },
  {     1,  1090,  3450,   8,  12, BLK__HALFANDFULLFORMS },
  {     0,  1475,   144,   6,   5, ISHALFMARKS },
  {    22,    47,  7760,   2,   2, ISZS },
  {     1,  1407,    54,   3,   1, OGAM },
  {    15,  1771,    25,   3,   1, TANG },
  {     0,    75,  2465,   3,   7, SUPARROWSB },
  {     4,  2830,   862,   2,   2, RUNR },
  {    14,  5381,  3127,  10,   5, CCC__DOUBLEBELOW },
  {   243,  2696,  2106,  12,  11, SCX__MEROITICHIEROGLYPHS },
  {   133,  4962,  7666,   3,   4, AGE__V50 },
  {     2,  4064,  1605,   4,   5, GC__FORMAT },
  {     4,  5402,    85,   4,   2, DT__NAR },
  {     0,  3375,  4312,   5,   5, SCX__COMMON },
  {     0,  3308,    22,   5,   1, ISHANO },
  {     4,  5381,     1,   5,   1, CCC__DB },
  {     0,   128,   379,   3,  31, INIDEOGRAPHICSYMBOLSANDPUNCTUATION },
  {     0,  4962,  7678,   3,   4, AGE__V60 },
  {    36,   842,    30,  21,   1, BLK__PHONETICEXTENSIONS },
  {     2,  2095,  2809,   3,  17, ISORNAMENTALDINGBATS },
  {     0,  4075,   113,   5,   6, OTHERSYMBOL },
  {     0,  5667,  3117,   5,  10, SCX__SIGNWRITING },
  {     0,  4355,  2142,  11,   7, BLK__PSALTERPAHLAVI },
  {     0,   818,   146,   4,   2, ISMARK },
  {     0,   747,  5115,   6,   7, ENCLOSINGMARK },
  {     0,  2598,     2,   3,   1, DUPL },
  {     7,  4598,  6786,   4,   5, INTIRHUTA },
  {     5,  1141,    74,  19,  11, INPHONETICEXTENSIONSSUPPLEMENT },
  {     0,  6276,  6053,   5,   7, SC__KHUDAWADI },
  {     0,  5402,     1,   4,   1, DT__NB },
  {     0,   766,     0,   2,   0, CI },
  {     8,  2951,    43,   5,   2, SC__MEND },
  {     1,  2652,  6061,   3,   8, ISNABATAEAN },
  {     0,   120,   113,  32,   7, BLK__COMBININGDIACRITICALMARKSFORSYMBOLS },
  {   277,  3781,     0,   4,   0, IDST },
  {     0,  3375,  6925,   5,   6, SCX__CYPRIOT },
  {     0,  3543,   247,  11,   9, BLK__SUPMATHOPERATORS },
  {     0,   103,     0,  10,   0, ALPHABETIC },
  {     0,  2149,  1818,  12,  11, INCJKCOMPATIBILITYFORMS },
  {    83,  3741,  6669,   4,   5, ISDESERET },
  {    14,  6879,  7418,   3,   5, NFCQC__NO },
  {     0,  3400,  3393,  14,   7, VO__TRANSFORMEDROTATED },
  {     2,  2149,    59,  12,  26, INCJKCOMPATIBILITYIDEOGRAPHSSUPPLEMENT },
  {    73,  7162,  5040,   3,   9, MAHJONGTILES },
  {    38,  2074,  2386,   4,   6, SCX__HANGUL },
  {     2,  7244,  4641,   3,   2, BPT__N },
  {    19,  3290,    75,  11,  10, INSUNDANESESUPPLEMENT },
  {     1,  2479,  1613,   6,   4, GC__CONTROL },
  {    54,  2421,  1047,  12,   7, MODIFIERTONELETTERS },
  {     0,    16,     0,   3,   0, DIA },
  {    79,  2295,  7593,   3,   3, ISTFNG },
  {     0,  4184,     0,   6,   0, ISIDSB },
  {     1,  1368,  6661,   7,   4, BLK__CJKEXTD },
  {     0,  6612,  6270,   2,   6, VS__FALSE },
  {     0,    85,  5027,   6,   4, ARABICEXTA },
  {     0,  2233,     0,  17,   0, INTRANSPORTANDMAP },
  {     5,   410,   788,  25,   6, INMISCELLANEOUSSYMBOLSANDARROWS },
  {    16,  2854,  7332,   4,   5, CCC__CCC31 },
  {    23,  7383,  6270,   3,   6, CWU__FALSE },
  {     0,  5823,  4798,   6,  11, INSC__NUMBERJOINER },
  {     1,  2405,  2106,  12,  11, BLK__MEROITICHIEROGLYPHS },
  {     1,  1090,  1763,   6,   4, BLK__HATRAN },
  {     0,  5996,    85,   6,   2, SCX__KHAR },
  {     0,    69,  6681,   3,   4, GRANTHA },
  {     0,  2251,  4641,   2,   3, SD__NO },
  {     0,    39,    23,   7,   1, EXTENDER },
  {    12,  2843,  6771,   3,   4, TAITHAM },
  {     0,  6601,  6937,   5,   6, SCX__GRANTHA },
  {     0,   105,  6732,   3,   4, PHAGSPA },
  {     5,  2516,  2001,  11,   5, INPC__TOPANDRIGHT },
  {    25,  1123,    75,  18,  10, PHONETICEXTENSIONSSUPPLEMENT },
  {    29,  2589,  1047,   9,   6, TITLECASELETTER },
  {   227,  1457,  6141,   5,   8, INSC__AVAGRAHA },
  {     1,  3612,  5026,   9,   5, INETHIOPICEXTA },
  {   196,  4222,   251,  15,   4, ISREGIONALINDICATOR },
  {     2,  3904,    79,   3,   2, WB__LE },
  {     1,    47,  6071,   3,   2, ISCWT },
  {     0,  1542,    38,  14,   4, GEOMETRICSHAPESEXT },
  {     1,  5543,  3238,   4,   9, QUOTATIONMARK },
  {     0,     1,  6060,   4,   9, BLK__NABATAEAN },
  {     2,  1062,  5355,   2,   9, SORASOMPENG },
  {     2,     2,  7754,   1,   1, L__ },
  {     0,  2311,     0,   2,   0, PS },
  {     0,  6446,  1762,   6,   2, HYPHEN__T },
  {     0,  4884,  1129,   5,  12, ISVEDICEXTENSIONS },
  {    30,  4443,  3489,   8,   8, LINEARBIDEOGRAMS },
  {     0,  6619,  6979,   5,   6, SCX__UNKNOWN },
  {     0,  5645,    31,   4,   1, LB__HY },
  {    11,  6624,  5679,   4,  11, WB__EXTENDNUMLET },
  {    18,  6348,     0,   8,   0, HIRAGANA },
  {     1,  5852,  6192,   8,   5, ISXPOSIXPRINT },
  {     0,  1434,   144,   6,   5, INHALFMARKS },
  {     0,   751,    91,   2,   2, OSMA },
  {     2,  6581,  6931,   5,   6, SCX__DESERET },
  {     1,  1667,    58,  13,  27, BLK__CJKCOMPATIBILITYIDEOGRAPHSSUPPLEMENT },
  {   162,  2682,  7494,   4,   3, SC__AGHB },
  {    11,  4275,  4264,   8,  11, LB__CLOSEPARENTHESIS },
  {     0,  4329,  1117,   6,  24, BLK__KATAKANAPHONETICEXTENSIONS },
  {    69,  3920,     0,   4,   0, BC__S },
  {     6,  5222,  1586,   6,   9, ISKANAEXTENDEDA },
  {     1,  4106,  5813,  10,   4, INCYRILLICEXTC },
  {    65,  1784,    39,   5,   4, INCJKEXTE },
  {     0,   788,     0,   6,   0, ARROWS },
  {     0,   468,  6379,   6,   6, BLK__MAHAJANI },
  {     0,   724,   395,  19,  15, BLK__CUNEIFORMNUMBERSANDPUNCTUATION },
  {     0,  4962,  7658,   3,   4, AGE__V40 },
  {     0,  6639,  6892,   5,   4, BIDIC__YES },
  {     0,  2027,  2194,   3,   5, ISBRAHMI },
  {     1,  4116,   113,  12,   7, INLETTERLIKESYMBOLS },
  {    67,  6887,  6554,   6,   4, QMARK__TRUE },
  {     6,  5637,  5953,   8,   6, LB__BREAKBEFORE },
  {    68,  2057,    12,  10,   1, ISLATINEXTC },
  {     1,  1047,   737,   6,   6, LETTERNUMBER },
  {     2,  1967,  7018,   3,   5, INLYCIAN },
  {     3,  4024,  6084,   7,   6, BLK__OLDPERMIC },
  {   467,  2854,  7043,   4,   5, CCC__CCC10 },
  {     0,  5654,  5977,   5,   9, LB__INSEPERABLE },
  {   130,  3869,  3862,  13,   7, JG__MANICHAEANHUNDRED },
  {    14,  2250,  6329,   3,   3, ISDUPL },
  {     0,  5667,  1434,   5,   3, SCX__SINH },
  {     9,  1311,  5111,   5,  11, LB__COMBININGMARK },
  {     0,  6547,     6,   7,   1, PATSYN__N },
  {     0,  4130,  3241,   4,   3, SC__GONM },
  {     1,  5629,     0,   4,   0, JT__R },
  {    33,  5629,  2199,   8,   7, JT__RIGHTJOINING },
  {     3,  6593,    76,   9,   9, GEORGIANSUPPLEMENT },
  {     0,  6483,  3455,   5,   7, ISSMALLFORMS },
  {    22,  2756,    39,  10,   3, DEVANAGARIEXT },
  {   152,  2250,    30,  13,   1, ISDIACRITICALS },
  {   309,  6168,  6270,   3,   6, IDC__FALSE },
  {   506,   794,  5258,   4,   7, INMALAYALAM },
  {     0,   818,  5039,   4,   2, ISMAHJ },
  {     3,  2540,  3978,   4,   9, INYISYLLABLES },
  {     0,  5289,     0,   5,   0, LB__PR },
  {    26,  5672,   246,   6,   2, SCX__SYLO },
  {   513,  3930,  6316,   6,   6, BLK__BASSAVAH },
  {    47,  1459,  5778,   3,  10, SC__WARANGCITI },
  {    46,  3639,  2762,   3,   3, ISUGAR },
  {     1,  2839,  6771,   7,   4, BLK__TAITHAM },
  {     4,  6612,  6892,   2,   4, VS__YES },
  {     3,   367,  4641,   5,   2, NCHAR__N },
  {     0,  6276,  2093,   4,   3, SC__KALI },
  {    25,  7134,  6979,   4,   6, LB__UNKNOWN },
  {     0,  1459,   729,   4,   8, SC__CUNEIFORM },
  {     2,   120,  1375,  13,  15, BLK__COMBININGMARKSFORSYMBOLS },
  {    36,  2687,  3043,   5,   3, SCX__ELBA },
  {    17,  5313,  4301,   8,   7, BC__OTHERNEUTRAL },
  {     0,   992,     8,  11,   1, ALPHABETICPF },
  {     0,  5922,  2200,   8,   6, JT__DUALJOINING },
  {     0,  6002,    61,   6,   2, SCX__PHLI },
  {     0,    85,   156,   2,   2, ARMI },
  {     0,  3653,   193,  11,   9, INRUMINUMERALSYMBOLS },
  {     0,  1937,    12,  15,   1, INBYZANTINEMUSIC },
  {   220,  5008,  2143,   8,   6, PSALTERPAHLAVI },
  {   142,  1642,     0,  25,   0, DEFAULTIGNORABLECODEPOINT },
  {     0,  3728,     0,   6,   0, ISCOPT },
  {     3,  6020,  4051,   4,   1, WB__SQ },
  {   288,  5402,  4607,   5,   5, DT__NOBREAK },
  {     0,  1459,  2721,   4,   3, SC__CHER },
  {     0,  5778,     0,   4,   0, WARA },
  {     0,  6901,  1117,   5,   3, SC__BATAK },
  {     7,  2409,  2106,   8,  11, MEROITICHIEROGLYPHS },
  {     0,  6921,  2762,   4,   3, SC__UGAR },
  {    35,  6281,  6731,   5,   5, SC__PHAGSPA },
  {     1,    49,  5726,   3,   7, CJKSTROKES },
  {     1,    65,  6892,   4,   4, IDEO__YES },
  {   315,  5932,  6892,   5,   4, JOINC__YES },
  {     3,  1239,  2099,   4,  18, INANATOLIANHIEROGLYPHS },
  {     2,  1797,   574,  20,   4, FULLCOMPOSITIONEXCLUSION },
  {     8,  6887,     6,   6,   1, QMARK__N },
  {   260,  7377,     0,   3,   0, CWL },
  {     0,   439,   183,  15,  20, ISMISCELLANEOUSMATHEMATICALSYMBOLSA },
  {    30,  3162,   868,   4,   1, GCB__V },
  {   517,  1311,  4217,   3,   5, LB__SPACE },
  {     0,  2095,  7226,   3,   4, ISOGHAM },
  {     0,  1459,  6348,   3,   8, SC__HIRAGANA },
  {     5,  6562,   736,   6,   2, SCX__ARMN },
  {     3,   522,  5364,   5,   8, ISSUPERANDSUB },
  {    92,  2074,  6655,   5,   6, SCX__BENGALI },
  {     0,  4814,     0,   6,   0, ISBAMU },
  {   222,    48,     0,   2,   0, SC },
  {     0,  2074,  3987,   4,  15, SCX__IMPERIALARAMAIC },
  {     2,  2962,    30,   4,   1, BC__ES },
  {     1,  5932,  4641,   5,   3, JOINC__NO },
  {     4,  1967,    11,  15,   1, INLATINEXTENDEDD },
  {    36,  5472,  3664,   9,   6, INSC__PUREKILLER },
  {   243,  5402,  1735,  10,   5, DT__NONCANONICAL },
  {     0,  3770,     6,   9,   1, ISGEORGIAN },
  {    51,  7426,  7023,   4,   3, SC__LYDI },
  {     9,  6724,  6699,   5,   4, ISMANDAIC },
  {     0,  2449,     0,   9,   0, SUNDANESE },
  {   292,  1628,  7418,   4,   5, NFKCQC__NO },
  {   697,  2652,  6715,   4,   5, ISNOBLOCK },
  {   521,  7206,  1762,   4,   2, XIDS__T },
  {     0,   818,   111,  24,   9, ISMATHEMATICALALPHANUMERICSYMBOLS },
  {   143,  2041,    30,  16,   1, ISGEOMETRICSHAPES },
  {     2,  3162,  6437,   4,   3, GCB__GAZ },
  {     0,  1538,  6343,   5,   7, BLK__GURMUKHI },
  {     0,   367,  6270,   5,   6, NCHAR__FALSE },
  {     9,  1581,  1317,  15,   8, LATINEXTENDEDADDITIONAL },
  {     1,  2078,    16,   4,   2, BC__PDI },
  {    44,   918,    30,  17,   1, INCUNEIFORMNUMBERS },
  {     3,  6488,     0,   4,   0, ISSO },
  {   221,  4130,  6595,   5,   6, SC__GEORGIAN },
  {     0,  1119,  6689,   3,   4, KANNADA },
  {     0,  2193,     0,   6,   0, BRAHMI },
  {     2,  2386,  3978,   6,   9, HANGULSYLLABLES },
  {    17,   468,  5039,   6,   5, BLK__MAHJONG },
  {     1,  1778,    90,   7,   5, INARABICMATH },
  {     0,  4619,  6725,   4,   6, SC__OSMANYA },
  {    33,  6002,  5717,   6,   2, SCX__PHNX },
  {     6,  4821,   113,  10,   6, ISCURRENCYSYMBOL },
  {     0,  1789,     0,   6,   0, ISARAB },
  {     0,  2854,   862,   4,   2, CCC__NR },
  {   305,  2951,  6963,   4,   6, SC__MULTANI },
  {     0,  2951,  4002,  11,   7, SC__MEROITICCURSIVE },
  {     0,  1311,  7743,   3,   2, LB__XX },
  {     0,  5182,  1586,   6,   9, INKANAEXTENDEDA },
  {     0,  3096,  5259,   3,   6, MALAYALAM },
  {     0,  1718,   728,  13,   9, EARLYDYNASTICCUNEIFORM },
  {     4,  5094,    17,   3,   3, CARIAN },
  {    14,  4945,    93,   5,   2, JG__TETH },
  {     0,    47,   697,   5,  27, ISCJKUNIFIEDIDEOGRAPHSEXTENSIONF },
  {     3,  2854,  5183,   4,   2, CCC__NK },
  {     3,  4373,     5,   4,   1, GC__LU },
  {    10,  2854,  7347,   4,   5, CCC__CCC34 },
  {     0,  3705,  5725,   4,   2, INTAGS },
  {     0,    81,  5060,   3,   9, MENDEKIKAKUI },
  {     0,  1475,  1763,   4,   4, ISHATRAN },
  {    19,   842,     0,  15,   0, BLK__PHONETICEXT },
  {     2,  6613,  1835,   6,   2, SCX__TAKR },
  {    21,  6628,  2364,   5,   4, WB__MIDNUM },
  {   712,  7554,     0,   4,   0, NARB },
  {     0,    85,     0,   4,   0, ARAB },
  {     1,  2027,  6037,   3,   8, ISBHAIKSUKI },
  {     3,    78,  2631,   2,   2, PLRD },
  {   320,  6872,  6254,   4,   9, LB__NONSTARTER },
  {     3,  2791,     0,   4,   0, GEOR },
  {     0,  7181,  7539,   5,   3, SCX__LAOO },
  {     0,  5846,    23,   6,   1, ISKHMER },
  {   400,   152,  4893,   6,   2, BLK__MIAO },
  {     0,  3718,     0,  10,   0, ISCHEROKEE },
  {     0,  6990,  6553,   4,   5, AHEX__TRUE },
  {    32,  4373,     2,   4,   1, GC__LL },
  {     1,  1581,     1,   8,   1, LATINEXTB },
  {   644,  1951,    30,  16,   1, INGEOMETRICSHAPES },
  {   320,   842,  6731,   6,   5, BLK__PHAGSPA },
  {     0,  7562,     0,   4,   0, NKOO },
  {     8,  5958,  6676,   3,   4, ELBASAN },
  {   165,  7459,  4051,   4,   5, DT__SQUARE },
  {     1,  2382,  1560,  10,  17, BLK__HANGULCOMPATIBILITYJAMO },
  {     0,  4308,  3416,   9,   9, BC__COMMONSEPARATOR },
  {     0,   410,  3520,   6,  12, INMISCMATHSYMBOLSB },
  {     4,   256,  6112,   5,   8, BLK__SAMARITAN },
  {    38,  5525,    39,   5,   3, ISIPAEXT },
  {     0,   120,  2356,   6,   9, BLK__COUNTINGROD },
  {    41,  4441,  3489,  10,   8, INLINEARBIDEOGRAMS },
  {     0,  5645,  7048,   4,   1, LB__H3 },
  {   390,   223,  2465,  12,   7, SUPPLEMENTALARROWSB },
  {     0,  6639,  6553,   5,   5, BIDIC__TRUE },
  {     2,  6644,  5835,   5,   7, BIDIMIRRORED },
  {     5,  3023,    30,  12,   9, BLK__CANADIANSYLLABICS },
  {   276,  3869,  4927,  13,   4, JG__MANICHAEANYODH },
  {    57,  5031,    23,   8,   1, BLK__KHMER },
  {     0,  3822,  7241,   4,   3, ISTAMIL },
  {   260,  7129,    12,   5,   1, ISXIDC },
  {     1,  6815,  3140,   4,   6, DT__INITIAL },
  {   188,  5228,    12,   6,   1, ISMUSIC },
  {     1,  7430,  7584,   4,   3, SC__RJNG },
  {   274,  3614,    12,   7,   1, ETHIOPIC },
  {     2,  3354,    75,  11,   3, ISSUNDANESESUP },
  {     0,  5637,  5152,   8,   5, LB__BREAKAFTER },
  {     3,  6128,    54,   5,   1, GCB__EM },
  {     0,  1789,  6033,   7,   4, ISARABICPFB },
  {     0,  2584,  1922,   5,   2, CASED__Y },
  {     0,  4483,    12,   7,   1, INSYRIAC },
  {     6,  5005,  6096,   4,   8, SC__PALMYRENE },
  {   568,   842,  5078,   6,   6, BLK__PHAISTOS },
  {     1,  1459,  7630,   3,   4, SC__ZZZZ },
  {    48,  2584,  4641,   5,   2, CASED__N },
  {   449,  1160,    74,  19,  11, INVARIATIONSELECTORSSUPPLEMENT },
  {     6,  1179,  7573,   3,   3, ISPLRD },
  {    12,  2117,   777,  13,   4, BLK__GLAGOLITICSUP },
  {   329,   120,  2356,   6,  17, BLK__COUNTINGRODNUMERALS },
  {   159,  4308,    30,   4,   1, BC__CS },
  {  1001,  5222,  4337,   5,   3, ISKANGXI },
  {   659,   124,    75,  25,  10, COMBININGDIACRITICALMARKSSUPPLEMENT },
  {     0,  6547,     0,   6,   0, PATSYN },
  {    80,  5852,  2599,   8,   5, ISXPOSIXUPPER },
  {     0,  3375,  1063,   5,   3, SCX__COPT },
  {     0,  1368,  5726,   7,   7, BLK__CJKSTROKES },
  {   560,  5852,   399,   8,   5, ISXPOSIXPUNCT },
  {     0,  5629,     5,   3,   1, JT__U },
  {    19,  1459,  1064,   5,   4, SC__COPTIC },
  {   872,  2766,   852,  10,   5, BLK__ETHIOPICEXT },
  {     0,  1457,  3690,   5,  15, INSC__REGISTERSHIFTER },
  {   139,  3263,  6112,   4,   8, SC__SAMARITAN },
  {     0,  3290,     0,  11,   0, INSUNDANESE },
  {     1,  1457,  2016,  14,  11, INSC__CONSONANTWITHSTACKER },
  {     0,   494,   400,   6,  10, INSUPPUNCTUATION },
  {     3,   972,  5115,   8,   7, ISENCLOSINGMARK },
  {    39,  1836,  4641,   7,   2, RADICAL__N },
  {   138,  2666,     0,   8,   0, ISYIJING },
  {    32,  5645,  6447,   4,   5, LB__HYPHEN },
  {     9,  4718,  3509,   4,   9, GC__MATHSYMBOL },
  {     0,  5938,     0,   4,   0, JT__L },
  {     0,  1311,  1287,   3,   2, LB__AI },
  {     1,  6276,  7010,   5,   4, SC__KHOJKI },
  {     1,    39,  4641,   3,   2, EXT__N },
  {     0,  1923,     0,   6,   0, YIJING },
  {     0,  2579,  6553,   5,   5, LOWER__TRUE },
  {    53,  3263,  1652,   4,   3, SC__SORA },
  {     1,  2924,  4911,   3,   4, JG__HETH },
  {   526,  7751,  1240,   3,   3, NV__NAN },
  {     1,   972,  6045,   3,   8, ISEMOTICONS },
  {    51,  3013,    99,  10,   4, BLK__ALCHEMICAL },
  {     2,  3466,  1403,   4,  10, HIGHSURROGATES },
  {   825,  4024,  6725,   5,   6, BLK__OSMANYA },
  {   351,  4873,     0,  11,   0, ISUPPERCASE },
  {   174,   256,  2472,   7,   7, BLK__SUPARROWSC },
  {    24,  4554,  3367,  10,   8, ISSENTENCETERMINAL },
  {     1,  6633,  1762,   6,   2, WSPACE__T },
  {  2291,  5855,  5505,   5,   5, POSIXDIGIT },
  {   110,  2716,     0,  12,   0, BLK__CHEROKEE },
  {    18,  1759,  7038,   5,   5, BLK__THAANA },
  {     1,  4373,     0,   4,   0, GC__L },
  {     0,  1019,  5498,   5,   4, BLK__ASCII },
  {  1061,  6882,  6553,   5,   5, PATWS__TRUE },
  {     0,  1759,   113,  19,   7, BLK__TRANSPORTANDMAPSYMBOLS },
  {     1,  6807,     0,   2,   0, CF },
  {     0,  2405,  4002,  12,   7, BLK__MEROITICCURSIVE },
  {     0,  4763,    75,   7,  10, INBAMUMSUPPLEMENT },
  {     0,  6281,  1932,   5,   2, SC__PHAG },
  {     1,  6872,    30,   4,   1, LB__NS },
  {   339,  6558,    41,   4,   1, SB__ST },
  {     0,   522,  1434,   3,   3, ISSINH },
  {  1046,  4619,  7472,   4,   3, SC__OGAM },
  {   858,    26,  6649,   3,   6, INAVESTAN },
  {    16,  6227,   754,   2,   2, KNDA },
  {     2,  1937,  6037,   3,   8, INBHAIKSUKI },
  {     1,  1498,  1664,   4,   3, ISPRINT },
  {    11,  3781,  4641,   3,   3, IDS__NO },
  {    11,   972,    40,   3,   2, ISEXT },
  {     1,  7438,  1659,   4,   3, UNICODE },
  {     3,  1459,  4041,   3,  15, SC__ZANABAZARSQUARE },
  {     0,  7100,  4641,   4,   2, CWCM__N },
  {     1,  3086,   113,  10,   7, LETTERLIKESYMBOLS },
  {  1144,  4705,  6767,   3,   4, TAGALOG },
  {     4,  3869,    42,  14,   2, JG__MANICHAEANTEN },
  {     0,  7100,  1922,   4,   2, CWCM__Y },
  {   866,  3779,   348,   4,  30, ISIDEOGRAPHICDESCRIPTIONCHARACTERS },
  {     1,  6916,  7238,   5,   3, SC__TAKRI },
  {     0,  5202,  5842,  10,   4, ISGRAPHEMEBASE },
  {   556,   256,  6760,   8,   3, BLK__SUPPUAA },
  {  1303,  3050,    75,  12,  10, BLK__CYRILLICSUPPLEMENT },
  {     1,   152,   790,   5,   2, BLK__MRO },
  {     1,  6128,  1751,   5,   8, GCB__EMODIFIER },
  {     0,  2449,    75,   9,  10, SUNDANESESUPPLEMENT },
  {     0,  5304,   737,   9,   6, BC__ARABICNUMBER },
  {  1189,  4573,   777,   7,  11, ISSYRIACSUPPLEMENT },
  {   708,  5852,  6182,   8,   5, ISXPOSIXBLANK },
  {   284,  4433,    75,   8,  10, INLATIN1SUPPLEMENT },
  {    12,    12,    30,   3,   1, CANS },
  {     0,  2696,  1891,   5,   3, SCX__MTEI },
  {     0,  1288,   113,   9,   7, ISANCIENTSYMBOLS },
  {     0,  2027,   192,  15,  10, ISBYZANTINEMUSICALSYMBOLS },
  {   543,  4317,    39,   9,   8, BLK__GREEKEXTENDED },
  {     8,  6624,  1751,   4,   8, WB__EMODIFIER },
  {     0,  6558,  1096,   3,   2, SB__LF },
  {     0,  2787,     6,  11,   1, BLK__GEORGIAN },
  {     0,  2924,  5286,   3,   3, JG__WAW },
  {   433,  3536,  1586,   7,   9, MYANMAREXTENDEDA },
  {     3,  2737,  1912,  15,   7, BLK__COPTICEPACTNUMBERS },
  {     2,  5483,  1286,   4,   3, SC__THAI },
  {     0,  2057,    22,   4,   1, ISLAO },
  {     0,  1275,     0,   2,   0, CC },
  {     0,    12,    30,   8,   9, CANADIANSYLLABICS },
  {     0,  1198,     7,   4,   1, ISVAI },
  {  1092,  5855,  2599,   5,   5, POSIXUPPER },
  {     3,  2951,  1890,   5,   9, SC__MEETEIMAYEK },
  {    22,  4490,  2395,   9,   4, ISBOPOMOFOEXT },
  {  1939,  2556,  2599,  13,  10, ISCHANGESWHENUPPERCASED },
  {     3,  2839,  7241,   6,   3, BLK__TAMIL },
  {    10,  5771,  3455,   7,   7, BLK__SMALLFORMS },
  {     0,  6411,  1922,   6,   2, COMPEX__Y },
  {     2,  2251,  4066,   2,   2, SD__F },
  {    10,  1179,    74,  19,  11, ISPHONETICEXTENSIONSSUPPLEMENT },
  {     0,  6376,  1328,   3,   5, JAVANESE },
  {     0,  2449,    75,   9,   3, SUNDANESESUP },
  {   396,  6628,  5683,   5,   7, WB__MIDNUMLET },
  {     3,  6849,  2009,   4,   2, JG__FEH },
  {     0,   103,     0,   5,   0, ALPHA },
  {   292,  3330,  1047,  10,   7, ISMODIFIERLETTERS },
  {  1850,  1522,   191,  16,  11, BLK__BYZANTINEMUSICALSYMBOLS },
  {     9,    47,   552,   5,  27, ISCJKUNIFIEDIDEOGRAPHSEXTENSIONA },
  {     2,   439,  7548,   3,   3, ISMLYM },
  {     1,  5005,  4688,   4,   3, SC__PRTI },
  {     3,  2924,  5911,   3,  11, JG__YEHWITHTAIL },
  {     0,  6906,  2757,   4,   9, SC__DEVANAGARI },
  {     1,  3811,  1735,   4,   3, ISRUNIC },
  {   629,   468,  5258,   6,   7, BLK__MALAYALAM },
  {     0,  4184,   247,  11,   8, ISIDSBINARYOPERATOR },
  {     0,  1141,   404,   3,   2, INPUA },
  {     0,   468,  6703,   6,   5, BLK__MARCHEN },
  {     0,    49,  6661,   3,   4, CJKEXTD },
  {     6,  2160,    38,  13,   4, INDIACRITICALSEXT },
  {  2630,   842,   404,   5,   2, BLK__PUA },
  {     2,  3577,    75,  10,  10, INCHEROKEESUPPLEMENT },
  {    16,  3791,  1685,   4,  14, ISINDICNUMBERFORMS },
  {     0,  4750,  5160,   4,  12, HST__TRAILINGJAMO },
  {     0,  6446,  6892,   6,   4, HYPHEN__YES },
  {     0,  4174,    75,  10,   3, ISCYRILLICSUP },
  {     0,  6624,    40,   4,   5, WB__EXTEND },
  {     0,  4538,  5340,   9,   4, ISMYANMAREXTB },
  {     0,  7566,     0,   4,   0, NSHU },
  {  1648,  5298,  5039,   6,   2, SCX__MAHJ },
  {     0,  7477,  5741,   3,   7, KHAROSHTHI },
  {     0,   794,  3837,   4,   8, INMANICHAEAN },
  {     1,  5054,    54,   3,   1, GONM },
  {  1088,  5023,     0,   2,   0, PF },
  {     4,    26,   606,   2,   2, INNB },
  {     0,   522,  6760,   6,   3, ISSUPPUAA },
  {     6,  2417,     0,   8,   0, BLK__MODI },
  {     0,  4521,    75,   8,   3, ISLATIN1SUP },
  {     0,  4186,  6892,   4,   4, IDSB__YES },
  {  1066,  1288,  7497,   3,   3, ISAVST },
  {   224,  2057,  7018,   3,   5, ISLYCIAN },
  {     0,  3869,  5269,   5,  11, JG__MALAYALAMNNNA },
  {     0,  5825,  7223,   4,   3, SC__NSHU },
  {   217,  6446,  1922,   6,   2, HYPHEN__Y },
  {  2918,  7576,     0,   4,   0, QAAC },
  {     0,  6149,  1610,   6,   7, ISBIDICONTROL },
  {     0,  2149,  1014,  11,   5, INCJKCOMPATFORMS },
  {     0,  7162,  5040,   3,   4, MAHJONG },
  {     1,   522,  1217,   5,  22, ISSUPERSCRIPTSANDSUBSCRIPTS },
  {  2660,  2042,  3119,   2,   2, SGNW },
  {     0,   113,     0,   6,   0, SYMBOL },
  {    16,   316,     0,   4,   0, ISCO },
  {  1034,  2160,  1379,  13,  11, INDIACRITICALSFORSYMBOLS },
  {  1104,  1647,     0,   2,   0, LT },
  {     1,  6734,  5347,   4,   7, PAHAWHHMONG },
  {     3,  1795,   574,  22,   4, ISFULLCOMPOSITIONEXCLUSION },
  {  2381,  1069,     0,   2,   0, LC },
  {     5,   468,  3837,   6,   8, BLK__MANICHAEAN },
  {  2069,  2337,    79,   4,   2, BC__RLE },
  {     0,   522,  6112,   3,   8, ISSAMARITAN },
  {   332,  1498,    57,   4,   2, ISPRTI },
  {     2,   117,  6720,   2,   5, OLCHIKI },
  {  2052,  7380,  4641,   3,   3, CWT__NO },
  {  2321,  3365,  7034,   4,   4, ISTELUGU },
  {  1224,  4174,  5027,  10,   4, ISCYRILLICEXTA },
  {   599,  1888,     0,  11,   0, MEETEIMAYEK },
  {  2385,  6879,  7142,   3,   6, NFCQC__YES },
  {     3,  1228,  1598,   2,   2, DSRT },
  {  2262,  1538,    38,  18,   4, BLK__GEOMETRICSHAPESEXT },
  {  2224,  4283,  6725,   5,   6, SCX__OSMANYA },
  {     0,   522,  3117,   3,  10, ISSIGNWRITING },
  {    10,  5035,    23,   3,   1, KHMR },
  {     0,  1919,   113,  18,   7, BLK__YIJINGHEXAGRAMSYMBOLS },
  {     5,  3146,   250,  16,   5, GC__PARAGRAPHSEPARATOR },
  {     1,   935,   777,  21,  11, INENCLOSEDALPHANUMERICSUPPLEMENT },
  {  1305,  2696,  7548,   5,   3, SCX__MLYM },
  {     1,  4024,  2809,   5,  17, BLK__ORNAMENTALDINGBATS },
  {     0,  4681,  1403,   7,  10, BLK__LOWSURROGATES },
  {     0,  1035,  1647,   2,   2, MULT },
  {     0,  7558,     0,   4,   0, NBAT },
  {     0,  5846,  4932,   4,   2, ISKHOJ },
  {  1430,  6985,  1762,   5,   2, UIDEO__T },
  {   401,  3869,  4903,  13,   4, JG__MANICHAEANBETH },
  {  1868,  2924,  5606,   3,   3, JG__NYA },
  {  2864,  1160,    74,   3,   4, INVSSUP },
  {     0,    75,  1413,   3,  21, SUPSYMBOLSANDPICTOGRAPHS },
  {  2116,    47,  5778,   2,   4, ISWARA },
  {     0,    47,  7097,   3,   3, ISCWCF },
  {     0,  7426,  7176,   4,   5, SC__LEPCHA },
  {   979,   133,    38,  11,   4, DIACRITICALSEXT },
  {     0,  6495,    22,   5,   1, ISXPEO },
  {     0,  3600,    39,  12,   8, INDEVANAGARIEXTENDED },
  {    30,  7450,     0,   4,   0, NEWA }
};
uint16_t mph_match( const unsigned char * const key, const uint16_t key_len ) {
    const unsigned char * ptr= key;
    const unsigned char * ptr_end= key+key_len;
    uint32_t h= MPH_SEED1 + key_len;
    uint32_t s;
    uint32_t n;
    do {
        h  = (h ^ *ptr) * MPH_FNV_CONST;
    } while (++ptr<ptr_end);
    n= h % MPH_BUCKETS;
    s = mph[n].seed2;
    if (s) {
        h= (h >> MPH_RSHIFT) ^ s;
        n = h % MPH_BUCKETS;
        if ( memcmp(mph_blob + mph[n].pfx, key, mph[n].pfx_len)==0 &&
            (!mph[n].sfx || memcmp(mph_blob + mph[n].sfx,key+mph[n].pfx_len,mph[n].sfx_len)==0)
        ) {
            return mph[n].value;
        }
    }
    return 0;
}
int main(int argc, unsigned char *argv[]){
    int i;
    for (i=1; i<argc; i++) {
        unsigned char *key = argv[i];
        int key_len = strlen(key);
        printf("key: %s ", key);
        printf("got: %d\n", mph_match(key,key_len));
    }
}
