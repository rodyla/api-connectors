# Go API client for swagger

## REST API for the Bybit Exchange. 

## Overview
This API client was generated by the [swagger-codegen](https://github.com/swagger-api/swagger-codegen) project.  By using the [swagger-spec](https://github.com/swagger-api/swagger-spec) from a remote server, you can easily generate an API client.

- API version: 1.0.0
- Package version: 1.0.0
- Build package: io.swagger.codegen.languages.GoClientCodegen

## Installation
Put the package under your project folder and add the following in import:
```golang
import "./swagger"
```

## Documentation for API Endpoints

All URIs are relative to *https://api-testnet.bybit.com*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*APIkeyApi* | [**APIkeyInfo**](docs/APIkeyApi.md#apikeyinfo) | **Get** /open-api/api-key | Get account api-key information.
*CommonApi* | [**CommonGet**](docs/CommonApi.md#commonget) | **Get** /v2/public/time | Get bybit server time.
*ConditionalApi* | [**ConditionalCancel**](docs/ConditionalApi.md#conditionalcancel) | **Post** /open-api/stop-order/cancel | Cancel conditional order.
*ConditionalApi* | [**ConditionalCancelAll**](docs/ConditionalApi.md#conditionalcancelall) | **Post** /v2/private/stop-order/cancelAll | Cancel conditional order.
*ConditionalApi* | [**ConditionalGetOrders**](docs/ConditionalApi.md#conditionalgetorders) | **Get** /open-api/stop-order/list | Get my conditional order list.
*ConditionalApi* | [**ConditionalNew**](docs/ConditionalApi.md#conditionalnew) | **Post** /open-api/stop-order/create | Place a new conditional order.
*ConditionalApi* | [**ConditionalReplace**](docs/ConditionalApi.md#conditionalreplace) | **Post** /open-api/stop-order/replace | Replace conditional order. Only incomplete orders can be modified. 
*ExecutionApi* | [**ExecutionGetTrades**](docs/ExecutionApi.md#executiongettrades) | **Get** /v2/private/execution/list | Get user’s trade records.
*FundingApi* | [**FundingGetRate**](docs/FundingApi.md#fundinggetrate) | **Get** /open-api/funding/prev-funding | Funding settlement occurs every 8 hours at 00:00 UTC, 08:00 UTC and 16:00 UTC. The current interval&#39;s fund fee settlement is based on the previous interval&#39;s fund rate. For example, at 16:00, the settlement is based on the fund rate generated at 8:00. The fund rate generated at 16:00 will be used at 0:00 on the next day.
*FundingApi* | [**FundingPredicted**](docs/FundingApi.md#fundingpredicted) | **Get** /open-api/funding/predicted-funding | Get predicted funding rate and funding fee.
*FundingApi* | [**FundingPredictedRate**](docs/FundingApi.md#fundingpredictedrate) | **Get** /open-api/funding/prev-funding-rate | Get predicted funding rate and funding fee.
*KlineApi* | [**KlineGet**](docs/KlineApi.md#klineget) | **Get** /v2/public/kline/list | Query historical kline.
*MarketApi* | [**MarketOrderbook**](docs/MarketApi.md#marketorderbook) | **Get** /v2/public/orderBook/L2 | Get the orderbook.
*MarketApi* | [**MarketSymbolInfo**](docs/MarketApi.md#marketsymbolinfo) | **Get** /v2/public/tickers | Get the latest information for symbol.
*OrderApi* | [**OrderCancel**](docs/OrderApi.md#ordercancel) | **Post** /open-api/order/cancel | Get my active order list.
*OrderApi* | [**OrderCancelAll**](docs/OrderApi.md#ordercancelall) | **Post** /v2/private/order/cancelAll | Get my active order list.
*OrderApi* | [**OrderCancelV2**](docs/OrderApi.md#ordercancelv2) | **Post** /v2/private/order/cancel | Get my active order list.
*OrderApi* | [**OrderGetOrders**](docs/OrderApi.md#ordergetorders) | **Get** /open-api/order/list | Get my active order list.
*OrderApi* | [**OrderNew**](docs/OrderApi.md#ordernew) | **Post** /open-api/order/create | Place active order
*OrderApi* | [**OrderNewV2**](docs/OrderApi.md#ordernewv2) | **Post** /v2/private/order/create | Place active order
*OrderApi* | [**OrderQuery**](docs/OrderApi.md#orderquery) | **Get** /v2/private/order | Get my active order list.
*OrderApi* | [**OrderReplace**](docs/OrderApi.md#orderreplace) | **Post** /open-api/order/replace | Replace active order. Only incomplete orders can be modified. 
*PositionsApi* | [**PositionsChangeMargin**](docs/PositionsApi.md#positionschangemargin) | **Post** /position/change-position-margin | Update margin.
*PositionsApi* | [**PositionsMyPosition**](docs/PositionsApi.md#positionsmyposition) | **Get** /position/list | Get my position list.
*PositionsApi* | [**PositionsSaveLeverage**](docs/PositionsApi.md#positionssaveleverage) | **Post** /user/leverage/save | Change user leverage.
*PositionsApi* | [**PositionsTradingStop**](docs/PositionsApi.md#positionstradingstop) | **Post** /open-api/position/trading-stop | Set Trading-Stop Condition.
*PositionsApi* | [**PositionsUserLeverage**](docs/PositionsApi.md#positionsuserleverage) | **Get** /user/leverage | Get user leverage setting.
*SymbolApi* | [**SymbolGet**](docs/SymbolApi.md#symbolget) | **Get** /v2/public/symbols | Query Symbols.
*WalletApi* | [**WalletGetRecords**](docs/WalletApi.md#walletgetrecords) | **Get** /open-api/wallet/fund/records | Get wallet fund records
*WalletApi* | [**WalletWithdraw**](docs/WalletApi.md#walletwithdraw) | **Get** /open-api/wallet/withdraw/list | Get wallet fund records


## Documentation For Models

 - [ApiKeyBase](docs/ApiKeyBase.md)
 - [ApiKeyInfo](docs/ApiKeyInfo.md)
 - [ConditionalBase](docs/ConditionalBase.md)
 - [ConditionalCancelAllBase](docs/ConditionalCancelAllBase.md)
 - [ConditionalCancelAllRes](docs/ConditionalCancelAllRes.md)
 - [ConditionalOrdersRes](docs/ConditionalOrdersRes.md)
 - [ConditionalOrdersResBase](docs/ConditionalOrdersResBase.md)
 - [ConditionalRes](docs/ConditionalRes.md)
 - [ExtFields](docs/ExtFields.md)
 - [FundRecordBase](docs/FundRecordBase.md)
 - [FundingFeeBase](docs/FundingFeeBase.md)
 - [FundingFeeRes](docs/FundingFeeRes.md)
 - [FundingPredicted](docs/FundingPredicted.md)
 - [FundingPredictedBase](docs/FundingPredictedBase.md)
 - [FundingRate](docs/FundingRate.md)
 - [FundingRateBase](docs/FundingRateBase.md)
 - [FundingRecords](docs/FundingRecords.md)
 - [KlineBase](docs/KlineBase.md)
 - [KlineRes](docs/KlineRes.md)
 - [Leverage](docs/Leverage.md)
 - [LeverageInfo](docs/LeverageInfo.md)
 - [LeverageResult](docs/LeverageResult.md)
 - [LotSizeFilter](docs/LotSizeFilter.md)
 - [OderBookRes](docs/OderBookRes.md)
 - [OrderBookBase](docs/OrderBookBase.md)
 - [OrderCancelAllBase](docs/OrderCancelAllBase.md)
 - [OrderCancelAllRes](docs/OrderCancelAllRes.md)
 - [OrderCancelBase](docs/OrderCancelBase.md)
 - [OrderListBase](docs/OrderListBase.md)
 - [OrderListData](docs/OrderListData.md)
 - [OrderRes](docs/OrderRes.md)
 - [OrderResBase](docs/OrderResBase.md)
 - [Position](docs/Position.md)
 - [PositionInfo](docs/PositionInfo.md)
 - [PriceFilter](docs/PriceFilter.md)
 - [QueryOrderBase](docs/QueryOrderBase.md)
 - [QueryOrderRes](docs/QueryOrderRes.md)
 - [ReplaceConditionalBase](docs/ReplaceConditionalBase.md)
 - [ReplaceOrderBase](docs/ReplaceOrderBase.md)
 - [ServerTime](docs/ServerTime.md)
 - [SymbolInfo](docs/SymbolInfo.md)
 - [SymbolInfoBase](docs/SymbolInfoBase.md)
 - [SymbolTickInfo](docs/SymbolTickInfo.md)
 - [Symbols](docs/Symbols.md)
 - [TradeRecords](docs/TradeRecords.md)
 - [TradeRecordsBase](docs/TradeRecordsBase.md)
 - [TradeRecordsInfo](docs/TradeRecordsInfo.md)
 - [TradingStopBase](docs/TradingStopBase.md)
 - [TradingStopRes](docs/TradingStopRes.md)
 - [WithdrawRecords](docs/WithdrawRecords.md)
 - [WithdrawResBase](docs/WithdrawResBase.md)


## Documentation For Authorization

## apiKey
- **Type**: API key 

Example
```golang
auth := context.WithValue(context.Background(), sw.ContextAPIKey, sw.APIKey{
	Key: "APIKEY",
	Prefix: "Bearer", // Omit if not necessary.
})
r, err := client.Service.Operation(auth, args)
```
## apiSignature
- **Type**: API key 

Example
```golang
auth := context.WithValue(context.Background(), sw.ContextAPIKey, sw.APIKey{
	Key: "APIKEY",
	Prefix: "Bearer", // Omit if not necessary.
})
r, err := client.Service.Operation(auth, args)
```
## timestamp
- **Type**: API key 

Example
```golang
auth := context.WithValue(context.Background(), sw.ContextAPIKey, sw.APIKey{
	Key: "APIKEY",
	Prefix: "Bearer", // Omit if not necessary.
})
r, err := client.Service.Operation(auth, args)
```

## Author

support@bybit.com

