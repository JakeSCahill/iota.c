/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/iota.c
 *
 * Refer to the LICENSE file for licensing information
 */

#ifndef TEST_CCLIENT_TEST_DEFS_H
#define TEST_CCLIENT_TEST_DEFS_H

#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <unity/unity.h>

#include "cclient/api/core/core_api.h"
#include "common/trinary/flex_trit.h"
#include "utils/logger_helper.h"
#include "utils/time.h"

void cclient_service_setup(iota_client_service_t *const service);
void cclient_service_cleanup(iota_client_service_t *const service);

static uint64_t const STARTING_MILESTONE_INDEX = 1050000;
static uint64_t const OLDER_TIMESTAMP = 1562581100;

static tryte_t const *const TEST_SEED =
    (tryte_t *)"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
static tryte_t const *const TEST_ADDRESS_0 =
    (tryte_t *)"XUERGHWTYRTFUYKFKXURKHMFEVLOIFTTCNTXOGLDPCZ9CJLKHROOPGNAQYFJEPGK9OKUQROUECBAVNXRX";
static tryte_t const *const TEST_ADDRESS_1 =
    (tryte_t *)"RJBYLCIOUKWJVCUKZQZCPIKNBUOGRGVXHRTTE9ZFSCGTFRKELMJBDDAKEYYCLHLJDNSHQ9RTIUIDLMUOB";
static tryte_t const *const TEST_ADDRESS_2 =
    (tryte_t *)"G9IBAWCWWYOSAVURTPX9JKBJLAFFBHWLOONFHTNENHJZGRLTDUDTMXTMBKYODOVHTAYKKIZBDGVAJJQJD";

static tryte_t const *const TEST_TAG_0 = (tryte_t *)"CCLIENT99999999999999999999";
static tryte_t const *const TEST_TAG_1 = (tryte_t *)"CCLIENTSPAM9999999999999999";

static tryte_t const *const TEST_BUNDLE_HASH_0 =
    (tryte_t *)"MKQKKUKBRQTJEQZRSJCPOABSBEHRMDLRKFHHYYIGZPNKKCDTXHJQBORAX9KEFDBDBZDEWZFOKOCICAUBC";
static tryte_t const *const TEST_BUNDLE_TX_0 =
    (tryte_t *)"SVHIDTVSJRHLNFXIFUVYPIWBV9IZGCSMLUZCFOEQMCXMUTHRQCESOIHHKKEVXOUGGOYOSF9ATDMBFK999";
static tryte_t const *const TEST_BUNDLE_TX_1 =
    (tryte_t *)"IITL9EALLVZEGFIFBCCAHUOKHFBIIKQACBCEVVNZUEQLUJTOPXRICFRZKJDQGSVHARJANFDDAHMERS999";
static tryte_t const *const TEST_BUNDLE_TX_2 =
    (tryte_t *)"QSEXHGQDOGTHVEZXQTUJOIWNNDSIXBLLJJTORUHFIACTMJA9EQJLOAATDNHTKJPHQHDCDZHZLJLKGB999";

static tryte_t const *const TEST_MILESTONE_0 =
    (tryte_t *)"FBOCIRYP9IVIUER9URIZVPOMYZJSOJJHVTYLYTKLOPNCRJECEVELQSBHY9ESZLJTBHUNSQHNKWLUVP999";

static tryte_t const *const TEST_TRUNK_HASH =
    (tryte_t *)"RVORZ9SIIP9RCYMREUIXXVPQIPHVCNPQ9HZWYKFWYWZRE9JQKG9REPKIASHUUECPSQO9JT9XNMVKWYGVA";
static tryte_t const *const TEST_BRANCH_HASH =
    (tryte_t *)"99999999IP9RCYMREUIXXVPQIPHVCNPQ9HZWYKFWYWZRE9JQKG9REPKIASHUUECPSQO9JT9XNMVKWYGVA";

