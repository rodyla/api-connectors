/**
 * Bybit API
 * ## REST API for the Bybit Exchange. 
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@bybit.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.8.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * ExtFields.h
 *
 * extra fields
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_ExtFields_H_
#define IO_SWAGGER_CLIENT_MODEL_ExtFields_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// extra fields
/// </summary>
class  ExtFields
    : public ModelBase
{
public:
    ExtFields();
    virtual ~ExtFields();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ExtFields members

    /// <summary>
    /// 
    /// </summary>
    double getOReqNum() const;
    bool oReqNumIsSet() const;
    void unsetO_req_num();
    void setOReqNum(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getXreqType() const;
    bool xreqTypeIsSet() const;
    void unsetXreq_type();
    void setXreqType(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getXreqOffset() const;
    bool xreqOffsetIsSet() const;
    void unsetXreq_offset();
    void setXreqOffset(double value);

protected:
    double m_O_req_num;
    bool m_O_req_numIsSet;
    utility::string_t m_Xreq_type;
    bool m_Xreq_typeIsSet;
    double m_Xreq_offset;
    bool m_Xreq_offsetIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_ExtFields_H_ */
