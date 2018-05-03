#pragma once

#include "IHttpRequest.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "HttpRequestManager.generated.h"

using namespace UF;
using namespace UP;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(HttpRequestManagerDelegate, FString, Content, int32, StatusCode);

UENUM()
enum EHttpRequestType
{
	_Get,_Post,
};

UCLASS()
class VRPLUGIN_API UHttpRequestManager : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "UHttpRequestManager")
		static UHttpRequestManager* HttpRequestString(FString url, EHttpRequestType reType, FString content);

	UPROPERTY(BlueprintAssignable)
		HttpRequestManagerDelegate OnSuccess;
	UPROPERTY(BlueprintAssignable)
		HttpRequestManagerDelegate OnFailed;

private:
	void StartRequest(FString url, EHttpRequestType reType, FString content);
	void OnRequestComplete(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded);
}