static tryte_t const *const TEST_TX_HASH = (tryte_t*) "BYSWEAUTWXHXZ9YBZISEK9LUHWGMHXCGEVNZHRLUWQFCUSDXZHOFHWHL9MQPVJXXZLIXPX"
  "PXF9KYEREFSKCPKYIIKPZVLHUTDFQKKVVBBN9ATTLPCNPJDWDEVIYYLGPZGCWXOBDXMLJC9V"
  "O9QXTTBLAXTTBFUAROYEGQIVB9MJWJKXJMCUPTWAUGFZBTZCSJVRBGMYXTVBDDS9MYUJCPZ9"
  "YDWWQNIPUAIJXXSNLKUBSCOIJPCLEFPOXFJREXQCUVUMKSDOVQGGHRNILCO9GNCLWFM9APMN"
  "MWYASHXQAYBEXF9QRIHIBHYEJOYHRQJAOKAQ9AJJFQ9WEIWIJOTZATIBOXQLBMIJU9PCGBLV"
  "DDVFP9CFFSXTDUXMEGOOFXWRTLFGV9XXMYWEMGQEEEDBTIJ9OJOXFAPFQXCDAXOUDMLVYRMR"
  "LUDBETOLRJQAEDDLNVIRQJUBZBO9CCFDHIX9MSQCWYAXJVWHCUPTRSXJDESISQPRKZAFKFRU"
  "LCGVRSBLVFOPEYLEE99JD9SEBALQINPDAZHFAB9RNBH9AZWIJOTLBZVIEJIAYGMC9AZGNFWG"
  "RSWAXTYSXVROVNKCOQQIWGPNQZKHUNODGYADPYLZZZUQRTJRTODOUKAOITNOMWNGHJBBA99Q"
  "UMBHRENGBHTH9KHUAOXBVIVDVYYZMSEYSJWIOGGXZVRGN999EEGQMCOYVJQRIRROMPCQBLDY"
  "IGQO9AMORPYFSSUGACOJXGAQSPDY9YWRRPESNXXBDQ9OZOXVIOMLGTSWAMKMTDRSPGJKGBXQ"
  "IVNRJRFRYEZ9VJDLHIKPSKMYC9YEGHFDS9SGVDHRIXBEMLFIINOHVPXIFAZCJKBHVMQZEVWC"
  "OSNWQRDYWVAIBLSCBGESJUIBWZECPUCAYAWMTQKRMCHONIPKJYYTEGZCJYCT9ABRWTJLRQXK"
  "MWY9GWZMHYZNWPXULNZAPVQLPMYQZCYNEPOCGOHBJUZLZDPIXVHLDMQYJUUBEDXXPXFLNRGI"
  "PWBRNQQZJSGSJTTYHIGGFAWJVXWL9THTPWOOHTNQWCNYOYZXALHAZXVMIZE9WMQUDCHDJMIB"
  "WKTYH9AC9AFOT9DPCADCV9ZWUTE9QNOMSZPTZDJLJZCJGHXUNBJFUBJWQUEZDMHXGBPTNSPZ"
  "BR9TGSKVOHMOQSWPGFLSWNESFKSAZY9HHERAXALZCABFYPOVLAHMIHVDBGKUMDXC9WHHTIRY"
  "HZVWNXSVQUWCR9M9RAGMFEZZKZ9XEOQGOSLFQCHHOKLDSA9QCMDGCGMRYJZLBVIFOLBIJPRO"
  "KMHOYTBTJIWUZWJMCTKCJKKTR9LCVYPVJI9AHGI9JOWMIWZAGMLDFJA9WU9QAMEFGABIBEZN"
  "NAL9OXSBFLOEHKDGHWFQSHMPLYFCNXAAZYJLMQDEYRGL9QKCEUEJ9LLVUOINVSZZQHCIKPAG"
  "MT9CAYIIMTTBCPKWTYHOJIIY9GYNPAJNUJ9BKYYXSV9JSPEXYMCFAIKTGNRSQGUNIYZCRT9F"
  "OWENSZQPD9ALUPYYAVICHVYELYFPUYDTWUSWNIYFXPX9MICCCOOZIWRNJIDALWGWRATGLJXN"
  "AYTNIZWQ9YTVDBOFZRKO9CFWRPAQQRXTPACOWCPRLYRYSJARRKSQPR9TCFXDVIXLP9XVL99E"
  "RRDSOHBFJDJQQGGGCZNDQ9NYCTQJWVZIAELCRBJJFDMCNZU9FIZRPGNURTXOCDSQGXTQHKHU"
  "ECGWFUUYS9J9NYQ9U9P9UUP9YMZHWWWCIASCFLCMSKTELZWUGCDE9YOKVOVKTAYPHDF9ZCCQ"
  "AYPJIJNGSHUIHHCOSSOOBUDOKE9CJZGYSSGNCQJVBEFTZFJ9SQUHOASKRRGBSHWKBCBWBTJH"
  "OGQ9WOMQFHWJVEG9NYX9KWBTCAIXNXHEBDIOFO9ALYMFGRICLCKKLG9FOBOX9PDWNQRGHBKH"
  "GKKRLWTBEQMCWQRLHAVYYZDIIPKVQTHYTWQMTOACXZOQCDTJTBAAUWXSGJF9PNQIJ9AJRUMU"
  "VCPWYVYVARKR9RKGOUHHNKNVGGPDDLGKPQNOYHNKAVVKCXWXOQPZNSLATUJT9AUWRMPPSWHS"
  "TTYDFAQDXOCYTZHOYYGAIM9CELMZ9AZPWB9MJXGHOKDNNSZVUDAGXTJJSSZCPZVPZBYNNTUQ"
  "ABSXQWZCHDQSLGK9UOHCFKBIBNETK9999999999999999999999999999999999999999999"
  "99999999999999999999999999999999999999NOXDXXKUDWLOFJLIPQIBRBMGDYCPGDNLQO"
  "LQS99EQYKBIU9VHCJVIPFUYCQDNY9APGEVYLCENJIOBLWNB999999999XKBRHUD99C999999"
  "99NKZKEKWLDKMJCI9N9XQOLWEPAYWSH9999999999999999999999999KDDTGZLIPBNZKMLT"
  "OLOXQVNGLASESDQVPTXALEKRMIOHQLUHD9ELQDBQETS9QFGTYOYWLNTSKKMVJAUXSIROUICD"
  "OXKSYZTDPEDKOQENTJOWJONDEWROCEJIEWFWLUAACVSJFTMCHHXJBJRKAAPUDXXVXFWP9X99"
  "99IROUICDOXKSYZTDPEDKOQENTJOWJONDEWROCEJIEWFWLUAACVSJFTMCHHXJBJRKAAPUDXX"
  "VXFWP9X9999";

#endif  // TEST_CCLIENT_TEST_DEFS_H