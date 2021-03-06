/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/iota.c
 *
 * Refer to the LICENSE file for licensing information
 */

#include "cclient/api/tests/cclient_test_defs.h"

static iota_client_service_t g_serv;

static void test_remove_neighbors_empty(void) {
  remove_neighbors_req_t *nb_req = remove_neighbors_req_new();
  TEST_ASSERT_NOT_NULL(nb_req);
  TEST_ASSERT_NOT_NULL(nb_req->uris);

  remove_neighbors_res_t *nb_res = remove_neighbors_res_new();
  TEST_ASSERT_NOT_NULL(nb_res);
  TEST_ASSERT_EQUAL_INT(0, nb_res->removed_neighbors);

  TEST_ASSERT_EQUAL_INT16(RC_NULL_PARAM, iota_client_remove_neighbors(&g_serv, nb_req, nb_res));

  remove_neighbors_req_free(&nb_req);
  TEST_ASSERT_NULL(nb_req);
  remove_neighbors_res_free(&nb_res);
  TEST_ASSERT_NULL(nb_res);
}

int main() {
  UNITY_BEGIN();

  cclient_service_setup(&g_serv);

  RUN_TEST(test_remove_neighbors_empty);

  cclient_service_cleanup(&g_serv);

  return UNITY_END();
}
