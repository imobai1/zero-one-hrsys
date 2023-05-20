#pragma once

#ifndef _TESTCONTROLLER_H_
#define _TESTCONTROLLER_H_

#include "domain/vo/BaseJsonVO.h"
#include "ApiHelper.h"
#include "domain/query/patentInformation/patentInformationQuery.h"
#include "domain/dto/patentInformation/patentInformationDTO.h"
#include "domain/vo/patentInformation/patentInformationVO.h"


#include OATPP_CODEGEN_BEGIN(ApiController) // 0

/**
 * ���Կ�����
 */
class PatentController : public oatpp::web::server::api::ApiController // 1
{
	// 2 ����������������
	API_ACCESS_DECLARE(PatentController);
public: // ����ӿ�
	// 3 ����ӿ�����
	ENDPOINT_INFO(queryTest) {
		// ����ӿڱ���
		info->summary = "patentInformation query";
		// ������Ӧ��������
		API_DEF_ADD_RSP_JSON_WRAPPER(PatentPageJsonVO);
		// �����ҳ��ѯ��������
		API_DEF_ADD_PAGE_PARAMS();
		// ���������ѯ����
		info->queryParams.add<String>("ZLH").description = ZH_WORDS_GETTER("patentInformation.field.ZLH");
		info->queryParams["ZLH"].addExample("default", String("patentInformation"));
	}
	// 4 ����ӿڶ˵�
	ENDPOINT(API_M_GET, "/test", queryTest, QUERIES(QueryParams, qps)) {
		// ������ѯ����������������ģ�Ͷ���
		API_HANDLER_QUERY_PARAM(query, PatentQuery, qps);
		// ��Ӧ���
		API_HANDLER_RESP_VO(execQueryPatent(query));
	}
private: // ����ӿ�ִ�к���
	// 5 ����ӿڵ�ִ�к���
	PatentPageJsonVO::Wrapper execQueryPatent(const PatentQuery::Wrapper& query);
};

#include OATPP_CODEGEN_END(ApiController) // 0

#endif // !_TESTCONTROLLER_H_