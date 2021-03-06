/*
 * Copyright (c) 2020 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __REMOVE_AUTH_INFO_CLIENT_H__
#define __REMOVE_AUTH_INFO_CLIENT_H__

#include "auth_info.h"

#if !(defined(_CUT_STS_) || defined(_CUT_STS_CLIENT_) || defined(_CUT_REMOVE_) || defined(_CUT_REMOVE_CLIENT_))

#define HC_RM_AUTH_DATA_BUFF_LEN    256

struct remove_auth_info_client {
    struct sts_client *sts_client;
    struct auth_info_cache *auth_info;
};

#ifdef __cplusplus
extern "C" {
#endif
int32_t receive_remove_response(const struct hichain *hichain, const struct message *receive);
#ifdef __cplusplus
}
#endif

#endif /* _CUT_XXX_ */

int32_t send_remove_request(const struct hichain *hichain, struct message *send);

#endif /* __RM_AUTH_INFO_CLIENT_H__ */
