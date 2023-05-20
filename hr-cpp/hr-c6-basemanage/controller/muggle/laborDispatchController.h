/*
 Copyright Muggle. All rights reserved.

 @Author: Muggle
 @Date: 2023/05/19 23:24:02

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

	  https://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
*/
#pragma once
#ifndef _LD_M_CONTROLLER_
#define _LD_M_CONTROLLER_

#include "ApiHelper.h"
#include "Macros.h"
#include "ServerInfo.h"

#include "domain/vo/BaseJsonVO.h"
#include "domain/query/Muggle/LaborDispatchQuery.h"
#include "domain/dto/Muggle/LaborDispatchDTO.h"
#include "domain/vo/Muggle/LaborDispatchJsonVO.h"

#include OATPP_CODEGEN_BEGIN(ApiController)

class LaborDispatchMController : public oatpp::web::server::api::ApiController
{
	API_ACCESS_DECLARE(LaborDispatchMController);
public:
	// ���ݹ�˾���Ʋ�ѯָ����˾��Ϣ
	ENDPOINT_INFO(queryLaborDispatch) {
		// ����ӿڱ���
		info->summary = ZH_WORDS_GETTER("labordispatch_mug.get.summary");
		API_DEF_ADD_RSP_JSON_WRAPPER(LaborDispatchMDTO);
		
		// ���������������
		info->queryParams.add<String>("corporateName").description = ZH_WORDS_GETTER("labordispatch_mug.field.corporatename");;
		info->queryParams["corporateName"].addExample("default", String("PDD"));
	}

	ENDPOINT(API_M_GET, "/query-by-corporate-name", queryLaborDispatch,QUERIES(QueryParams, queryParams)) {
		API_HANDLER_QUERY_PARAM(query, LaborDispatchMQuery, queryParams);
		API_HANDLER_RESP_VO(execQueryLaborDispatch(query));
	}

	// �޸�ָ����˾��Ϣ
	ENDPOINT_INFO(modifyLaborDispatch) {
		info->summary = ZH_WORDS_GETTER("labordispatch_mug.modify.summary");
		API_DEF_ADD_RSP_JSON_WRAPPER(Uint64JsonVO);
	}

	ENDPOINT(API_M_DEL, "/modify-labor-dispatch-corporate", modifyLaborDispatch, BODY_DTO(LaborDispatchMDTO::Wrapper, dto)) {
		API_HANDLER_RESP_VO(execModifyLaborDispatch());
	}
private:
	LaborDispatchJsonMVO::Wrapper execQueryLaborDispatch(const LaborDispatchMQuery::Wrapper& query);


	StringJsonVO::Wrapper execModifyLaborDispatch();
};

#include OATPP_CODEGEN_END(ApiController)
#endif // !_LD_M_CONTROLLER_
