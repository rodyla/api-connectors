/**
 * Bybit API
 * ## REST API for the Bybit Exchange. 
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@bybit.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

package io.swagger.client.model;

import io.swagger.client.model.ConditionalRes;
import java.util.*;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

/**
 * Get order list response
 **/
@ApiModel(description = "Get order list response")
public class ConditionalOrdersRes {
  
  @SerializedName("data")
  private List<ConditionalRes> data = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public List<ConditionalRes> getData() {
    return data;
  }
  public void setData(List<ConditionalRes> data) {
    this.data = data;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ConditionalOrdersRes conditionalOrdersRes = (ConditionalOrdersRes) o;
    return (this.data == null ? conditionalOrdersRes.data == null : this.data.equals(conditionalOrdersRes.data));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.data == null ? 0: this.data.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ConditionalOrdersRes {\n");
    
    sb.append("  data: ").append(data).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
