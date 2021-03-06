/*
 * Bybit API
 *
 * ## REST API for the Bybit Exchange. 
 *
 * API version: 1.0.0
 * Contact: support@bybit.com
 * Generated by: Swagger Codegen (https://github.com/swagger-api/swagger-codegen.git)
 */

package swagger

// Replace conditional order response
type ReplaceConditionalBase struct {
	RetCode float32 `json:"ret_code,omitempty"`
	RetMsg string `json:"ret_msg,omitempty"`
	ExtCode string `json:"ext_code,omitempty"`
	ExtInfo string `json:"ext_info,omitempty"`
	Result string `json:"result,omitempty"`
	TimeNow string `json:"time_now,omitempty"`
}
