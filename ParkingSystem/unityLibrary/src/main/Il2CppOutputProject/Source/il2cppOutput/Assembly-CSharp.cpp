#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<Cordinate>
struct List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Slot>
struct List_1_t056E7EF741034056C75CA26D0F661E2CA19929B2;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Cordinate[]
struct CordinateU5BU5D_t8655F017F2B190AD1B42B96E051641D1594F70C7;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// Slot[]
struct SlotU5BU5D_t67D96692F7E341C235A4363C22953D29A58C4759;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// UnityEngine.AndroidJavaRunnable
struct AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60;
// AndroidUnityHelper
struct AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Cordinate
struct Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Garage
struct Garage_t06BD12337A8A4FD8E5DA60B4152ED07D4585BE3F;
// GarageAPIController
struct GarageAPIController_tC16687EB182448C89A7515B7FB04D45B2C13D2BF;
// GarageData
struct GarageData_t6AC8C4C188330A4D476F559113CB4E358F161C9B;
// GarageImageService
struct GarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D;
// GarageService
struct GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// HeaderController
struct HeaderController_tD42AE2C05B58D01740A4881B46229216CC68DAD7;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// LoadingBufferScript
struct LoadingBufferScript_t9F0DB7DEB7D015484C5781243AE2727AEAF944FE;
// Manager
struct Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// Slot
struct Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C;
// SlotApiController
struct SlotApiController_tD8CA2BAD7CF4BD0A8E75FCE437805A296FA89856;
// SlotData
struct SlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC;
// SlotGeneratorService
struct SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B;
// SlotImageProps
struct SlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3;
// SlotService
struct SlotService_t28D8E273470E6AA1A2BF11B6E8AC75C7B26A6A65;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// SupportBackScript
struct SupportBackScript_t6862C3E1319BFE5DE5F204F679A1DEFBE7B3D54E;
// Test
struct Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WWWForm
struct WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB;
// AndroidUnityHelper/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t1096B10413447D6B1F0AB53451DCCABF6ECAC272;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// GarageAPIController/<getJson>d__1
struct U3CgetJsonU3Ed__1_tCE16584E7ED48D146D9D9439AE1BBEDB72F045CD;
// GarageImageService/<getJson>d__3
struct U3CgetJsonU3Ed__3_tA90AFA1FB2BD2B1BEE29AD706A2E82349D58DB0B;
// GarageService/<getJson>d__10
struct U3CgetJsonU3Ed__10_tAC3F70D6DB574296B60F1293582E27585AE21C41;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// SlotApiController/<getJson>d__1
struct U3CgetJsonU3Ed__1_t69582BBB54FE0FE8110D44195366E8A689264514;
// SlotGeneratorService/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_tE64AC2344E78812B4D2D693C8918CB2BB01D13EE;
// SlotService/<getJson>d__6
struct U3CgetJsonU3Ed__6_t0DFEF59D02C34098F86C4D96C3AC0B6225C43935;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass18_0_tE64AC2344E78812B4D2D693C8918CB2BB01D13EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_t1096B10413447D6B1F0AB53451DCCABF6ECAC272_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CgetJsonU3Ed__10_tAC3F70D6DB574296B60F1293582E27585AE21C41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CgetJsonU3Ed__1_t69582BBB54FE0FE8110D44195366E8A689264514_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CgetJsonU3Ed__1_tCE16584E7ED48D146D9D9439AE1BBEDB72F045CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CgetJsonU3Ed__3_tA90AFA1FB2BD2B1BEE29AD706A2E82349D58DB0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CgetJsonU3Ed__6_t0DFEF59D02C34098F86C4D96C3AC0B6225C43935_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0CADA8F29D97E00DEFB9B67A721B7C32DBA8ABB8;
IL2CPP_EXTERN_C String_t* _stringLiteral0E83B52D310D75130365A465E921922901518CEE;
IL2CPP_EXTERN_C String_t* _stringLiteral0EE3B7917C004D47E1B969255AA7B9588606CDF4;
IL2CPP_EXTERN_C String_t* _stringLiteral2DFA565CA0FCE84DC024B070D2E561D85473C510;
IL2CPP_EXTERN_C String_t* _stringLiteral3F171E8EC92360C137466719834B61B4A802325E;
IL2CPP_EXTERN_C String_t* _stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192;
IL2CPP_EXTERN_C String_t* _stringLiteral42F0122AC71428788819CD2B18E1FE1914FE8F9B;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral58D5E560A9A2CCCAC11B88F2BF13A962ECA2B7DC;
IL2CPP_EXTERN_C String_t* _stringLiteral62FB73CE9FCAFD8066B14FDCA60910C5D88408FE;
IL2CPP_EXTERN_C String_t* _stringLiteral6C0ED7B20A8D30BD96C58C4E9E51DEB7CF8B832B;
IL2CPP_EXTERN_C String_t* _stringLiteral78FF4FA942C1B42A8039C2BA8E962E337610543C;
IL2CPP_EXTERN_C String_t* _stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D;
IL2CPP_EXTERN_C String_t* _stringLiteral84EE66A73B24F0E9CEE249A5A8879E93FCC66EB0;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB842D8176A0536EC687F8FA6722F079227ABFF5E;
IL2CPP_EXTERN_C String_t* _stringLiteralC6BB6E51318A73F893E5ECC5FA841B3043DC4C87;
IL2CPP_EXTERN_C String_t* _stringLiteralCC70DA75E28293911AAA2D3AF8B19C9B58F58EA9;
IL2CPP_EXTERN_C String_t* _stringLiteralCE74EAFB65D4442347992C90C032387B6B4DEBB7;
IL2CPP_EXTERN_C String_t* _stringLiteralD039CFDEE665DEC400C023C4ED4217EF7BC6B987;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D4BD313D116E115CE883A0D209DEF099036A14;
IL2CPP_EXTERN_C String_t* _stringLiteralEA2B0DD71CE7277FBC9C25FB5D55691853CF2DD3;
IL2CPP_EXTERN_C String_t* _stringLiteralF202BD9C29F9FE8967D2598978C59BC250D49ECC;
IL2CPP_EXTERN_C String_t* _stringLiteralF449ECB799492B6E94508C177821573A9593DCDE;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFFF2E3CA72364727F71AA5E2A535E3DD8A40037F;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisGarageAPIController_tC16687EB182448C89A7515B7FB04D45B2C13D2BF_mAB54D78497DA0FB589A167B5BBD8B377D5CEFDCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisGarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D_mAEE002D9E9C8787145813DC30D3D4845B2B2C0A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisGarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2_mF3C7E0F724E54950DA7635A3E5860809B6BAB106_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisSlotApiController_tD8CA2BAD7CF4BD0A8E75FCE437805A296FA89856_mA85E99BD1EFE7A5FD6726C8C70C85A9C4E6223EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisSlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B_m16FA53573BAAD7FD5ED3F6CB2B79C582A35DC931_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisSlotService_t28D8E273470E6AA1A2BF11B6E8AC75C7B26A6A65_mD508EDB1E52432B78AC24958C5B8C96AEC04250C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisAndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24_m0DD040BEDD5D8FCF813D374340B26B0CD14D9756_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisManager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F_m1D912FA48BEB5C48B62F84938110A897978707E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24_mA65F6E8BE1A0D63B06B7C1F27875CB7A47C0F299_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D_m56021CD147BBBCCE139C677B20C4142510E8C36A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2_m717B144187840E88C5BE34ED8084FB43718EDA9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHeaderController_tD42AE2C05B58D01740A4881B46229216CC68DAD7_mDD02CA6023A624C9BBC0D3BEBA4675B37E00FA7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3_m9C09C585E17F9383420667FF762857FBF7F138CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mAD305143492AAC7F276F069F770669D0346366DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA62707402B14898234C649AEE6E092C45B31E6FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m388FEDED591A9DB7405CD231BCE0F27C9DDC3384_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3_mA28AAA0755ED22EB2362BBC9E639BF56223E3693_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisGarageData_t6AC8C4C188330A4D476F559113CB4E358F161C9B_m09F85DE8FC777181B288D68142797A86D61601A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisSlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC_m0FCE72AEA33EDFA7E3583E34EE8A3265C2FCEC51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m6BB3FBE04A346BEDADE16304C50350012B85D750_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m8F5F75D5872251B7E04B6D385D1BDD52DD9F3B5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass18_0_U3CaddSlotImagePropsU3Eb__0_mA9F739BDA8787E717A4CA9AFD25788C1FA68A306_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CshowAndroidToastMessageU3Eb__0_m0EE4766D69B9C9CFEDF507860FC71F373A13151B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CgetJsonU3Ed__10_System_Collections_IEnumerator_Reset_m4F26EF2F7B57C9E4DF2EF2581489D751BB485BD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CgetJsonU3Ed__1_System_Collections_IEnumerator_Reset_mE55187E4FFAFE46FE237B86E3DF0D90AFE2EC9D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CgetJsonU3Ed__1_System_Collections_IEnumerator_Reset_mF0BA47FD3FC3DF00A511433152AE36A1776E5248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CgetJsonU3Ed__3_System_Collections_IEnumerator_Reset_mAC2ACFB8FBF97BA1A10AA28A3747E4045A217A11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CgetJsonU3Ed__6_System_Collections_IEnumerator_Reset_mAAA4E3EE7C752D2C452725D0DD1E7B0C46A2148C_RuntimeMethod_var;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<Cordinate>
struct List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CordinateU5BU5D_t8655F017F2B190AD1B42B96E051641D1594F70C7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222, ____items_1)); }
	inline CordinateU5BU5D_t8655F017F2B190AD1B42B96E051641D1594F70C7* get__items_1() const { return ____items_1; }
	inline CordinateU5BU5D_t8655F017F2B190AD1B42B96E051641D1594F70C7** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CordinateU5BU5D_t8655F017F2B190AD1B42B96E051641D1594F70C7* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	CordinateU5BU5D_t8655F017F2B190AD1B42B96E051641D1594F70C7* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222_StaticFields, ____emptyArray_5)); }
	inline CordinateU5BU5D_t8655F017F2B190AD1B42B96E051641D1594F70C7* get__emptyArray_5() const { return ____emptyArray_5; }
	inline CordinateU5BU5D_t8655F017F2B190AD1B42B96E051641D1594F70C7** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(CordinateU5BU5D_t8655F017F2B190AD1B42B96E051641D1594F70C7* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Slot>
struct List_1_t056E7EF741034056C75CA26D0F661E2CA19929B2  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SlotU5BU5D_t67D96692F7E341C235A4363C22953D29A58C4759* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t056E7EF741034056C75CA26D0F661E2CA19929B2, ____items_1)); }
	inline SlotU5BU5D_t67D96692F7E341C235A4363C22953D29A58C4759* get__items_1() const { return ____items_1; }
	inline SlotU5BU5D_t67D96692F7E341C235A4363C22953D29A58C4759** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SlotU5BU5D_t67D96692F7E341C235A4363C22953D29A58C4759* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t056E7EF741034056C75CA26D0F661E2CA19929B2, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t056E7EF741034056C75CA26D0F661E2CA19929B2, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t056E7EF741034056C75CA26D0F661E2CA19929B2, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t056E7EF741034056C75CA26D0F661E2CA19929B2_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SlotU5BU5D_t67D96692F7E341C235A4363C22953D29A58C4759* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t056E7EF741034056C75CA26D0F661E2CA19929B2_StaticFields, ____emptyArray_5)); }
	inline SlotU5BU5D_t67D96692F7E341C235A4363C22953D29A58C4759* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SlotU5BU5D_t67D96692F7E341C235A4363C22953D29A58C4759** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SlotU5BU5D_t67D96692F7E341C235A4363C22953D29A58C4759* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// Cordinate
struct Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497  : public RuntimeObject
{
public:
	// System.String Cordinate::id
	String_t* ___id_0;
	// System.Single Cordinate::x
	float ___x_1;
	// System.Single Cordinate::y
	float ___y_2;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_0), (void*)value);
	}

	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}
};


// Garage
struct Garage_t06BD12337A8A4FD8E5DA60B4152ED07D4585BE3F  : public RuntimeObject
{
public:
	// System.String Garage::id
	String_t* ___id_0;
	// System.String Garage::name
	String_t* ___name_1;
	// System.String Garage::parkingMap
	String_t* ___parkingMap_2;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Garage_t06BD12337A8A4FD8E5DA60B4152ED07D4585BE3F, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_0), (void*)value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(Garage_t06BD12337A8A4FD8E5DA60B4152ED07D4585BE3F, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_parkingMap_2() { return static_cast<int32_t>(offsetof(Garage_t06BD12337A8A4FD8E5DA60B4152ED07D4585BE3F, ___parkingMap_2)); }
	inline String_t* get_parkingMap_2() const { return ___parkingMap_2; }
	inline String_t** get_address_of_parkingMap_2() { return &___parkingMap_2; }
	inline void set_parkingMap_2(String_t* value)
	{
		___parkingMap_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parkingMap_2), (void*)value);
	}
};


// GarageData
struct GarageData_t6AC8C4C188330A4D476F559113CB4E358F161C9B  : public RuntimeObject
{
public:
	// Garage GarageData::data
	Garage_t06BD12337A8A4FD8E5DA60B4152ED07D4585BE3F * ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(GarageData_t6AC8C4C188330A4D476F559113CB4E358F161C9B, ___data_0)); }
	inline Garage_t06BD12337A8A4FD8E5DA60B4152ED07D4585BE3F * get_data_0() const { return ___data_0; }
	inline Garage_t06BD12337A8A4FD8E5DA60B4152ED07D4585BE3F ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(Garage_t06BD12337A8A4FD8E5DA60B4152ED07D4585BE3F * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_0), (void*)value);
	}
};


// Slot
struct Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C  : public RuntimeObject
{
public:
	// System.Int32 Slot::id
	int32_t ___id_0;
	// System.String Slot::name
	String_t* ___name_1;
	// System.Boolean Slot::isActive
	bool ___isActive_2;
	// System.Collections.Generic.List`1<Cordinate> Slot::coordinates
	List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * ___coordinates_3;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_isActive_2() { return static_cast<int32_t>(offsetof(Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C, ___isActive_2)); }
	inline bool get_isActive_2() const { return ___isActive_2; }
	inline bool* get_address_of_isActive_2() { return &___isActive_2; }
	inline void set_isActive_2(bool value)
	{
		___isActive_2 = value;
	}

	inline static int32_t get_offset_of_coordinates_3() { return static_cast<int32_t>(offsetof(Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C, ___coordinates_3)); }
	inline List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * get_coordinates_3() const { return ___coordinates_3; }
	inline List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 ** get_address_of_coordinates_3() { return &___coordinates_3; }
	inline void set_coordinates_3(List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * value)
	{
		___coordinates_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coordinates_3), (void*)value);
	}
};


// SlotData
struct SlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Slot> SlotData::data
	List_1_t056E7EF741034056C75CA26D0F661E2CA19929B2 * ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(SlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC, ___data_0)); }
	inline List_1_t056E7EF741034056C75CA26D0F661E2CA19929B2 * get_data_0() const { return ___data_0; }
	inline List_1_t056E7EF741034056C75CA26D0F661E2CA19929B2 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(List_1_t056E7EF741034056C75CA26D0F661E2CA19929B2 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_0), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.WWWForm
struct WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Byte[]> UnityEngine.WWWForm::formData
	List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * ___formData_0;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fieldNames
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___fieldNames_1;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fileNames
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___fileNames_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::types
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___types_3;
	// System.Byte[] UnityEngine.WWWForm::boundary
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___boundary_4;
	// System.Boolean UnityEngine.WWWForm::containsFiles
	bool ___containsFiles_5;

public:
	inline static int32_t get_offset_of_formData_0() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___formData_0)); }
	inline List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * get_formData_0() const { return ___formData_0; }
	inline List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE ** get_address_of_formData_0() { return &___formData_0; }
	inline void set_formData_0(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * value)
	{
		___formData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___formData_0), (void*)value);
	}

	inline static int32_t get_offset_of_fieldNames_1() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___fieldNames_1)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_fieldNames_1() const { return ___fieldNames_1; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_fieldNames_1() { return &___fieldNames_1; }
	inline void set_fieldNames_1(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___fieldNames_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fieldNames_1), (void*)value);
	}

	inline static int32_t get_offset_of_fileNames_2() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___fileNames_2)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_fileNames_2() const { return ___fileNames_2; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_fileNames_2() { return &___fileNames_2; }
	inline void set_fileNames_2(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___fileNames_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fileNames_2), (void*)value);
	}

	inline static int32_t get_offset_of_types_3() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___types_3)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_types_3() const { return ___types_3; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_types_3() { return &___types_3; }
	inline void set_types_3(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___types_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___types_3), (void*)value);
	}

	inline static int32_t get_offset_of_boundary_4() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___boundary_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_boundary_4() const { return ___boundary_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_boundary_4() { return &___boundary_4; }
	inline void set_boundary_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___boundary_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundary_4), (void*)value);
	}

	inline static int32_t get_offset_of_containsFiles_5() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___containsFiles_5)); }
	inline bool get_containsFiles_5() const { return ___containsFiles_5; }
	inline bool* get_address_of_containsFiles_5() { return &___containsFiles_5; }
	inline void set_containsFiles_5(bool value)
	{
		___containsFiles_5 = value;
	}
};


// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// AndroidUnityHelper/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t1096B10413447D6B1F0AB53451DCCABF6ECAC272  : public RuntimeObject
{
public:
	// AndroidUnityHelper AndroidUnityHelper/<>c__DisplayClass6_0::<>4__this
	AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24 * ___U3CU3E4__this_0;
	// System.String AndroidUnityHelper/<>c__DisplayClass6_0::message
	String_t* ___message_1;
	// UnityEngine.AndroidJavaClass AndroidUnityHelper/<>c__DisplayClass6_0::toastClass
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___toastClass_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t1096B10413447D6B1F0AB53451DCCABF6ECAC272, ___U3CU3E4__this_0)); }
	inline AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_message_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t1096B10413447D6B1F0AB53451DCCABF6ECAC272, ___message_1)); }
	inline String_t* get_message_1() const { return ___message_1; }
	inline String_t** get_address_of_message_1() { return &___message_1; }
	inline void set_message_1(String_t* value)
	{
		___message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_1), (void*)value);
	}

	inline static int32_t get_offset_of_toastClass_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t1096B10413447D6B1F0AB53451DCCABF6ECAC272, ___toastClass_2)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_toastClass_2() const { return ___toastClass_2; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_toastClass_2() { return &___toastClass_2; }
	inline void set_toastClass_2(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___toastClass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toastClass_2), (void*)value);
	}
};


// GarageAPIController/<getJson>d__1
struct U3CgetJsonU3Ed__1_tCE16584E7ED48D146D9D9439AE1BBEDB72F045CD  : public RuntimeObject
{
public:
	// System.Int32 GarageAPIController/<getJson>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GarageAPIController/<getJson>d__1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.Networking.UnityWebRequest GarageAPIController/<getJson>d__1::<request>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CrequestU3E5__2_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CgetJsonU3Ed__1_tCE16584E7ED48D146D9D9439AE1BBEDB72F045CD, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CgetJsonU3Ed__1_tCE16584E7ED48D146D9D9439AE1BBEDB72F045CD, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrequestU3E5__2_2() { return static_cast<int32_t>(offsetof(U3CgetJsonU3Ed__1_tCE16584E7ED48D146D9D9439AE1BBEDB72F045CD, ___U3CrequestU3E5__2_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CrequestU3E5__2_2() const { return ___U3CrequestU3E5__2_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CrequestU3E5__2_2() { return &___U3CrequestU3E5__2_2; }
	inline void set_U3CrequestU3E5__2_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CrequestU3E5__2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrequestU3E5__2_2), (void*)value);
	}
};


// GarageImageService/<getJson>d__3
struct U3CgetJsonU3Ed__3_tA90AFA1FB2BD2B1BEE29AD706A2E82349D58DB0B  : public RuntimeObject
{
public:
	// System.Int32 GarageImageService/<getJson>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GarageImageService/<getJson>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.String GarageImageService/<getJson>d__3::parkingMap
	String_t* ___parkingMap_2;
	// GarageImageService GarageImageService/<getJson>d__3::<>4__this
	GarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D * ___U3CU3E4__this_3;
	// UnityEngine.Networking.UnityWebRequest GarageImageService/<getJson>d__3::<request>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CrequestU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CgetJsonU3Ed__3_tA90AFA1FB2BD2B1BEE29AD706A2E82349D58DB0B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CgetJsonU3Ed__3_tA90AFA1FB2BD2B1BEE29AD706A2E82349D58DB0B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_parkingMap_2() { return static_cast<int32_t>(offsetof(U3CgetJsonU3Ed__3_tA90AFA1FB2BD2B1BEE29AD706A2E82349D58DB0B, ___parkingMap_2)); }
	inline String_t* get_parkingMap_2() const { return ___parkingMap_2; }
	inline String_t** get_address_of_parkingMap_2() { return &___parkingMap_2; }
	inline void set_parkingMap_2(String_t* value)
	{
		___parkingMap_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parkingMap_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CgetJsonU3Ed__3_tA90AFA1FB2BD2B1BEE29AD706A2E82349D58DB0B, ___U3CU3E4__this_3)); }
	inline GarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline GarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(GarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrequestU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CgetJsonU3Ed__3_tA90AFA1FB2BD2B1BEE29AD706A2E82349D58DB0B, ___U3CrequestU3E5__2_4)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CrequestU3E5__2_4() const { return ___U3CrequestU3E5__2_4; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CrequestU3E5__2_4() { return &___U3CrequestU3E5__2_4; }
	inline void set_U3CrequestU3E5__2_4(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CrequestU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrequestU3E5__2_4), (void*)value);
	}
};


// GarageService/<getJson>d__10
struct U3CgetJsonU3Ed__10_tAC3F70D6DB574296B60F1293582E27585AE21C41  : public RuntimeObject
{
public:
	// System.Int32 GarageService/<getJson>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GarageService/<getJson>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int32 GarageService/<getJson>d__10::placeId
	int32_t ___placeId_2;
	// GarageService GarageService/<getJson>d__10::<>4__this
	GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * ___U3CU3E4__this_3;
	// UnityEngine.Networking.UnityWebRequest GarageService/<getJson>d__10::<request>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CrequestU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CgetJsonU3Ed__10_tAC3F70D6DB574296B60F1293582E27585AE21C41, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CgetJsonU3Ed__10_tAC3F70D6DB574296B60F1293582E27585AE21C41, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_placeId_2() { return static_cast<int32_t>(offsetof(U3CgetJsonU3Ed__10_tAC3F70D6DB574296B60F1293582E27585AE21C41, ___placeId_2)); }
	inline int32_t get_placeId_2() const { return ___placeId_2; }
	inline int32_t* get_address_of_placeId_2() { return &___placeId_2; }
	inline void set_placeId_2(int32_t value)
	{
		___placeId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CgetJsonU3Ed__10_tAC3F70D6DB574296B60F1293582E27585AE21C41, ___U3CU3E4__this_3)); }
	inline GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrequestU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CgetJsonU3Ed__10_tAC3F70D6DB574296B60F1293582E27585AE21C41, ___U3CrequestU3E5__2_4)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CrequestU3E5__2_4() const { return ___U3CrequestU3E5__2_4; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CrequestU3E5__2_4() { return &___U3CrequestU3E5__2_4; }
	inline void set_U3CrequestU3E5__2_4(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CrequestU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrequestU3E5__2_4), (void*)value);
	}
};


// SlotApiController/<getJson>d__1
struct U3CgetJsonU3Ed__1_t69582BBB54FE0FE8110D44195366E8A689264514  : public RuntimeObject
{
public:
	// System.Int32 SlotApiController/<getJson>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SlotApiController/<getJson>d__1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.Networking.UnityWebRequest SlotApiController/<getJson>d__1::<request>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CrequestU3E5__2_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CgetJsonU3Ed__1_t69582BBB54FE0FE8110D44195366E8A689264514, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CgetJsonU3Ed__1_t69582BBB54FE0FE8110D44195366E8A689264514, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrequestU3E5__2_2() { return static_cast<int32_t>(offsetof(U3CgetJsonU3Ed__1_t69582BBB54FE0FE8110D44195366E8A689264514, ___U3CrequestU3E5__2_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CrequestU3E5__2_2() const { return ___U3CrequestU3E5__2_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CrequestU3E5__2_2() { return &___U3CrequestU3E5__2_2; }
	inline void set_U3CrequestU3E5__2_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CrequestU3E5__2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrequestU3E5__2_2), (void*)value);
	}
};


// SlotGeneratorService/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_tE64AC2344E78812B4D2D693C8918CB2BB01D13EE  : public RuntimeObject
{
public:
	// SlotGeneratorService SlotGeneratorService/<>c__DisplayClass18_0::<>4__this
	SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * ___U3CU3E4__this_0;
	// UnityEngine.UI.Button SlotGeneratorService/<>c__DisplayClass18_0::imageButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___imageButton_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass18_0_tE64AC2344E78812B4D2D693C8918CB2BB01D13EE, ___U3CU3E4__this_0)); }
	inline SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_imageButton_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass18_0_tE64AC2344E78812B4D2D693C8918CB2BB01D13EE, ___imageButton_1)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_imageButton_1() const { return ___imageButton_1; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_imageButton_1() { return &___imageButton_1; }
	inline void set_imageButton_1(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___imageButton_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___imageButton_1), (void*)value);
	}
};


// SlotService/<getJson>d__6
struct U3CgetJsonU3Ed__6_t0DFEF59D02C34098F86C4D96C3AC0B6225C43935  : public RuntimeObject
{
public:
	// System.Int32 SlotService/<getJson>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SlotService/<getJson>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int32 SlotService/<getJson>d__6::placeId
	int32_t ___placeId_2;
	// SlotService SlotService/<getJson>d__6::<>4__this
	SlotService_t28D8E273470E6AA1A2BF11B6E8AC75C7B26A6A65 * ___U3CU3E4__this_3;
	// UnityEngine.Networking.UnityWebRequest SlotService/<getJson>d__6::<request>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CrequestU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CgetJsonU3Ed__6_t0DFEF59D02C34098F86C4D96C3AC0B6225C43935, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CgetJsonU3Ed__6_t0DFEF59D02C34098F86C4D96C3AC0B6225C43935, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_placeId_2() { return static_cast<int32_t>(offsetof(U3CgetJsonU3Ed__6_t0DFEF59D02C34098F86C4D96C3AC0B6225C43935, ___placeId_2)); }
	inline int32_t get_placeId_2() const { return ___placeId_2; }
	inline int32_t* get_address_of_placeId_2() { return &___placeId_2; }
	inline void set_placeId_2(int32_t value)
	{
		___placeId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CgetJsonU3Ed__6_t0DFEF59D02C34098F86C4D96C3AC0B6225C43935, ___U3CU3E4__this_3)); }
	inline SlotService_t28D8E273470E6AA1A2BF11B6E8AC75C7B26A6A65 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline SlotService_t28D8E273470E6AA1A2BF11B6E8AC75C7B26A6A65 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(SlotService_t28D8E273470E6AA1A2BF11B6E8AC75C7B26A6A65 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrequestU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CgetJsonU3Ed__6_t0DFEF59D02C34098F86C4D96C3AC0B6225C43935, ___U3CrequestU3E5__2_4)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CrequestU3E5__2_4() const { return ___U3CrequestU3E5__2_4; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CrequestU3E5__2_4() { return &___U3CrequestU3E5__2_4; }
	inline void set_U3CrequestU3E5__2_4(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CrequestU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrequestU3E5__2_4), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Slot>
struct Enumerator_t04B2B6D39010AE5234583088426C4035B4AD22F8 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t056E7EF741034056C75CA26D0F661E2CA19929B2 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t04B2B6D39010AE5234583088426C4035B4AD22F8, ___list_0)); }
	inline List_1_t056E7EF741034056C75CA26D0F661E2CA19929B2 * get_list_0() const { return ___list_0; }
	inline List_1_t056E7EF741034056C75CA26D0F661E2CA19929B2 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t056E7EF741034056C75CA26D0F661E2CA19929B2 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t04B2B6D39010AE5234583088426C4035B4AD22F8, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t04B2B6D39010AE5234583088426C4035B4AD22F8, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t04B2B6D39010AE5234583088426C4035B4AD22F8, ___current_3)); }
	inline Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * get_current_3() const { return ___current_3; }
	inline Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4  : public AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E
{
public:

public:
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RuntimePlatform
struct RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextAnchor
struct TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.UnityWebRequest/Result
struct Result_t3233C0F690EC3844C8E0C4649568659679AFBE75 
{
public:
	// System.Int32 UnityEngine.Networking.UnityWebRequest/Result::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Result_t3233C0F690EC3844C8E0C4649568659679AFBE75, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_DownloadHandler_1)); }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_UploadHandler_2)); }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com* ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.AndroidJavaRunnable
struct AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// AndroidUnityHelper
struct AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AndroidJavaClass AndroidUnityHelper::UnityPlayer
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___UnityPlayer_4;
	// UnityEngine.AndroidJavaObject AndroidUnityHelper::currentActivity
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___currentActivity_5;
	// System.Int32 AndroidUnityHelper::placeId
	int32_t ___placeId_6;

public:
	inline static int32_t get_offset_of_UnityPlayer_4() { return static_cast<int32_t>(offsetof(AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24, ___UnityPlayer_4)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_UnityPlayer_4() const { return ___UnityPlayer_4; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_UnityPlayer_4() { return &___UnityPlayer_4; }
	inline void set_UnityPlayer_4(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___UnityPlayer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnityPlayer_4), (void*)value);
	}

	inline static int32_t get_offset_of_currentActivity_5() { return static_cast<int32_t>(offsetof(AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24, ___currentActivity_5)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_currentActivity_5() const { return ___currentActivity_5; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_currentActivity_5() { return &___currentActivity_5; }
	inline void set_currentActivity_5(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___currentActivity_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentActivity_5), (void*)value);
	}

	inline static int32_t get_offset_of_placeId_6() { return static_cast<int32_t>(offsetof(AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24, ___placeId_6)); }
	inline int32_t get_placeId_6() const { return ___placeId_6; }
	inline int32_t* get_address_of_placeId_6() { return &___placeId_6; }
	inline void set_placeId_6(int32_t value)
	{
		___placeId_6 = value;
	}
};


// GarageAPIController
struct GarageAPIController_tC16687EB182448C89A7515B7FB04D45B2C13D2BF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// GarageImageService
struct GarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Image GarageImageService::garageImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___garageImage_4;
	// System.Boolean GarageImageService::ready
	bool ___ready_5;

public:
	inline static int32_t get_offset_of_garageImage_4() { return static_cast<int32_t>(offsetof(GarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D, ___garageImage_4)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_garageImage_4() const { return ___garageImage_4; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_garageImage_4() { return &___garageImage_4; }
	inline void set_garageImage_4(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___garageImage_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___garageImage_4), (void*)value);
	}

	inline static int32_t get_offset_of_ready_5() { return static_cast<int32_t>(offsetof(GarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D, ___ready_5)); }
	inline bool get_ready_5() const { return ___ready_5; }
	inline bool* get_address_of_ready_5() { return &___ready_5; }
	inline void set_ready_5(bool value)
	{
		___ready_5 = value;
	}
};


// GarageService
struct GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GarageImageService GarageService::garageImageService
	GarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D * ___garageImageService_4;
	// GarageAPIController GarageService::garageApiController
	GarageAPIController_tC16687EB182448C89A7515B7FB04D45B2C13D2BF * ___garageApiController_5;
	// AndroidUnityHelper GarageService::helper
	AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24 * ___helper_6;
	// UnityEngine.UI.Button GarageService::reserveButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___reserveButton_7;
	// GarageData GarageService::garage
	GarageData_t6AC8C4C188330A4D476F559113CB4E358F161C9B * ___garage_8;
	// Slot GarageService::slot
	Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * ___slot_9;
	// System.Boolean GarageService::ready
	bool ___ready_10;

public:
	inline static int32_t get_offset_of_garageImageService_4() { return static_cast<int32_t>(offsetof(GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2, ___garageImageService_4)); }
	inline GarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D * get_garageImageService_4() const { return ___garageImageService_4; }
	inline GarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D ** get_address_of_garageImageService_4() { return &___garageImageService_4; }
	inline void set_garageImageService_4(GarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D * value)
	{
		___garageImageService_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___garageImageService_4), (void*)value);
	}

	inline static int32_t get_offset_of_garageApiController_5() { return static_cast<int32_t>(offsetof(GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2, ___garageApiController_5)); }
	inline GarageAPIController_tC16687EB182448C89A7515B7FB04D45B2C13D2BF * get_garageApiController_5() const { return ___garageApiController_5; }
	inline GarageAPIController_tC16687EB182448C89A7515B7FB04D45B2C13D2BF ** get_address_of_garageApiController_5() { return &___garageApiController_5; }
	inline void set_garageApiController_5(GarageAPIController_tC16687EB182448C89A7515B7FB04D45B2C13D2BF * value)
	{
		___garageApiController_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___garageApiController_5), (void*)value);
	}

	inline static int32_t get_offset_of_helper_6() { return static_cast<int32_t>(offsetof(GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2, ___helper_6)); }
	inline AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24 * get_helper_6() const { return ___helper_6; }
	inline AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24 ** get_address_of_helper_6() { return &___helper_6; }
	inline void set_helper_6(AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24 * value)
	{
		___helper_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___helper_6), (void*)value);
	}

	inline static int32_t get_offset_of_reserveButton_7() { return static_cast<int32_t>(offsetof(GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2, ___reserveButton_7)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_reserveButton_7() const { return ___reserveButton_7; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_reserveButton_7() { return &___reserveButton_7; }
	inline void set_reserveButton_7(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___reserveButton_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reserveButton_7), (void*)value);
	}

	inline static int32_t get_offset_of_garage_8() { return static_cast<int32_t>(offsetof(GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2, ___garage_8)); }
	inline GarageData_t6AC8C4C188330A4D476F559113CB4E358F161C9B * get_garage_8() const { return ___garage_8; }
	inline GarageData_t6AC8C4C188330A4D476F559113CB4E358F161C9B ** get_address_of_garage_8() { return &___garage_8; }
	inline void set_garage_8(GarageData_t6AC8C4C188330A4D476F559113CB4E358F161C9B * value)
	{
		___garage_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___garage_8), (void*)value);
	}

	inline static int32_t get_offset_of_slot_9() { return static_cast<int32_t>(offsetof(GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2, ___slot_9)); }
	inline Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * get_slot_9() const { return ___slot_9; }
	inline Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C ** get_address_of_slot_9() { return &___slot_9; }
	inline void set_slot_9(Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * value)
	{
		___slot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slot_9), (void*)value);
	}

	inline static int32_t get_offset_of_ready_10() { return static_cast<int32_t>(offsetof(GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2, ___ready_10)); }
	inline bool get_ready_10() const { return ___ready_10; }
	inline bool* get_address_of_ready_10() { return &___ready_10; }
	inline void set_ready_10(bool value)
	{
		___ready_10 = value;
	}
};


// HeaderController
struct HeaderController_tD42AE2C05B58D01740A4881B46229216CC68DAD7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text HeaderController::availableLotsText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___availableLotsText_4;
	// AndroidUnityHelper HeaderController::helper
	AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24 * ___helper_5;

public:
	inline static int32_t get_offset_of_availableLotsText_4() { return static_cast<int32_t>(offsetof(HeaderController_tD42AE2C05B58D01740A4881B46229216CC68DAD7, ___availableLotsText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_availableLotsText_4() const { return ___availableLotsText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_availableLotsText_4() { return &___availableLotsText_4; }
	inline void set_availableLotsText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___availableLotsText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___availableLotsText_4), (void*)value);
	}

	inline static int32_t get_offset_of_helper_5() { return static_cast<int32_t>(offsetof(HeaderController_tD42AE2C05B58D01740A4881B46229216CC68DAD7, ___helper_5)); }
	inline AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24 * get_helper_5() const { return ___helper_5; }
	inline AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24 ** get_address_of_helper_5() { return &___helper_5; }
	inline void set_helper_5(AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24 * value)
	{
		___helper_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___helper_5), (void*)value);
	}
};


// LoadingBufferScript
struct LoadingBufferScript_t9F0DB7DEB7D015484C5781243AE2727AEAF944FE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Manager
struct Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.RectTransform Manager::mainCanvas
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___mainCanvas_4;
	// UnityEngine.RectTransform Manager::bodyRectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___bodyRectTransform_5;
	// UnityEngine.RectTransform Manager::headerRectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___headerRectTransform_6;
	// UnityEngine.UI.Image Manager::garageImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___garageImage_7;
	// AndroidUnityHelper Manager::helper
	AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24 * ___helper_8;
	// HeaderController Manager::headerController
	HeaderController_tD42AE2C05B58D01740A4881B46229216CC68DAD7 * ___headerController_9;
	// GarageService Manager::garageService
	GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * ___garageService_10;
	// SlotService Manager::slotService
	SlotService_t28D8E273470E6AA1A2BF11B6E8AC75C7B26A6A65 * ___slotService_11;
	// SlotGeneratorService Manager::slotGeneratorService
	SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * ___slotGeneratorService_12;
	// GarageImageService Manager::garageImageService
	GarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D * ___garageImageService_13;
	// System.Boolean Manager::rendered
	bool ___rendered_14;

public:
	inline static int32_t get_offset_of_mainCanvas_4() { return static_cast<int32_t>(offsetof(Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F, ___mainCanvas_4)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_mainCanvas_4() const { return ___mainCanvas_4; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_mainCanvas_4() { return &___mainCanvas_4; }
	inline void set_mainCanvas_4(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___mainCanvas_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainCanvas_4), (void*)value);
	}

	inline static int32_t get_offset_of_bodyRectTransform_5() { return static_cast<int32_t>(offsetof(Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F, ___bodyRectTransform_5)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_bodyRectTransform_5() const { return ___bodyRectTransform_5; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_bodyRectTransform_5() { return &___bodyRectTransform_5; }
	inline void set_bodyRectTransform_5(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___bodyRectTransform_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bodyRectTransform_5), (void*)value);
	}

	inline static int32_t get_offset_of_headerRectTransform_6() { return static_cast<int32_t>(offsetof(Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F, ___headerRectTransform_6)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_headerRectTransform_6() const { return ___headerRectTransform_6; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_headerRectTransform_6() { return &___headerRectTransform_6; }
	inline void set_headerRectTransform_6(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___headerRectTransform_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headerRectTransform_6), (void*)value);
	}

	inline static int32_t get_offset_of_garageImage_7() { return static_cast<int32_t>(offsetof(Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F, ___garageImage_7)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_garageImage_7() const { return ___garageImage_7; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_garageImage_7() { return &___garageImage_7; }
	inline void set_garageImage_7(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___garageImage_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___garageImage_7), (void*)value);
	}

	inline static int32_t get_offset_of_helper_8() { return static_cast<int32_t>(offsetof(Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F, ___helper_8)); }
	inline AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24 * get_helper_8() const { return ___helper_8; }
	inline AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24 ** get_address_of_helper_8() { return &___helper_8; }
	inline void set_helper_8(AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24 * value)
	{
		___helper_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___helper_8), (void*)value);
	}

	inline static int32_t get_offset_of_headerController_9() { return static_cast<int32_t>(offsetof(Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F, ___headerController_9)); }
	inline HeaderController_tD42AE2C05B58D01740A4881B46229216CC68DAD7 * get_headerController_9() const { return ___headerController_9; }
	inline HeaderController_tD42AE2C05B58D01740A4881B46229216CC68DAD7 ** get_address_of_headerController_9() { return &___headerController_9; }
	inline void set_headerController_9(HeaderController_tD42AE2C05B58D01740A4881B46229216CC68DAD7 * value)
	{
		___headerController_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headerController_9), (void*)value);
	}

	inline static int32_t get_offset_of_garageService_10() { return static_cast<int32_t>(offsetof(Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F, ___garageService_10)); }
	inline GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * get_garageService_10() const { return ___garageService_10; }
	inline GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 ** get_address_of_garageService_10() { return &___garageService_10; }
	inline void set_garageService_10(GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * value)
	{
		___garageService_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___garageService_10), (void*)value);
	}

	inline static int32_t get_offset_of_slotService_11() { return static_cast<int32_t>(offsetof(Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F, ___slotService_11)); }
	inline SlotService_t28D8E273470E6AA1A2BF11B6E8AC75C7B26A6A65 * get_slotService_11() const { return ___slotService_11; }
	inline SlotService_t28D8E273470E6AA1A2BF11B6E8AC75C7B26A6A65 ** get_address_of_slotService_11() { return &___slotService_11; }
	inline void set_slotService_11(SlotService_t28D8E273470E6AA1A2BF11B6E8AC75C7B26A6A65 * value)
	{
		___slotService_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slotService_11), (void*)value);
	}

	inline static int32_t get_offset_of_slotGeneratorService_12() { return static_cast<int32_t>(offsetof(Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F, ___slotGeneratorService_12)); }
	inline SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * get_slotGeneratorService_12() const { return ___slotGeneratorService_12; }
	inline SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B ** get_address_of_slotGeneratorService_12() { return &___slotGeneratorService_12; }
	inline void set_slotGeneratorService_12(SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * value)
	{
		___slotGeneratorService_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slotGeneratorService_12), (void*)value);
	}

	inline static int32_t get_offset_of_garageImageService_13() { return static_cast<int32_t>(offsetof(Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F, ___garageImageService_13)); }
	inline GarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D * get_garageImageService_13() const { return ___garageImageService_13; }
	inline GarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D ** get_address_of_garageImageService_13() { return &___garageImageService_13; }
	inline void set_garageImageService_13(GarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D * value)
	{
		___garageImageService_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___garageImageService_13), (void*)value);
	}

	inline static int32_t get_offset_of_rendered_14() { return static_cast<int32_t>(offsetof(Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F, ___rendered_14)); }
	inline bool get_rendered_14() const { return ___rendered_14; }
	inline bool* get_address_of_rendered_14() { return &___rendered_14; }
	inline void set_rendered_14(bool value)
	{
		___rendered_14 = value;
	}
};


// SlotApiController
struct SlotApiController_tD8CA2BAD7CF4BD0A8E75FCE437805A296FA89856  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// SlotGeneratorService
struct SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Manager SlotGeneratorService::manager
	Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F * ___manager_4;
	// SlotData SlotGeneratorService::slots
	SlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC * ___slots_5;
	// GarageService SlotGeneratorService::garageService
	GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * ___garageService_6;
	// UnityEngine.Canvas SlotGeneratorService::mainCanvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___mainCanvas_7;
	// UnityEngine.Sprite SlotGeneratorService::garageSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___garageSprite_8;
	// UnityEngine.UI.Image SlotGeneratorService::slotImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___slotImage_9;
	// UnityEngine.Sprite SlotGeneratorService::freeSlot
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___freeSlot_10;
	// UnityEngine.Sprite SlotGeneratorService::occupedSlotLeft
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___occupedSlotLeft_11;
	// UnityEngine.Sprite SlotGeneratorService::occupedSlotRight
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___occupedSlotRight_12;
	// UnityEngine.Sprite SlotGeneratorService::selected
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___selected_13;
	// UnityEngine.Vector2 SlotGeneratorService::originalSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___originalSize_14;
	// UnityEngine.Vector2 SlotGeneratorService::currentSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___currentSize_15;
	// System.Single SlotGeneratorService::xFactor
	float ___xFactor_16;
	// System.Single SlotGeneratorService::yFactor
	float ___yFactor_17;
	// UnityEngine.UI.Image SlotGeneratorService::selectedImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___selectedImage_18;

public:
	inline static int32_t get_offset_of_manager_4() { return static_cast<int32_t>(offsetof(SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B, ___manager_4)); }
	inline Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F * get_manager_4() const { return ___manager_4; }
	inline Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F ** get_address_of_manager_4() { return &___manager_4; }
	inline void set_manager_4(Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F * value)
	{
		___manager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___manager_4), (void*)value);
	}

	inline static int32_t get_offset_of_slots_5() { return static_cast<int32_t>(offsetof(SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B, ___slots_5)); }
	inline SlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC * get_slots_5() const { return ___slots_5; }
	inline SlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC ** get_address_of_slots_5() { return &___slots_5; }
	inline void set_slots_5(SlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC * value)
	{
		___slots_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slots_5), (void*)value);
	}

	inline static int32_t get_offset_of_garageService_6() { return static_cast<int32_t>(offsetof(SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B, ___garageService_6)); }
	inline GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * get_garageService_6() const { return ___garageService_6; }
	inline GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 ** get_address_of_garageService_6() { return &___garageService_6; }
	inline void set_garageService_6(GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * value)
	{
		___garageService_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___garageService_6), (void*)value);
	}

	inline static int32_t get_offset_of_mainCanvas_7() { return static_cast<int32_t>(offsetof(SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B, ___mainCanvas_7)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_mainCanvas_7() const { return ___mainCanvas_7; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_mainCanvas_7() { return &___mainCanvas_7; }
	inline void set_mainCanvas_7(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___mainCanvas_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainCanvas_7), (void*)value);
	}

	inline static int32_t get_offset_of_garageSprite_8() { return static_cast<int32_t>(offsetof(SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B, ___garageSprite_8)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_garageSprite_8() const { return ___garageSprite_8; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_garageSprite_8() { return &___garageSprite_8; }
	inline void set_garageSprite_8(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___garageSprite_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___garageSprite_8), (void*)value);
	}

	inline static int32_t get_offset_of_slotImage_9() { return static_cast<int32_t>(offsetof(SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B, ___slotImage_9)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_slotImage_9() const { return ___slotImage_9; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_slotImage_9() { return &___slotImage_9; }
	inline void set_slotImage_9(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___slotImage_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slotImage_9), (void*)value);
	}

	inline static int32_t get_offset_of_freeSlot_10() { return static_cast<int32_t>(offsetof(SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B, ___freeSlot_10)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_freeSlot_10() const { return ___freeSlot_10; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_freeSlot_10() { return &___freeSlot_10; }
	inline void set_freeSlot_10(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___freeSlot_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___freeSlot_10), (void*)value);
	}

	inline static int32_t get_offset_of_occupedSlotLeft_11() { return static_cast<int32_t>(offsetof(SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B, ___occupedSlotLeft_11)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_occupedSlotLeft_11() const { return ___occupedSlotLeft_11; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_occupedSlotLeft_11() { return &___occupedSlotLeft_11; }
	inline void set_occupedSlotLeft_11(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___occupedSlotLeft_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___occupedSlotLeft_11), (void*)value);
	}

	inline static int32_t get_offset_of_occupedSlotRight_12() { return static_cast<int32_t>(offsetof(SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B, ___occupedSlotRight_12)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_occupedSlotRight_12() const { return ___occupedSlotRight_12; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_occupedSlotRight_12() { return &___occupedSlotRight_12; }
	inline void set_occupedSlotRight_12(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___occupedSlotRight_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___occupedSlotRight_12), (void*)value);
	}

	inline static int32_t get_offset_of_selected_13() { return static_cast<int32_t>(offsetof(SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B, ___selected_13)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_selected_13() const { return ___selected_13; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_selected_13() { return &___selected_13; }
	inline void set_selected_13(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___selected_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selected_13), (void*)value);
	}

	inline static int32_t get_offset_of_originalSize_14() { return static_cast<int32_t>(offsetof(SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B, ___originalSize_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_originalSize_14() const { return ___originalSize_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_originalSize_14() { return &___originalSize_14; }
	inline void set_originalSize_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___originalSize_14 = value;
	}

	inline static int32_t get_offset_of_currentSize_15() { return static_cast<int32_t>(offsetof(SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B, ___currentSize_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_currentSize_15() const { return ___currentSize_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_currentSize_15() { return &___currentSize_15; }
	inline void set_currentSize_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___currentSize_15 = value;
	}

	inline static int32_t get_offset_of_xFactor_16() { return static_cast<int32_t>(offsetof(SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B, ___xFactor_16)); }
	inline float get_xFactor_16() const { return ___xFactor_16; }
	inline float* get_address_of_xFactor_16() { return &___xFactor_16; }
	inline void set_xFactor_16(float value)
	{
		___xFactor_16 = value;
	}

	inline static int32_t get_offset_of_yFactor_17() { return static_cast<int32_t>(offsetof(SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B, ___yFactor_17)); }
	inline float get_yFactor_17() const { return ___yFactor_17; }
	inline float* get_address_of_yFactor_17() { return &___yFactor_17; }
	inline void set_yFactor_17(float value)
	{
		___yFactor_17 = value;
	}

	inline static int32_t get_offset_of_selectedImage_18() { return static_cast<int32_t>(offsetof(SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B, ___selectedImage_18)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_selectedImage_18() const { return ___selectedImage_18; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_selectedImage_18() { return &___selectedImage_18; }
	inline void set_selectedImage_18(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___selectedImage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedImage_18), (void*)value);
	}
};


// SlotImageProps
struct SlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 SlotImageProps::id
	int32_t ___id_4;
	// System.String SlotImageProps::slotName
	String_t* ___slotName_5;
	// System.Boolean SlotImageProps::selected
	bool ___selected_6;
	// System.Boolean SlotImageProps::occuped
	bool ___occuped_7;
	// System.Boolean SlotImageProps::free
	bool ___free_8;

public:
	inline static int32_t get_offset_of_id_4() { return static_cast<int32_t>(offsetof(SlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3, ___id_4)); }
	inline int32_t get_id_4() const { return ___id_4; }
	inline int32_t* get_address_of_id_4() { return &___id_4; }
	inline void set_id_4(int32_t value)
	{
		___id_4 = value;
	}

	inline static int32_t get_offset_of_slotName_5() { return static_cast<int32_t>(offsetof(SlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3, ___slotName_5)); }
	inline String_t* get_slotName_5() const { return ___slotName_5; }
	inline String_t** get_address_of_slotName_5() { return &___slotName_5; }
	inline void set_slotName_5(String_t* value)
	{
		___slotName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slotName_5), (void*)value);
	}

	inline static int32_t get_offset_of_selected_6() { return static_cast<int32_t>(offsetof(SlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3, ___selected_6)); }
	inline bool get_selected_6() const { return ___selected_6; }
	inline bool* get_address_of_selected_6() { return &___selected_6; }
	inline void set_selected_6(bool value)
	{
		___selected_6 = value;
	}

	inline static int32_t get_offset_of_occuped_7() { return static_cast<int32_t>(offsetof(SlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3, ___occuped_7)); }
	inline bool get_occuped_7() const { return ___occuped_7; }
	inline bool* get_address_of_occuped_7() { return &___occuped_7; }
	inline void set_occuped_7(bool value)
	{
		___occuped_7 = value;
	}

	inline static int32_t get_offset_of_free_8() { return static_cast<int32_t>(offsetof(SlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3, ___free_8)); }
	inline bool get_free_8() const { return ___free_8; }
	inline bool* get_address_of_free_8() { return &___free_8; }
	inline void set_free_8(bool value)
	{
		___free_8 = value;
	}
};


// SlotService
struct SlotService_t28D8E273470E6AA1A2BF11B6E8AC75C7B26A6A65  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// SlotApiController SlotService::slotApiController
	SlotApiController_tD8CA2BAD7CF4BD0A8E75FCE437805A296FA89856 * ___slotApiController_4;
	// SlotData SlotService::slotData
	SlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC * ___slotData_5;
	// System.Boolean SlotService::ready
	bool ___ready_6;

public:
	inline static int32_t get_offset_of_slotApiController_4() { return static_cast<int32_t>(offsetof(SlotService_t28D8E273470E6AA1A2BF11B6E8AC75C7B26A6A65, ___slotApiController_4)); }
	inline SlotApiController_tD8CA2BAD7CF4BD0A8E75FCE437805A296FA89856 * get_slotApiController_4() const { return ___slotApiController_4; }
	inline SlotApiController_tD8CA2BAD7CF4BD0A8E75FCE437805A296FA89856 ** get_address_of_slotApiController_4() { return &___slotApiController_4; }
	inline void set_slotApiController_4(SlotApiController_tD8CA2BAD7CF4BD0A8E75FCE437805A296FA89856 * value)
	{
		___slotApiController_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slotApiController_4), (void*)value);
	}

	inline static int32_t get_offset_of_slotData_5() { return static_cast<int32_t>(offsetof(SlotService_t28D8E273470E6AA1A2BF11B6E8AC75C7B26A6A65, ___slotData_5)); }
	inline SlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC * get_slotData_5() const { return ___slotData_5; }
	inline SlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC ** get_address_of_slotData_5() { return &___slotData_5; }
	inline void set_slotData_5(SlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC * value)
	{
		___slotData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slotData_5), (void*)value);
	}

	inline static int32_t get_offset_of_ready_6() { return static_cast<int32_t>(offsetof(SlotService_t28D8E273470E6AA1A2BF11B6E8AC75C7B26A6A65, ___ready_6)); }
	inline bool get_ready_6() const { return ___ready_6; }
	inline bool* get_address_of_ready_6() { return &___ready_6; }
	inline void set_ready_6(bool value)
	{
		___ready_6 = value;
	}
};


// SupportBackScript
struct SupportBackScript_t6862C3E1319BFE5DE5F204F679A1DEFBE7B3D54E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Test
struct Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Image Test::image
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___image_4;

public:
	inline static int32_t get_offset_of_image_4() { return static_cast<int32_t>(offsetof(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5, ___image_4)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_image_4() const { return ___image_4; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_image_4() { return &___image_4; }
	inline void set_image_4(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___image_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___image_4), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_Call_TisRuntimeObject_mB802C2A6B0365A1670402D283EB7FA241C326B0E_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared (String_t* ___json0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_CallStatic_TisRuntimeObject_m29BD05B7A29F937D71B746DFFE889B90E1142509_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);

// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541 (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * __this, String_t* ___className0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared)(__this, ___fieldName0, method);
}
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// !!0 UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mB802C2A6B0365A1670402D283EB7FA241C326B0E_gshared)(__this, ___methodName0, ___args1, method);
}
// !!0 UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_gshared)(__this, ___methodName0, ___args1, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Void AndroidUnityHelper/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m4ECC95557837FF96B422A6A8BF3E30FC643E4ABA (U3CU3Ec__DisplayClass6_0_t1096B10413447D6B1F0AB53451DCCABF6ECAC272 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaRunnable::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaRunnable__ctor_m385F79E7C422595C3F8504D588807799A7CF4727 (AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void GarageAPIController/<getJson>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetJsonU3Ed__1__ctor_mE0836763B48C19F1D5056118A96726EEA9DC99BA (U3CgetJsonU3Ed__1_tCE16584E7ED48D146D9D9439AE1BBEDB72F045CD * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m81C113F45C28D065C9E31DD6D7566D1BF10CF851 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void GarageImageService/<getJson>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetJsonU3Ed__3__ctor_m915935A224F06766219BD59A04867476FB7BC44D (U3CgetJsonU3Ed__3_tA90AFA1FB2BD2B1BEE29AD706A2E82349D58DB0B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<AndroidUnityHelper>()
inline AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24 * Component_GetComponentInParent_TisAndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24_m0DD040BEDD5D8FCF813D374340B26B0CD14D9756 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponentInChildren<GarageAPIController>()
inline GarageAPIController_tC16687EB182448C89A7515B7FB04D45B2C13D2BF * Component_GetComponentInChildren_TisGarageAPIController_tC16687EB182448C89A7515B7FB04D45B2C13D2BF_mAB54D78497DA0FB589A167B5BBD8B377D5CEFDCD (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  GarageAPIController_tC16687EB182448C89A7515B7FB04D45B2C13D2BF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<GarageImageService>()
inline GarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D * Component_GetComponent_TisGarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D_m56021CD147BBBCCE139C677B20C4142510E8C36A (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  GarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void Slot::.ctor(System.Int32,System.String,System.Boolean,System.Collections.Generic.List`1<Cordinate>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slot__ctor_m6411F2A8DDE58F19DB9F997228F7AE88420DA09A (Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * __this, int32_t ___id0, String_t* ___name1, bool ___isActive2, List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * ___coordinates3, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<GarageData>(System.String)
inline GarageData_t6AC8C4C188330A4D476F559113CB4E358F161C9B * JsonUtility_FromJson_TisGarageData_t6AC8C4C188330A4D476F559113CB4E358F161C9B_m09F85DE8FC777181B288D68142797A86D61601A5 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  GarageData_t6AC8C4C188330A4D476F559113CB4E358F161C9B * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// System.Void GarageService/<getJson>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetJsonU3Ed__10__ctor_m032ACCCFA89AAA080D90ACB6A5ED1AE9D65E49A2 (U3CgetJsonU3Ed__10_tAC3F70D6DB574296B60F1293582E27585AE21C41 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void AndroidUnityHelper::sendReservedSlotId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidUnityHelper_sendReservedSlotId_mBF41DD0C9D6DA84BC76D7FB70CF7EDB8A2C1C62A (AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24 * __this, int32_t ___slotId0, const RuntimeMethod* method);
// System.Void AndroidUnityHelper::showAndroidToastMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidUnityHelper_showAndroidToastMessage_mAEA0687405B34CB5744CF1859B3D6E91713383CA (AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24 * __this, String_t* ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared)(__this, method);
}
// System.Void GarageService::updateButtonText(Slot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GarageService_updateButtonText_m26E91D10AF49F0BCB2B6E8C0FA37ABBD7ACD932A (GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * __this, Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * ___slot0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<AndroidUnityHelper>()
inline AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24 * Component_GetComponent_TisAndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24_mA65F6E8BE1A0D63B06B7C1F27875CB7A47C0F299 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void AndroidUnityHelper::back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidUnityHelper_back_mB4B20DFB9D0703D5FFC4EE4AC8D02648939FBF1D (AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<HeaderController>()
inline HeaderController_tD42AE2C05B58D01740A4881B46229216CC68DAD7 * Component_GetComponent_TisHeaderController_tD42AE2C05B58D01740A4881B46229216CC68DAD7_mDD02CA6023A624C9BBC0D3BEBA4675B37E00FA7B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  HeaderController_tD42AE2C05B58D01740A4881B46229216CC68DAD7 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponentInChildren<GarageService>()
inline GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * Component_GetComponentInChildren_TisGarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2_mF3C7E0F724E54950DA7635A3E5860809B6BAB106 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponentInChildren<SlotService>()
inline SlotService_t28D8E273470E6AA1A2BF11B6E8AC75C7B26A6A65 * Component_GetComponentInChildren_TisSlotService_t28D8E273470E6AA1A2BF11B6E8AC75C7B26A6A65_mD508EDB1E52432B78AC24958C5B8C96AEC04250C (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SlotService_t28D8E273470E6AA1A2BF11B6E8AC75C7B26A6A65 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponentInChildren<SlotGeneratorService>()
inline SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * Component_GetComponentInChildren_TisSlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B_m16FA53573BAAD7FD5ED3F6CB2B79C582A35DC931 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponentInChildren<GarageImageService>()
inline GarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D * Component_GetComponentInChildren_TisGarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D_mAEE002D9E9C8787145813DC30D3D4845B2B2C0A5 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  GarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared)(__this, method);
}
// System.Void Manager::scaleGarageImageToScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_scaleGarageImageToScreen_m433394D6537FBFC95AFAFF9E150D37DA47F97129 (Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F * __this, const RuntimeMethod* method);
// System.Void GarageService::callGarage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GarageService_callGarage_mB2723DCFB46FC8DBEB2A4DCC4A09E4838938CFC5 (GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * __this, int32_t ___placeId0, const RuntimeMethod* method);
// System.Void SlotService::callSlots(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotService_callSlots_m7DF3D03015EF55C94F9393D32A2A0947153B3C1A (SlotService_t28D8E273470E6AA1A2BF11B6E8AC75C7B26A6A65 * __this, int32_t ___placeId0, const RuntimeMethod* method);
// System.Boolean Manager::checkIfReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Manager_checkIfReady_m45CCC6F177657F3EAF25C699D34D29CE45D19ECB (Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F * __this, const RuntimeMethod* method);
// System.Int32 Manager::getNumOfAvailableLots(SlotData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Manager_getNumOfAvailableLots_m0DD8DB11C302754137F0497317201083E1E0C141 (Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F * __this, SlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC * ___slots0, const RuntimeMethod* method);
// System.Void HeaderController::updateAvailableLotsText(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeaderController_updateAvailableLotsText_m279913799BD2780D4F23E38D30123AB5BA2614DA (HeaderController_tD42AE2C05B58D01740A4881B46229216CC68DAD7 * __this, int32_t ___available0, const RuntimeMethod* method);
// System.Void Manager::renderGarage(GarageData,SlotData,UnityEngine.UI.Image)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_renderGarage_mADEC18312F5C0DD9BAFC77860D73FBCDF5299A1A (Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F * __this, GarageData_t6AC8C4C188330A4D476F559113CB4E358F161C9B * ___garage0, SlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC * ___slots1, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___image2, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Slot>::GetEnumerator()
inline Enumerator_t04B2B6D39010AE5234583088426C4035B4AD22F8  List_1_GetEnumerator_m6BB3FBE04A346BEDADE16304C50350012B85D750 (List_1_t056E7EF741034056C75CA26D0F661E2CA19929B2 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t04B2B6D39010AE5234583088426C4035B4AD22F8  (*) (List_1_t056E7EF741034056C75CA26D0F661E2CA19929B2 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Slot>::get_Current()
inline Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * Enumerator_get_Current_m388FEDED591A9DB7405CD231BCE0F27C9DDC3384_inline (Enumerator_t04B2B6D39010AE5234583088426C4035B4AD22F8 * __this, const RuntimeMethod* method)
{
	return ((  Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * (*) (Enumerator_t04B2B6D39010AE5234583088426C4035B4AD22F8 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Slot>::MoveNext()
inline bool Enumerator_MoveNext_mA62707402B14898234C649AEE6E092C45B31E6FD (Enumerator_t04B2B6D39010AE5234583088426C4035B4AD22F8 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t04B2B6D39010AE5234583088426C4035B4AD22F8 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Slot>::Dispose()
inline void Enumerator_Dispose_mAD305143492AAC7F276F069F770669D0346366DE (Enumerator_t04B2B6D39010AE5234583088426C4035B4AD22F8 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t04B2B6D39010AE5234583088426C4035B4AD22F8 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void SlotGeneratorService::addSlots(GarageData,SlotData,UnityEngine.UI.Image)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotGeneratorService_addSlots_m8CEB1D04A37283DDCCE42D88346044510699E183 (SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * __this, GarageData_t6AC8C4C188330A4D476F559113CB4E358F161C9B * ___garage0, SlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC * ___slots1, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___image2, const RuntimeMethod* method);
// System.Void SlotApiController/<getJson>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetJsonU3Ed__1__ctor_mBE239E4F0CCE0A0D1A7E587FE668D04F710790DC (U3CgetJsonU3Ed__1_t69582BBB54FE0FE8110D44195366E8A689264514 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<Manager>()
inline Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F * Component_GetComponentInParent_TisManager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F_m1D912FA48BEB5C48B62F84938110A897978707E4 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<GarageService>()
inline GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * Component_GetComponent_TisGarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2_m717B144187840E88C5BE34ED8084FB43718EDA9F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Sprite UnityEngine.UI.Image::get_sprite()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * Image_get_sprite_mA6FB016B4E3FE5EFFAE4B3AEE2D2DF89C61E0AF3_inline (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.Sprite::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  Sprite_get_rect_m146D3624E5D8DD6DF5B1F39CE618D701B9008C70 (Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rect_get_size_m752B3BB45AE862F6EAE941ED5E5C1B01C0973A00 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void SlotGeneratorService::startAdding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotGeneratorService_startAdding_m192B1BF6BFC6E822D021292573471AC7A10B1615 (SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * __this, const RuntimeMethod* method);
// System.Boolean SlotGeneratorService::inLeft(Slot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SlotGeneratorService_inLeft_m36B5EC8F55BF0D7A8821D25172E8B62EEC99DB23 (SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * __this, Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * ___slot0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.UI.Image>(!!0,UnityEngine.Transform)
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Object_Instantiate_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m8F5F75D5872251B7E04B6D385D1BDD52DD9F3B5D (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared)(___original0, ___parent1, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void SlotGeneratorService::addSlotImageProps(Slot,UnityEngine.UI.Image)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotGeneratorService_addSlotImageProps_mBB8179EC4C13E8CCBA5B36CC5059D1F4FF3B014A (SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * __this, Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * ___slot0, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___slotImage1, const RuntimeMethod* method);
// System.Void SlotGeneratorService/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_m1B433C6A8C17DFAEE6ECD514307E7F9BE58C4582 (U3CU3Ec__DisplayClass18_0_tE64AC2344E78812B4D2D693C8918CB2BB01D13EE * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<SlotImageProps>()
inline SlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3 * Component_GetComponent_TisSlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3_m9C09C585E17F9383420667FF762857FBF7F138CC (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 SlotGeneratorService::getSlotDimentions(Slot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  SlotGeneratorService_getSlotDimentions_m0FB3E99CD8DA0205F3873F1B0E7A2817407EB362 (SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * __this, Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * ___slot0, const RuntimeMethod* method);
// UnityEngine.Vector2 SlotGeneratorService::getPosistion(Slot,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  SlotGeneratorService_getPosistion_mC89A05F242862B71A0A43B2040F6F99F9A1E8512 (SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * __this, Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * ___slot0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___slotDimentions1, const RuntimeMethod* method);
// UnityEngine.Vector2 SlotGeneratorService::getOccupedSlotDimentions(Slot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  SlotGeneratorService_getOccupedSlotDimentions_m96703C69905F6D15B08476FC5697E52B52D49544 (SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * __this, Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * ___slot0, const RuntimeMethod* method);
// UnityEngine.Vector2 SlotGeneratorService::getOccupedPosistion(Slot,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  SlotGeneratorService_getOccupedPosistion_m68D05AEF4EB8780084FD7F4FAC672F8887BD16C2 (SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * __this, Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * ___slot0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___slotDimentions1, const RuntimeMethod* method);
// System.Single SlotGeneratorService::getRotation(Slot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SlotGeneratorService_getRotation_m0DCA9193BE87A03A26719B3BAF7B85379AA81518 (SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * __this, Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * ___slot0, const RuntimeMethod* method);
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___eulers0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean SlotGeneratorService::inRight(Slot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SlotGeneratorService_inRight_m153BB8EBF72491FEC68F359217E2F8E04C318018 (SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * __this, Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * ___slot0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Text::set_alignment(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_alignment_mBA9424D5CCC6FB11861B67A40E0C0F6DDBFDAB2C (Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Cordinate>::get_Item(System.Int32)
inline Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline (List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * (*) (List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<SlotImageProps>()
inline SlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3 * GameObject_GetComponent_TisSlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3_mA28AAA0755ED22EB2362BBC9E639BF56223E3693 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared)(__this, method);
}
// Slot SlotGeneratorService::findSlotById(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * SlotGeneratorService_findSlotById_m8AE50D36CAC646A2910BC5EDEC3727CF372A74D2 (SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * __this, int32_t ___slotId0, const RuntimeMethod* method);
// System.Void GarageService::updateSelected(Slot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GarageService_updateSelected_m9D618FD4B344E9DA6F39D3780E9FA94A29CADCC8 (GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * __this, Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * ___slot0, const RuntimeMethod* method);
// System.Boolean GarageService::isSelected(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GarageService_isSelected_mB9C3BCFE55BAA06605D2572647FF4D04BE98D3AD (GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Void GarageService::unSelect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GarageService_unSelect_m90B84840764822FCD6906FCEC5E800C50DE4F627 (GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<SlotApiController>()
inline SlotApiController_tD8CA2BAD7CF4BD0A8E75FCE437805A296FA89856 * Component_GetComponentInChildren_TisSlotApiController_tD8CA2BAD7CF4BD0A8E75FCE437805A296FA89856_mA85E99BD1EFE7A5FD6726C8C70C85A9C4E6223EC (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SlotApiController_tD8CA2BAD7CF4BD0A8E75FCE437805A296FA89856 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared)(__this, method);
}
// !!0 UnityEngine.JsonUtility::FromJson<SlotData>(System.String)
inline SlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC * JsonUtility_FromJson_TisSlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC_m0FCE72AEA33EDFA7E3583E34EE8A3265C2FCEC51 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  SlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// System.Void SlotService/<getJson>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetJsonU3Ed__6__ctor_m0E71A49F92085D8698AEA217FCD8670171B63D3C (U3CgetJsonU3Ed__6_t0DFEF59D02C34098F86C4D96C3AC0B6225C43935 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_m29BD05B7A29F937D71B746DFFE889B90E1142509_gshared)(__this, ___methodName0, ___args1, method);
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A (String_t* ___uri0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// System.Byte[] UnityEngine.Networking.DownloadHandler::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DownloadHandler_get_data_m3AE551AAE6BF21279435D386E76EA7084CC037D3 (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WWWForm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm__ctor_mA0987933892AF6FA9E01603B214E86EC52F6B055 (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WWWForm::AddField(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm_AddField_m20BED9E7C237D585E5D040A5D815D9C7DC16990C (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * __this, String_t* ___fieldName0, int32_t ___i1, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestTexture::GetTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequestTexture_GetTexture_mAC8E7F560F2A5ED2B3DA19211968311DD6D56F37 (String_t* ___uri0, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::GetContent(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * DownloadHandlerTexture_GetContent_m7CB6BFDD4B9E159B2BB46684707DFA9668AC21E6 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___www0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// UnityEngine.Sprite UnityEngine.Sprite::Create(UnityEngine.Texture2D,UnityEngine.Rect,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * Sprite_Create_m9817936760193300A6049A788C3446C7ADB49C6B (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rect1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pivot2, const RuntimeMethod* method);
// GarageData GarageService::getGarge(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GarageData_t6AC8C4C188330A4D476F559113CB4E358F161C9B * GarageService_getGarge_m083D5B14E812926196EA89AE6DD2DAF163BE95D6 (GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * __this, String_t* ___json0, const RuntimeMethod* method);
// System.Void GarageImageService::setGarageImage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GarageImageService_setGarageImage_m33D5C0A5A578EC40834C46A0B4AF390D9A93D7D9 (GarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D * __this, String_t* ___parkingMap0, const RuntimeMethod* method);
// System.Void SlotGeneratorService::imageClicked(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotGeneratorService_imageClicked_mC136EC63CD2931ED5C705E8A32D3DF331D4E1164 (SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * __this, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___imageButton0, const RuntimeMethod* method);
// SlotData SlotService::getSlots(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC * SlotService_getSlots_m180082A06104C303C332EE1A1ACC8F4F3A02460F (SlotService_t28D8E273470E6AA1A2BF11B6E8AC75C7B26A6A65 * __this, String_t* ___json0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AndroidUnityHelper::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidUnityHelper_Awake_mDC0B10C5301057D4E51E955B4DA2E3666F1C79AF (AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CADA8F29D97E00DEFB9B67A721B7C32DBA8ABB8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6BB6E51318A73F893E5ECC5FA841B3043DC4C87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD039CFDEE665DEC400C023C4ED4217EF7BC6B987);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF202BD9C29F9FE8967D2598978C59BC250D49ECC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFF2E3CA72364727F71AA5E2A535E3DD8A40037F);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_0 = NULL;
	int32_t V_1 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// UnityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, /*hidden argument*/NULL);
		__this->set_UnityPlayer_4(L_0);
		// currentActivity = UnityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_1 = __this->get_UnityPlayer_4();
		NullCheck(L_1);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2;
		L_2 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_1, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		__this->set_currentActivity_5(L_2);
		// AndroidJavaObject intent = currentActivity.Call<AndroidJavaObject>("getIntent");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3 = __this->get_currentActivity_5();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4;
		L_4 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_3);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_5;
		L_5 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_3, _stringLiteralC6BB6E51318A73F893E5ECC5FA841B3043DC4C87, L_4, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		// AndroidJavaObject extras = intent.Call<AndroidJavaObject>("getExtras");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6;
		L_6 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_5);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_7;
		L_7 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_5, _stringLiteralF202BD9C29F9FE8967D2598978C59BC250D49ECC, L_6, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		V_0 = L_7;
		// Debug.Log("HEREEEEEEE -----   =  " + extras.Call<int>("getInt", "placeId"));
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_8 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralD039CFDEE665DEC400C023C4ED4217EF7BC6B987);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralD039CFDEE665DEC400C023C4ED4217EF7BC6B987);
		NullCheck(L_8);
		int32_t L_11;
		L_11 = AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A(L_8, _stringLiteralFFF2E3CA72364727F71AA5E2A535E3DD8A40037F, L_10, /*hidden argument*/AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_RuntimeMethod_var);
		V_1 = L_11;
		String_t* L_12;
		L_12 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_13;
		L_13 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral0CADA8F29D97E00DEFB9B67A721B7C32DBA8ABB8, L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_13, /*hidden argument*/NULL);
		// placeId = extras.Call<int>("getInt", "placeId");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_14 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralD039CFDEE665DEC400C023C4ED4217EF7BC6B987);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralD039CFDEE665DEC400C023C4ED4217EF7BC6B987);
		NullCheck(L_14);
		int32_t L_17;
		L_17 = AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A(L_14, _stringLiteralFFF2E3CA72364727F71AA5E2A535E3DD8A40037F, L_16, /*hidden argument*/AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_RuntimeMethod_var);
		__this->set_placeId_6(L_17);
		// }
		goto IL_009f;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_009c;
		}
		throw e;
	}

CATCH_009c:
	{ // begin catch(System.Exception)
		// catch (Exception e){
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_009f;
	} // end catch (depth: 1)

IL_009f:
	{
		// }
		return;
	}
}
// System.Void AndroidUnityHelper::sendReservedSlotId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidUnityHelper_sendReservedSlotId_mBF41DD0C9D6DA84BC76D7FB70CF7EDB8A2C1C62A (AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24 * __this, int32_t ___slotId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C0ED7B20A8D30BD96C58C4E9E51DEB7CF8B832B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentActivity.Call("onUnityResult", slotId);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_currentActivity_5();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		int32_t L_3 = ___slotId0;
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_0, _stringLiteral6C0ED7B20A8D30BD96C58C4E9E51DEB7CF8B832B, L_2, /*hidden argument*/NULL);
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AndroidUnityHelper::back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidUnityHelper_back_mB4B20DFB9D0703D5FFC4EE4AC8D02648939FBF1D (AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58D5E560A9A2CCCAC11B88F2BF13A962ECA2B7DC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentActivity.Call("onUnityBack");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_currentActivity_5();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_0, _stringLiteral58D5E560A9A2CCCAC11B88F2BF13A962ECA2B7DC, L_1, /*hidden argument*/NULL);
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AndroidUnityHelper::showAndroidToastMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidUnityHelper_showAndroidToastMessage_mAEA0687405B34CB5744CF1859B3D6E91713383CA (AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CshowAndroidToastMessageU3Eb__0_m0EE4766D69B9C9CFEDF507860FC71F373A13151B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_t1096B10413447D6B1F0AB53451DCCABF6ECAC272_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78FF4FA942C1B42A8039C2BA8E962E337610543C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass6_0_t1096B10413447D6B1F0AB53451DCCABF6ECAC272 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass6_0_t1096B10413447D6B1F0AB53451DCCABF6ECAC272 * L_0 = (U3CU3Ec__DisplayClass6_0_t1096B10413447D6B1F0AB53451DCCABF6ECAC272 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_t1096B10413447D6B1F0AB53451DCCABF6ECAC272_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass6_0__ctor_m4ECC95557837FF96B422A6A8BF3E30FC643E4ABA(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass6_0_t1096B10413447D6B1F0AB53451DCCABF6ECAC272 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass6_0_t1096B10413447D6B1F0AB53451DCCABF6ECAC272 * L_2 = V_0;
		String_t* L_3 = ___message0;
		NullCheck(L_2);
		L_2->set_message_1(L_3);
		// if (currentActivity != null){
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4 = __this->get_currentActivity_5();
		if (!L_4)
		{
			goto IL_0051;
		}
	}
	{
		// AndroidJavaClass toastClass = new AndroidJavaClass("android.widget.Toast");
		U3CU3Ec__DisplayClass6_0_t1096B10413447D6B1F0AB53451DCCABF6ECAC272 * L_5 = V_0;
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_6 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_6, _stringLiteral78FF4FA942C1B42A8039C2BA8E962E337610543C, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->set_toastClass_2(L_6);
		// currentActivity.Call("runOnUiThread", new AndroidJavaRunnable(() =>{
		//     AndroidJavaObject toastObject = toastClass.CallStatic<AndroidJavaObject>("makeText", currentActivity, message, 0);
		//     toastObject.Call("show");
		// }));
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_7 = __this->get_currentActivity_5();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_8;
		U3CU3Ec__DisplayClass6_0_t1096B10413447D6B1F0AB53451DCCABF6ECAC272 * L_10 = V_0;
		AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 * L_11 = (AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 *)il2cpp_codegen_object_new(AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var);
		AndroidJavaRunnable__ctor_m385F79E7C422595C3F8504D588807799A7CF4727(L_11, L_10, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass6_0_U3CshowAndroidToastMessageU3Eb__0_m0EE4766D69B9C9CFEDF507860FC71F373A13151B_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_11);
		NullCheck(L_7);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_7, _stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D, L_9, /*hidden argument*/NULL);
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void AndroidUnityHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidUnityHelper__ctor_mC4F43C1F350FFFB4B90E89BB7D40C9D80B215B22 (AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cordinate::.ctor(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cordinate__ctor_m9122D75B6CFC0B289236986754B7AE99D9E8BE28 (Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * __this, String_t* ___id0, float ___x1, float ___y2, const RuntimeMethod* method)
{
	{
		// public Cordinate(string id, float x, float y) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.id = id;
		String_t* L_0 = ___id0;
		__this->set_id_0(L_0);
		// this.x = x;
		float L_1 = ___x1;
		__this->set_x_1(L_1);
		// this.y = y;
		float L_2 = ___y2;
		__this->set_y_2(L_2);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Garage::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Garage__ctor_m2D84D2D3529BC95B339FF764EEA6DF877B60FB67 (Garage_t06BD12337A8A4FD8E5DA60B4152ED07D4585BE3F * __this, String_t* ___id0, String_t* ___name1, String_t* ___parkingMap2, const RuntimeMethod* method)
{
	{
		// public Garage(string id, string name, string parkingMap)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.id = id;
		String_t* L_0 = ___id0;
		__this->set_id_0(L_0);
		// this.name = name;
		String_t* L_1 = ___name1;
		__this->set_name_1(L_1);
		// this.parkingMap = parkingMap;
		String_t* L_2 = ___parkingMap2;
		__this->set_parkingMap_2(L_2);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String GarageAPIController::getGarageStringJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GarageAPIController_getGarageStringJson_m3D5801713C3943D0B6B81A7D496B79E36FEA0110 (GarageAPIController_tC16687EB182448C89A7515B7FB04D45B2C13D2BF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB842D8176A0536EC687F8FA6722F079227ABFF5E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "{\"id\":\"1\",\"name\":\"testGarage\",\"imageURL\":\"test.com/image.png\",\"slots\":[{\"slotId\":\"testId\",\"slotName\":\"A 01\",\"reserved\":\"true\",\"p1\":{\"x\":\"113\",\"y\":\"18\"},\"p2\":{\"x\":\"181\",\"y\":\"28\"},\"p3\":{\"x\":\"113\",\"y\":\"46\"},\"p4\":{\"x\":\"178\",\"y\":\"55\"}}]}";
		return _stringLiteralB842D8176A0536EC687F8FA6722F079227ABFF5E;
	}
}
// System.Collections.IEnumerator GarageAPIController::getJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GarageAPIController_getJson_mEAB9975484ACE50785129FFE8153A85390982B36 (GarageAPIController_tC16687EB182448C89A7515B7FB04D45B2C13D2BF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CgetJsonU3Ed__1_tCE16584E7ED48D146D9D9439AE1BBEDB72F045CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CgetJsonU3Ed__1_tCE16584E7ED48D146D9D9439AE1BBEDB72F045CD * L_0 = (U3CgetJsonU3Ed__1_tCE16584E7ED48D146D9D9439AE1BBEDB72F045CD *)il2cpp_codegen_object_new(U3CgetJsonU3Ed__1_tCE16584E7ED48D146D9D9439AE1BBEDB72F045CD_il2cpp_TypeInfo_var);
		U3CgetJsonU3Ed__1__ctor_mE0836763B48C19F1D5056118A96726EEA9DC99BA(L_0, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void GarageAPIController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GarageAPIController__ctor_m18590A50BCAB27C9BEBD71ED32BC858AFBA58726 (GarageAPIController_tC16687EB182448C89A7515B7FB04D45B2C13D2BF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GarageData::.ctor(Garage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GarageData__ctor_m503C52B2B7FB71A0BB46D1ECF6BB5B21B237142E (GarageData_t6AC8C4C188330A4D476F559113CB4E358F161C9B * __this, Garage_t06BD12337A8A4FD8E5DA60B4152ED07D4585BE3F * ___data0, const RuntimeMethod* method)
{
	{
		// public GarageData(Garage data) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.data = data;
		Garage_t06BD12337A8A4FD8E5DA60B4152ED07D4585BE3F * L_0 = ___data0;
		__this->set_data_0(L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GarageImageService::setGarageImage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GarageImageService_setGarageImage_m33D5C0A5A578EC40834C46A0B4AF390D9A93D7D9 (GarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D * __this, String_t* ___parkingMap0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DFA565CA0FCE84DC024B070D2E561D85473C510);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine("getJson", parkingMap);
		String_t* L_0 = ___parkingMap0;
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m81C113F45C28D065C9E31DD6D7566D1BF10CF851(__this, _stringLiteral2DFA565CA0FCE84DC024B070D2E561D85473C510, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GarageImageService::getJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GarageImageService_getJson_m0F965803CBC31FD232E2BA902C72CEF1E13171BE (GarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D * __this, String_t* ___parkingMap0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CgetJsonU3Ed__3_tA90AFA1FB2BD2B1BEE29AD706A2E82349D58DB0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CgetJsonU3Ed__3_tA90AFA1FB2BD2B1BEE29AD706A2E82349D58DB0B * L_0 = (U3CgetJsonU3Ed__3_tA90AFA1FB2BD2B1BEE29AD706A2E82349D58DB0B *)il2cpp_codegen_object_new(U3CgetJsonU3Ed__3_tA90AFA1FB2BD2B1BEE29AD706A2E82349D58DB0B_il2cpp_TypeInfo_var);
		U3CgetJsonU3Ed__3__ctor_m915935A224F06766219BD59A04867476FB7BC44D(L_0, 0, /*hidden argument*/NULL);
		U3CgetJsonU3Ed__3_tA90AFA1FB2BD2B1BEE29AD706A2E82349D58DB0B * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CgetJsonU3Ed__3_tA90AFA1FB2BD2B1BEE29AD706A2E82349D58DB0B * L_2 = L_1;
		String_t* L_3 = ___parkingMap0;
		NullCheck(L_2);
		L_2->set_parkingMap_2(L_3);
		return L_2;
	}
}
// System.Void GarageImageService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GarageImageService__ctor_mC59FB23079F1F312DDD885546D7C97D204D54827 (GarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GarageService::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GarageService_Awake_mE7755DD6581DF827D83C114E4EA16A9EB4821BA8 (GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisGarageAPIController_tC16687EB182448C89A7515B7FB04D45B2C13D2BF_mAB54D78497DA0FB589A167B5BBD8B377D5CEFDCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisAndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24_m0DD040BEDD5D8FCF813D374340B26B0CD14D9756_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D_m56021CD147BBBCCE139C677B20C4142510E8C36A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// helper = GetComponentInParent<AndroidUnityHelper>();
		AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24 * L_0;
		L_0 = Component_GetComponentInParent_TisAndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24_m0DD040BEDD5D8FCF813D374340B26B0CD14D9756(__this, /*hidden argument*/Component_GetComponentInParent_TisAndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24_m0DD040BEDD5D8FCF813D374340B26B0CD14D9756_RuntimeMethod_var);
		__this->set_helper_6(L_0);
		// garageApiController = GetComponentInChildren<GarageAPIController>();
		GarageAPIController_tC16687EB182448C89A7515B7FB04D45B2C13D2BF * L_1;
		L_1 = Component_GetComponentInChildren_TisGarageAPIController_tC16687EB182448C89A7515B7FB04D45B2C13D2BF_mAB54D78497DA0FB589A167B5BBD8B377D5CEFDCD(__this, /*hidden argument*/Component_GetComponentInChildren_TisGarageAPIController_tC16687EB182448C89A7515B7FB04D45B2C13D2BF_mAB54D78497DA0FB589A167B5BBD8B377D5CEFDCD_RuntimeMethod_var);
		__this->set_garageApiController_5(L_1);
		// garageImageService = GetComponent<GarageImageService>();
		GarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D * L_2;
		L_2 = Component_GetComponent_TisGarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D_m56021CD147BBBCCE139C677B20C4142510E8C36A(__this, /*hidden argument*/Component_GetComponent_TisGarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D_m56021CD147BBBCCE139C677B20C4142510E8C36A_RuntimeMethod_var);
		__this->set_garageImageService_4(L_2);
		// slot = new Slot(-1, "", false, null);
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_3 = (Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C *)il2cpp_codegen_object_new(Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C_il2cpp_TypeInfo_var);
		Slot__ctor_m6411F2A8DDE58F19DB9F997228F7AE88420DA09A(L_3, (-1), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 *)NULL, /*hidden argument*/NULL);
		__this->set_slot_9(L_3);
		// }
		return;
	}
}
// System.Void GarageService::callGarage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GarageService_callGarage_mB2723DCFB46FC8DBEB2A4DCC4A09E4838938CFC5 (GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * __this, int32_t ___placeId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DFA565CA0FCE84DC024B070D2E561D85473C510);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine("getJson", placeId);
		int32_t L_0 = ___placeId0;
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_1);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m81C113F45C28D065C9E31DD6D7566D1BF10CF851(__this, _stringLiteral2DFA565CA0FCE84DC024B070D2E561D85473C510, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// GarageData GarageService::getGarge(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GarageData_t6AC8C4C188330A4D476F559113CB4E358F161C9B * GarageService_getGarge_m083D5B14E812926196EA89AE6DD2DAF163BE95D6 (GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * __this, String_t* ___json0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisGarageData_t6AC8C4C188330A4D476F559113CB4E358F161C9B_m09F85DE8FC777181B288D68142797A86D61601A5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GarageData garage = JsonUtility.FromJson<GarageData>(json);
		String_t* L_0 = ___json0;
		GarageData_t6AC8C4C188330A4D476F559113CB4E358F161C9B * L_1;
		L_1 = JsonUtility_FromJson_TisGarageData_t6AC8C4C188330A4D476F559113CB4E358F161C9B_m09F85DE8FC777181B288D68142797A86D61601A5(L_0, /*hidden argument*/JsonUtility_FromJson_TisGarageData_t6AC8C4C188330A4D476F559113CB4E358F161C9B_m09F85DE8FC777181B288D68142797A86D61601A5_RuntimeMethod_var);
		// return garage;
		return L_1;
	}
}
// System.Collections.IEnumerator GarageService::getJson(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GarageService_getJson_m4CDFAA62528ADDFEB3A78492999FBAEDAE7452B2 (GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * __this, int32_t ___placeId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CgetJsonU3Ed__10_tAC3F70D6DB574296B60F1293582E27585AE21C41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CgetJsonU3Ed__10_tAC3F70D6DB574296B60F1293582E27585AE21C41 * L_0 = (U3CgetJsonU3Ed__10_tAC3F70D6DB574296B60F1293582E27585AE21C41 *)il2cpp_codegen_object_new(U3CgetJsonU3Ed__10_tAC3F70D6DB574296B60F1293582E27585AE21C41_il2cpp_TypeInfo_var);
		U3CgetJsonU3Ed__10__ctor_m032ACCCFA89AAA080D90ACB6A5ED1AE9D65E49A2(L_0, 0, /*hidden argument*/NULL);
		U3CgetJsonU3Ed__10_tAC3F70D6DB574296B60F1293582E27585AE21C41 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CgetJsonU3Ed__10_tAC3F70D6DB574296B60F1293582E27585AE21C41 * L_2 = L_1;
		int32_t L_3 = ___placeId0;
		NullCheck(L_2);
		L_2->set_placeId_2(L_3);
		return L_2;
	}
}
// System.Void GarageService::hitReservationRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GarageService_hitReservationRequest_m19BCB790FCDEE9790C3524D6FEDE6E1225CAEDEC (GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42F0122AC71428788819CD2B18E1FE1914FE8F9B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!ReferenceEquals(slot, null) && slot.id != -1){
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_0 = __this->get_slot_9();
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_1 = __this->get_slot_9();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_id_0();
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_002d;
		}
	}
	{
		// helper.sendReservedSlotId(slot.id);
		AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24 * L_3 = __this->get_helper_6();
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_4 = __this->get_slot_9();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_id_0();
		NullCheck(L_3);
		AndroidUnityHelper_sendReservedSlotId_mBF41DD0C9D6DA84BC76D7FB70CF7EDB8A2C1C62A(L_3, L_5, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002d:
	{
		// helper.showAndroidToastMessage("Please select a Spot");
		AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24 * L_6 = __this->get_helper_6();
		NullCheck(L_6);
		AndroidUnityHelper_showAndroidToastMessage_mAEA0687405B34CB5744CF1859B3D6E91713383CA(L_6, _stringLiteral42F0122AC71428788819CD2B18E1FE1914FE8F9B, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean GarageService::noneSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GarageService_noneSelected_m8137FE2B8500F4458DA03819ED40F83D8DFDA9C3 (GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * __this, const RuntimeMethod* method)
{
	{
		// return slot.id == -1;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_0 = __this->get_slot_9();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_id_0();
		return (bool)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0);
	}
}
// System.Boolean GarageService::isSelected(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GarageService_isSelected_mB9C3BCFE55BAA06605D2572647FF4D04BE98D3AD (GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	{
		// return slot.id == id;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_0 = __this->get_slot_9();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_id_0();
		int32_t L_2 = ___id0;
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Void GarageService::unSelect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GarageService_unSelect_m90B84840764822FCD6906FCEC5E800C50DE4F627 (GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F171E8EC92360C137466719834B61B4A802325E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// slot = new Slot(-1, "", false, null);
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_0 = (Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C *)il2cpp_codegen_object_new(Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C_il2cpp_TypeInfo_var);
		Slot__ctor_m6411F2A8DDE58F19DB9F997228F7AE88420DA09A(L_0, (-1), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 *)NULL, /*hidden argument*/NULL);
		__this->set_slot_9(L_0);
		// reserveButton.GetComponentInChildren<Text>().text = "Choose a Spot";
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_1 = __this->get_reserveButton_7();
		NullCheck(L_1);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2;
		L_2 = Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3(L_1, /*hidden argument*/Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3_RuntimeMethod_var);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteral3F171E8EC92360C137466719834B61B4A802325E);
		// }
		return;
	}
}
// System.Void GarageService::updateSelected(Slot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GarageService_updateSelected_m9D618FD4B344E9DA6F39D3780E9FA94A29CADCC8 (GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * __this, Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * ___slot0, const RuntimeMethod* method)
{
	{
		// this.slot = slot;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_0 = ___slot0;
		__this->set_slot_9(L_0);
		// updateButtonText(slot);
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_1 = ___slot0;
		GarageService_updateButtonText_m26E91D10AF49F0BCB2B6E8C0FA37ABBD7ACD932A(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GarageService::updateButtonText(Slot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GarageService_updateButtonText_m26E91D10AF49F0BCB2B6E8C0FA37ABBD7ACD932A (GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * __this, Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * ___slot0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62FB73CE9FCAFD8066B14FDCA60910C5D88408FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// reserveButton.GetComponentInChildren<Text>().text = "Procees with Spot (" + slot.name + ")";
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_reserveButton_7();
		NullCheck(L_0);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1;
		L_1 = Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3(L_0, /*hidden argument*/Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3_RuntimeMethod_var);
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_2 = ___slot0;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_name_1();
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral62FB73CE9FCAFD8066B14FDCA60910C5D88408FE, L_3, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// }
		return;
	}
}
// System.Void GarageService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GarageService__ctor_m3C42B6B34BAB09D152A03A4D6E4EF4C74BC48F62 (GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HeaderController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeaderController_Awake_m99C1F23865F12B444918434280684253F8DB58E1 (HeaderController_tD42AE2C05B58D01740A4881B46229216CC68DAD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24_mA65F6E8BE1A0D63B06B7C1F27875CB7A47C0F299_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// helper = GetComponent<AndroidUnityHelper>();
		AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24 * L_0;
		L_0 = Component_GetComponent_TisAndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24_mA65F6E8BE1A0D63B06B7C1F27875CB7A47C0F299(__this, /*hidden argument*/Component_GetComponent_TisAndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24_mA65F6E8BE1A0D63B06B7C1F27875CB7A47C0F299_RuntimeMethod_var);
		__this->set_helper_5(L_0);
		// }
		return;
	}
}
// System.Void HeaderController::backButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeaderController_backButton_m236A54E9FCB17CEC09C4D920652CEC543E5BA616 (HeaderController_tD42AE2C05B58D01740A4881B46229216CC68DAD7 * __this, const RuntimeMethod* method)
{
	{
		// helper.back();
		AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24 * L_0 = __this->get_helper_5();
		NullCheck(L_0);
		AndroidUnityHelper_back_mB4B20DFB9D0703D5FFC4EE4AC8D02648939FBF1D(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HeaderController::updateAvailableLotsText(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeaderController_updateAvailableLotsText_m279913799BD2780D4F23E38D30123AB5BA2614DA (HeaderController_tD42AE2C05B58D01740A4881B46229216CC68DAD7 * __this, int32_t ___available0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E83B52D310D75130365A465E921922901518CEE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		s_Il2CppMethodInitialized = true;
	}
	{
		// availableLotsText.text = "(" + available + " Lots Available)";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_availableLotsText_4();
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___available0), /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, L_1, _stringLiteral0E83B52D310D75130365A465E921922901518CEE, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void HeaderController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeaderController__ctor_m5C9C043B343B65A9B2B9531653C8FB1E6BC79A49 (HeaderController_tD42AE2C05B58D01740A4881B46229216CC68DAD7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LoadingBufferScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingBufferScript_Start_m04FE93D2234DEAD7D7FC2C62D666F109F442BBEC (LoadingBufferScript_t9F0DB7DEB7D015484C5781243AE2727AEAF944FE * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void LoadingBufferScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingBufferScript_Update_m94D04606C35654B628D02E412623CEAE7B6E387E (LoadingBufferScript_t9F0DB7DEB7D015484C5781243AE2727AEAF944FE * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void LoadingBufferScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingBufferScript__ctor_m6741291B4D0AF2721157624FAD91059B9A10A4A8 (LoadingBufferScript_t9F0DB7DEB7D015484C5781243AE2727AEAF944FE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Manager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_Awake_mC363EF8F87DCFA0409A492A299F31059706F425B (Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisGarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D_mAEE002D9E9C8787145813DC30D3D4845B2B2C0A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisGarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2_mF3C7E0F724E54950DA7635A3E5860809B6BAB106_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisSlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B_m16FA53573BAAD7FD5ED3F6CB2B79C582A35DC931_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisSlotService_t28D8E273470E6AA1A2BF11B6E8AC75C7B26A6A65_mD508EDB1E52432B78AC24958C5B8C96AEC04250C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24_mA65F6E8BE1A0D63B06B7C1F27875CB7A47C0F299_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHeaderController_tD42AE2C05B58D01740A4881B46229216CC68DAD7_mDD02CA6023A624C9BBC0D3BEBA4675B37E00FA7B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// helper = GetComponent<AndroidUnityHelper>();
		AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24 * L_0;
		L_0 = Component_GetComponent_TisAndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24_mA65F6E8BE1A0D63B06B7C1F27875CB7A47C0F299(__this, /*hidden argument*/Component_GetComponent_TisAndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24_mA65F6E8BE1A0D63B06B7C1F27875CB7A47C0F299_RuntimeMethod_var);
		__this->set_helper_8(L_0);
		// headerController = GetComponent<HeaderController>();
		HeaderController_tD42AE2C05B58D01740A4881B46229216CC68DAD7 * L_1;
		L_1 = Component_GetComponent_TisHeaderController_tD42AE2C05B58D01740A4881B46229216CC68DAD7_mDD02CA6023A624C9BBC0D3BEBA4675B37E00FA7B(__this, /*hidden argument*/Component_GetComponent_TisHeaderController_tD42AE2C05B58D01740A4881B46229216CC68DAD7_mDD02CA6023A624C9BBC0D3BEBA4675B37E00FA7B_RuntimeMethod_var);
		__this->set_headerController_9(L_1);
		// garageService = GetComponentInChildren<GarageService>();
		GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * L_2;
		L_2 = Component_GetComponentInChildren_TisGarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2_mF3C7E0F724E54950DA7635A3E5860809B6BAB106(__this, /*hidden argument*/Component_GetComponentInChildren_TisGarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2_mF3C7E0F724E54950DA7635A3E5860809B6BAB106_RuntimeMethod_var);
		__this->set_garageService_10(L_2);
		// slotService = GetComponentInChildren<SlotService>();
		SlotService_t28D8E273470E6AA1A2BF11B6E8AC75C7B26A6A65 * L_3;
		L_3 = Component_GetComponentInChildren_TisSlotService_t28D8E273470E6AA1A2BF11B6E8AC75C7B26A6A65_mD508EDB1E52432B78AC24958C5B8C96AEC04250C(__this, /*hidden argument*/Component_GetComponentInChildren_TisSlotService_t28D8E273470E6AA1A2BF11B6E8AC75C7B26A6A65_mD508EDB1E52432B78AC24958C5B8C96AEC04250C_RuntimeMethod_var);
		__this->set_slotService_11(L_3);
		// slotGeneratorService = GetComponentInChildren<SlotGeneratorService>();
		SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * L_4;
		L_4 = Component_GetComponentInChildren_TisSlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B_m16FA53573BAAD7FD5ED3F6CB2B79C582A35DC931(__this, /*hidden argument*/Component_GetComponentInChildren_TisSlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B_m16FA53573BAAD7FD5ED3F6CB2B79C582A35DC931_RuntimeMethod_var);
		__this->set_slotGeneratorService_12(L_4);
		// garageImageService = GetComponentInChildren<GarageImageService>();
		GarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D * L_5;
		L_5 = Component_GetComponentInChildren_TisGarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D_mAEE002D9E9C8787145813DC30D3D4845B2B2C0A5(__this, /*hidden argument*/Component_GetComponentInChildren_TisGarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D_mAEE002D9E9C8787145813DC30D3D4845B2B2C0A5_RuntimeMethod_var);
		__this->set_garageImageService_13(L_5);
		// }
		return;
	}
}
// System.Void Manager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_Start_mD3C29E49C67909A303603541E6CE9BC5C26796CD (Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// scaleGarageImageToScreen();
		Manager_scaleGarageImageToScreen_m433394D6537FBFC95AFAFF9E150D37DA47F97129(__this, /*hidden argument*/NULL);
		// int placeId = helper.placeId;
		AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24 * L_0 = __this->get_helper_8();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_placeId_6();
		V_0 = L_1;
		// garageService.callGarage(placeId);
		GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * L_2 = __this->get_garageService_10();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		GarageService_callGarage_mB2723DCFB46FC8DBEB2A4DCC4A09E4838938CFC5(L_2, L_3, /*hidden argument*/NULL);
		// slotService.callSlots(placeId);
		SlotService_t28D8E273470E6AA1A2BF11B6E8AC75C7B26A6A65 * L_4 = __this->get_slotService_11();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		SlotService_callSlots_m7DF3D03015EF55C94F9393D32A2A0947153B3C1A(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Manager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_Update_m75BF2DFC9C300743E190F02E9D8427F36DB70780 (Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F * __this, const RuntimeMethod* method)
{
	GarageData_t6AC8C4C188330A4D476F559113CB4E358F161C9B * V_0 = NULL;
	SlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC * V_1 = NULL;
	int32_t V_2 = 0;
	{
		// if (checkIfReady() && !rendered) {
		bool L_0;
		L_0 = Manager_checkIfReady_m45CCC6F177657F3EAF25C699D34D29CE45D19ECB(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_005c;
		}
	}
	{
		bool L_1 = __this->get_rendered_14();
		if (L_1)
		{
			goto IL_005c;
		}
	}
	{
		// GarageData garage = garageService.garage;
		GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * L_2 = __this->get_garageService_10();
		NullCheck(L_2);
		GarageData_t6AC8C4C188330A4D476F559113CB4E358F161C9B * L_3 = L_2->get_garage_8();
		V_0 = L_3;
		// SlotData slots = slotService.slotData;
		SlotService_t28D8E273470E6AA1A2BF11B6E8AC75C7B26A6A65 * L_4 = __this->get_slotService_11();
		NullCheck(L_4);
		SlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC * L_5 = L_4->get_slotData_5();
		V_1 = L_5;
		// int availableLots = getNumOfAvailableLots(slots);
		SlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC * L_6 = V_1;
		int32_t L_7;
		L_7 = Manager_getNumOfAvailableLots_m0DD8DB11C302754137F0497317201083E1E0C141(__this, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// headerController.updateAvailableLotsText(availableLots);
		HeaderController_tD42AE2C05B58D01740A4881B46229216CC68DAD7 * L_8 = __this->get_headerController_9();
		int32_t L_9 = V_2;
		NullCheck(L_8);
		HeaderController_updateAvailableLotsText_m279913799BD2780D4F23E38D30123AB5BA2614DA(L_8, L_9, /*hidden argument*/NULL);
		// renderGarage(garage, slots, garageImageService.garageImage);
		GarageData_t6AC8C4C188330A4D476F559113CB4E358F161C9B * L_10 = V_0;
		SlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC * L_11 = V_1;
		GarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D * L_12 = __this->get_garageImageService_13();
		NullCheck(L_12);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_13 = L_12->get_garageImage_4();
		Manager_renderGarage_mADEC18312F5C0DD9BAFC77860D73FBCDF5299A1A(__this, L_10, L_11, L_13, /*hidden argument*/NULL);
		// scaleGarageImageToScreen();
		Manager_scaleGarageImageToScreen_m433394D6537FBFC95AFAFF9E150D37DA47F97129(__this, /*hidden argument*/NULL);
		// rendered = true;
		__this->set_rendered_14((bool)1);
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Boolean Manager::checkIfReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Manager_checkIfReady_m45CCC6F177657F3EAF25C699D34D29CE45D19ECB (Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F * __this, const RuntimeMethod* method)
{
	{
		// return slotService.ready && garageService.ready && garageImageService.ready;
		SlotService_t28D8E273470E6AA1A2BF11B6E8AC75C7B26A6A65 * L_0 = __this->get_slotService_11();
		NullCheck(L_0);
		bool L_1 = L_0->get_ready_6();
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * L_2 = __this->get_garageService_10();
		NullCheck(L_2);
		bool L_3 = L_2->get_ready_10();
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		GarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D * L_4 = __this->get_garageImageService_13();
		NullCheck(L_4);
		bool L_5 = L_4->get_ready_5();
		return L_5;
	}

IL_0026:
	{
		return (bool)0;
	}
}
// System.Int32 Manager::getNumOfAvailableLots(SlotData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Manager_getNumOfAvailableLots_m0DD8DB11C302754137F0497317201083E1E0C141 (Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F * __this, SlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC * ___slots0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mAD305143492AAC7F276F069F770669D0346366DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA62707402B14898234C649AEE6E092C45B31E6FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m388FEDED591A9DB7405CD231BCE0F27C9DDC3384_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6BB3FBE04A346BEDADE16304C50350012B85D750_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t04B2B6D39010AE5234583088426C4035B4AD22F8  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// int sum = 0;
		V_0 = 0;
		// foreach (Slot slot in slots.data) {
		SlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC * L_0 = ___slots0;
		NullCheck(L_0);
		List_1_t056E7EF741034056C75CA26D0F661E2CA19929B2 * L_1 = L_0->get_data_0();
		NullCheck(L_1);
		Enumerator_t04B2B6D39010AE5234583088426C4035B4AD22F8  L_2;
		L_2 = List_1_GetEnumerator_m6BB3FBE04A346BEDADE16304C50350012B85D750(L_1, /*hidden argument*/List_1_GetEnumerator_m6BB3FBE04A346BEDADE16304C50350012B85D750_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0022;
		}

IL_0010:
		{
			// foreach (Slot slot in slots.data) {
			Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_3;
			L_3 = Enumerator_get_Current_m388FEDED591A9DB7405CD231BCE0F27C9DDC3384_inline((Enumerator_t04B2B6D39010AE5234583088426C4035B4AD22F8 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m388FEDED591A9DB7405CD231BCE0F27C9DDC3384_RuntimeMethod_var);
			// if (slot.isActive) {
			NullCheck(L_3);
			bool L_4 = L_3->get_isActive_2();
			if (!L_4)
			{
				goto IL_0022;
			}
		}

IL_001e:
		{
			// sum++;
			int32_t L_5 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		}

IL_0022:
		{
			// foreach (Slot slot in slots.data) {
			bool L_6;
			L_6 = Enumerator_MoveNext_mA62707402B14898234C649AEE6E092C45B31E6FD((Enumerator_t04B2B6D39010AE5234583088426C4035B4AD22F8 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mA62707402B14898234C649AEE6E092C45B31E6FD_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0010;
			}
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x3B, FINALLY_002d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mAD305143492AAC7F276F069F770669D0346366DE((Enumerator_t04B2B6D39010AE5234583088426C4035B4AD22F8 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mAD305143492AAC7F276F069F770669D0346366DE_RuntimeMethod_var);
		IL2CPP_END_FINALLY(45)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
	}

IL_003b:
	{
		// return sum;
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Void Manager::renderGarage(GarageData,SlotData,UnityEngine.UI.Image)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_renderGarage_mADEC18312F5C0DD9BAFC77860D73FBCDF5299A1A (Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F * __this, GarageData_t6AC8C4C188330A4D476F559113CB4E358F161C9B * ___garage0, SlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC * ___slots1, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___image2, const RuntimeMethod* method)
{
	{
		// slotGeneratorService.addSlots(garage, slots, image);
		SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * L_0 = __this->get_slotGeneratorService_12();
		GarageData_t6AC8C4C188330A4D476F559113CB4E358F161C9B * L_1 = ___garage0;
		SlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC * L_2 = ___slots1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = ___image2;
		NullCheck(L_0);
		SlotGeneratorService_addSlots_m8CEB1D04A37283DDCCE42D88346044510699E183(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Manager::scaleGarageImageToScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_scaleGarageImageToScreen_m433394D6537FBFC95AFAFF9E150D37DA47F97129 (Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Manager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager__ctor_m5B9F7AAE653DB0466943D59D3579FFCCFC32631E (Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Slot::.ctor(System.Int32,System.String,System.Boolean,System.Collections.Generic.List`1<Cordinate>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slot__ctor_m6411F2A8DDE58F19DB9F997228F7AE88420DA09A (Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * __this, int32_t ___id0, String_t* ___name1, bool ___isActive2, List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * ___coordinates3, const RuntimeMethod* method)
{
	{
		// public Slot(int id, string name, bool isActive, List<Cordinate> coordinates)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.id = id;
		int32_t L_0 = ___id0;
		__this->set_id_0(L_0);
		// this.name = name;
		String_t* L_1 = ___name1;
		__this->set_name_1(L_1);
		// this.isActive = isActive;
		bool L_2 = ___isActive2;
		__this->set_isActive_2(L_2);
		// this.coordinates = coordinates;
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_3 = ___coordinates3;
		__this->set_coordinates_3(L_3);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String SlotApiController::getSlotStringJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SlotApiController_getSlotStringJson_m808D1ABCE9BFD7A7DA1F05B5F03DA79F6B288A72 (SlotApiController_tD8CA2BAD7CF4BD0A8E75FCE437805A296FA89856 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC70DA75E28293911AAA2D3AF8B19C9B58F58EA9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string slotJson = "{\"data\":[{\"place\":null,\"" +
		//     "coordinates\":[{\"id\":0,\"x\":80,\"y\":305}" +
		//     ",{\"id\":0,\"x\":153,\"y\":307}" +
		//     ",{\"id\":0,\"x\":81,\"y\":337}" +
		//     ",{\"id\":0,\"x\":152,\"y\":339}]" +
		//     ",\"id\":17,\"name\":\"A1\",\"latitude\":0,\"longitude\":0,\"placeId\":1,\"status\":2,\"statusString\":\"متاح\"" +
		//     ",\"isActive\":false" +
		//     "}" +
		//     ",{\"place\":null,\"coordinates\":" +
		//     "[{\"id\":0,\"x\":305,\"y\":346}" +
		//     ",{\"id\":0,\"x\":262,\"y\":345}" +
		//     ",{\"id\":0,\"x\":303,\"y\":316}" +
		//     ",{\"id\":0,\"x\":263,\"y\":314}" +
		//     "]" +
		//     ",\"id\":18,\"name\":\"A2\",\"latitude\":0,\"longitude\":0,\"placeId\":1,\"status\":2,\"statusString\":\"متاح\",\"isActive\":true}" +
		//     ",{\"place\":null,\"coordinates\":[" +
		//     "{" +
		//     "\"id\":0,\"x\":75,\"y\":574}," +
		//     "{\"id\":0,\"x\":148,\"y\":575}," +
		//     "{\"id\":0,\"x\":74,\"y\":608}," +
		//     "{\"id\":0,\"x\":147,\"y\":609}" +
		//     "]," +
		//     "\"id\":19,\"name\":\"A3\",\"latitude\":0,\"longitude\":0,\"placeId\":1,\"status\":2,\"statusString\":\"متاح\",\"isActive\":true}" +
		//     ",{\"place\":null,\"coordinates\":[" +
		//     "{" +
		//     "\"id\":0,\"x\":333,\"y\":695}" +
		//     ",{\"id\":0,\"x\":255,\"y\":694}" +
		//     ",{\"id\":0,\"x\":330,\"y\":664}" +
		//     ",{\"id\":0,\"x\":255,\"y\":663}" +
		//     "]" +
		//     ",\"id\":20,\"name\":\"A4\",\"latitude\":0,\"longitude\":0,\"placeId\":1,\"status\":2,\"statusString\":\"متاح\",\"isActive\":false}" +
		//     ",{\"place\":null,\"coordinates\":[{\"id\":0,\"x\":96,\"y\":172},{\"id\":0,\"x\":97,\"y\":212},{\"id\":0,\"x\":119,\"y\":210},{\"id\":0,\"x\":122,\"y\":178}],\"id\":21,\"name\":\"A5\",\"latitude\":0,\"longitude\":0,\"placeId\":1,\"status\":2,\"statusString\":\"متاح\",\"isActive\":true},{\"place\":null,\"coordinates\":[{\"id\":0,\"x\":137,\"y\":178},{\"id\":0,\"x\":134,\"y\":211},{\"id\":0,\"x\":162,\"y\":210},{\"id\":0,\"x\":166,\"y\":184}],\"id\":22,\"name\":\"A6\",\"latitude\":0,\"longitude\":0,\"placeId\":1,\"status\":2,\"statusString\":\"متاح\",\"isActive\":true}],\"errorCode\":0,\"errorMessage\":\"\",\"success\":true}";
		// return slotJson;
		return _stringLiteralCC70DA75E28293911AAA2D3AF8B19C9B58F58EA9;
	}
}
// System.Collections.IEnumerator SlotApiController::getJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SlotApiController_getJson_m4918A7EE065D0820A42A77FAD7863B0F5212B425 (SlotApiController_tD8CA2BAD7CF4BD0A8E75FCE437805A296FA89856 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CgetJsonU3Ed__1_t69582BBB54FE0FE8110D44195366E8A689264514_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CgetJsonU3Ed__1_t69582BBB54FE0FE8110D44195366E8A689264514 * L_0 = (U3CgetJsonU3Ed__1_t69582BBB54FE0FE8110D44195366E8A689264514 *)il2cpp_codegen_object_new(U3CgetJsonU3Ed__1_t69582BBB54FE0FE8110D44195366E8A689264514_il2cpp_TypeInfo_var);
		U3CgetJsonU3Ed__1__ctor_mBE239E4F0CCE0A0D1A7E587FE668D04F710790DC(L_0, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void SlotApiController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotApiController__ctor_m1B2EF511767576B0FFA90131E1389150D582B7CF (SlotApiController_tD8CA2BAD7CF4BD0A8E75FCE437805A296FA89856 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SlotData::.ctor(System.Collections.Generic.List`1<Slot>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotData__ctor_m5D14AD8D4BB78174107ECFE0F45010645DD78037 (SlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC * __this, List_1_t056E7EF741034056C75CA26D0F661E2CA19929B2 * ___data0, const RuntimeMethod* method)
{
	{
		// public SlotData(List<Slot> data) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.data = data;
		List_1_t056E7EF741034056C75CA26D0F661E2CA19929B2 * L_0 = ___data0;
		__this->set_data_0(L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SlotGeneratorService::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotGeneratorService_Start_mAA4BF81BD20413690DD23BBFCEA405C82ACF0A43 (SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisManager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F_m1D912FA48BEB5C48B62F84938110A897978707E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2_m717B144187840E88C5BE34ED8084FB43718EDA9F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// manager = GetComponentInParent<Manager>();
		Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F * L_0;
		L_0 = Component_GetComponentInParent_TisManager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F_m1D912FA48BEB5C48B62F84938110A897978707E4(__this, /*hidden argument*/Component_GetComponentInParent_TisManager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F_m1D912FA48BEB5C48B62F84938110A897978707E4_RuntimeMethod_var);
		__this->set_manager_4(L_0);
		// garageService = GetComponent<GarageService>();
		GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * L_1;
		L_1 = Component_GetComponent_TisGarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2_m717B144187840E88C5BE34ED8084FB43718EDA9F(__this, /*hidden argument*/Component_GetComponent_TisGarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2_m717B144187840E88C5BE34ED8084FB43718EDA9F_RuntimeMethod_var);
		__this->set_garageService_6(L_1);
		// currentSize = new Vector2(manager.bodyRectTransform.rect.width, manager.bodyRectTransform.rect.height);
		Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F * L_2 = __this->get_manager_4();
		NullCheck(L_2);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_3 = L_2->get_bodyRectTransform_5();
		NullCheck(L_3);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_4;
		L_4 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5;
		L_5 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F * L_6 = __this->get_manager_4();
		NullCheck(L_6);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_7 = L_6->get_bodyRectTransform_5();
		NullCheck(L_7);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_8;
		L_8 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		float L_9;
		L_9 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_10), L_5, L_9, /*hidden argument*/NULL);
		__this->set_currentSize_15(L_10);
		// }
		return;
	}
}
// System.Void SlotGeneratorService::addSlots(GarageData,SlotData,UnityEngine.UI.Image)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotGeneratorService_addSlots_m8CEB1D04A37283DDCCE42D88346044510699E183 (SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * __this, GarageData_t6AC8C4C188330A4D476F559113CB4E358F161C9B * ___garage0, SlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC * ___slots1, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___image2, const RuntimeMethod* method)
{
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// originalSize = new Vector2(image.sprite.rect.size.x, image.sprite.rect.size.y);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = ___image2;
		NullCheck(L_0);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_1;
		L_1 = Image_get_sprite_mA6FB016B4E3FE5EFFAE4B3AEE2D2DF89C61E0AF3_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_2;
		L_2 = Sprite_get_rect_m146D3624E5D8DD6DF5B1F39CE618D701B9008C70(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Rect_get_size_m752B3BB45AE862F6EAE941ED5E5C1B01C0973A00((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		float L_4 = L_3.get_x_0();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = ___image2;
		NullCheck(L_5);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_6;
		L_6 = Image_get_sprite_mA6FB016B4E3FE5EFFAE4B3AEE2D2DF89C61E0AF3_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_7;
		L_7 = Sprite_get_rect_m146D3624E5D8DD6DF5B1F39CE618D701B9008C70(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Rect_get_size_m752B3BB45AE862F6EAE941ED5E5C1B01C0973A00((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		float L_9 = L_8.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_10), L_4, L_9, /*hidden argument*/NULL);
		__this->set_originalSize_14(L_10);
		// yFactor = currentSize.y / originalSize.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_11 = __this->get_address_of_currentSize_15();
		float L_12 = L_11->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_13 = __this->get_address_of_originalSize_14();
		float L_14 = L_13->get_y_1();
		__this->set_yFactor_17(((float)((float)L_12/(float)L_14)));
		// xFactor = currentSize.x / originalSize.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_15 = __this->get_address_of_currentSize_15();
		float L_16 = L_15->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_17 = __this->get_address_of_originalSize_14();
		float L_18 = L_17->get_x_0();
		__this->set_xFactor_16(((float)((float)L_16/(float)L_18)));
		// this.slots = slots;
		SlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC * L_19 = ___slots1;
		__this->set_slots_5(L_19);
		// startAdding();
		SlotGeneratorService_startAdding_m192B1BF6BFC6E822D021292573471AC7A10B1615(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SlotGeneratorService::startAdding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotGeneratorService_startAdding_m192B1BF6BFC6E822D021292573471AC7A10B1615 (SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mAD305143492AAC7F276F069F770669D0346366DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA62707402B14898234C649AEE6E092C45B31E6FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m388FEDED591A9DB7405CD231BCE0F27C9DDC3384_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6BB3FBE04A346BEDADE16304C50350012B85D750_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m8F5F75D5872251B7E04B6D385D1BDD52DD9F3B5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t04B2B6D39010AE5234583088426C4035B4AD22F8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * V_1 = NULL;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * V_2 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * G_B7_0 = NULL;
	{
		// foreach (Slot slot in slots.data) {
		SlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC * L_0 = __this->get_slots_5();
		NullCheck(L_0);
		List_1_t056E7EF741034056C75CA26D0F661E2CA19929B2 * L_1 = L_0->get_data_0();
		NullCheck(L_1);
		Enumerator_t04B2B6D39010AE5234583088426C4035B4AD22F8  L_2;
		L_2 = List_1_GetEnumerator_m6BB3FBE04A346BEDADE16304C50350012B85D750(L_1, /*hidden argument*/List_1_GetEnumerator_m6BB3FBE04A346BEDADE16304C50350012B85D750_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006e;
		}

IL_0013:
		{
			// foreach (Slot slot in slots.data) {
			Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_3;
			L_3 = Enumerator_get_Current_m388FEDED591A9DB7405CD231BCE0F27C9DDC3384_inline((Enumerator_t04B2B6D39010AE5234583088426C4035B4AD22F8 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m388FEDED591A9DB7405CD231BCE0F27C9DDC3384_RuntimeMethod_var);
			V_1 = L_3;
			// Sprite slotSprite = slot.isActive ? freeSlot : (inLeft(slot)? occupedSlotLeft : occupedSlotRight);
			Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_4 = V_1;
			NullCheck(L_4);
			bool L_5 = L_4->get_isActive_2();
			if (L_5)
			{
				goto IL_003c;
			}
		}

IL_0023:
		{
			Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_6 = V_1;
			bool L_7;
			L_7 = SlotGeneratorService_inLeft_m36B5EC8F55BF0D7A8821D25172E8B62EEC99DB23(__this, L_6, /*hidden argument*/NULL);
			if (L_7)
			{
				goto IL_0034;
			}
		}

IL_002c:
		{
			Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_8 = __this->get_occupedSlotRight_12();
			G_B7_0 = L_8;
			goto IL_0042;
		}

IL_0034:
		{
			Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_9 = __this->get_occupedSlotLeft_11();
			G_B7_0 = L_9;
			goto IL_0042;
		}

IL_003c:
		{
			Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_10 = __this->get_freeSlot_10();
			G_B7_0 = L_10;
		}

IL_0042:
		{
			V_2 = G_B7_0;
			// Image slotImageIns = Instantiate(slotImage, manager.bodyRectTransform.transform);
			Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_11 = __this->get_slotImage_9();
			Manager_t4539029B29E4A85D7B60BA58B4BFF762FEFE4F5F * L_12 = __this->get_manager_4();
			NullCheck(L_12);
			RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_13 = L_12->get_bodyRectTransform_5();
			NullCheck(L_13);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
			L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_13, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_15;
			L_15 = Object_Instantiate_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m8F5F75D5872251B7E04B6D385D1BDD52DD9F3B5D(L_11, L_14, /*hidden argument*/Object_Instantiate_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m8F5F75D5872251B7E04B6D385D1BDD52DD9F3B5D_RuntimeMethod_var);
			V_3 = L_15;
			// slotImageIns.sprite = slotSprite;
			Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_16 = V_3;
			Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_17 = V_2;
			NullCheck(L_16);
			Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_16, L_17, /*hidden argument*/NULL);
			// addSlotImageProps(slot, slotImageIns);
			Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_18 = V_1;
			Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_19 = V_3;
			SlotGeneratorService_addSlotImageProps_mBB8179EC4C13E8CCBA5B36CC5059D1F4FF3B014A(__this, L_18, L_19, /*hidden argument*/NULL);
		}

IL_006e:
		{
			// foreach (Slot slot in slots.data) {
			bool L_20;
			L_20 = Enumerator_MoveNext_mA62707402B14898234C649AEE6E092C45B31E6FD((Enumerator_t04B2B6D39010AE5234583088426C4035B4AD22F8 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mA62707402B14898234C649AEE6E092C45B31E6FD_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_0013;
			}
		}

IL_0077:
		{
			IL2CPP_LEAVE(0x87, FINALLY_0079);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0079;
	}

FINALLY_0079:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mAD305143492AAC7F276F069F770669D0346366DE((Enumerator_t04B2B6D39010AE5234583088426C4035B4AD22F8 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mAD305143492AAC7F276F069F770669D0346366DE_RuntimeMethod_var);
		IL2CPP_END_FINALLY(121)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(121)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x87, IL_0087)
	}

IL_0087:
	{
		// }
		return;
	}
}
// System.Void SlotGeneratorService::addSlotImageProps(Slot,UnityEngine.UI.Image)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotGeneratorService_addSlotImageProps_mBB8179EC4C13E8CCBA5B36CC5059D1F4FF3B014A (SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * __this, Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * ___slot0, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___slotImage1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3_m9C09C585E17F9383420667FF762857FBF7F138CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass18_0_U3CaddSlotImagePropsU3Eb__0_mA9F739BDA8787E717A4CA9AFD25788C1FA68A306_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass18_0_tE64AC2344E78812B4D2D693C8918CB2BB01D13EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass18_0_tE64AC2344E78812B4D2D693C8918CB2BB01D13EE * V_0 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * V_4 = NULL;
	String_t* G_B2_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B1_1 = NULL;
	{
		U3CU3Ec__DisplayClass18_0_tE64AC2344E78812B4D2D693C8918CB2BB01D13EE * L_0 = (U3CU3Ec__DisplayClass18_0_tE64AC2344E78812B4D2D693C8918CB2BB01D13EE *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass18_0_tE64AC2344E78812B4D2D693C8918CB2BB01D13EE_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass18_0__ctor_m1B433C6A8C17DFAEE6ECD514307E7F9BE58C4582(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass18_0_tE64AC2344E78812B4D2D693C8918CB2BB01D13EE * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		// SlotImageProps props = slotImage.GetComponent<SlotImageProps>();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_2 = ___slotImage1;
		NullCheck(L_2);
		SlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3 * L_3;
		L_3 = Component_GetComponent_TisSlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3_m9C09C585E17F9383420667FF762857FBF7F138CC(L_2, /*hidden argument*/Component_GetComponent_TisSlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3_m9C09C585E17F9383420667FF762857FBF7F138CC_RuntimeMethod_var);
		// props.id = slot.id;
		SlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3 * L_4 = L_3;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_5 = ___slot0;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_id_0();
		NullCheck(L_4);
		L_4->set_id_4(L_6);
		// props.slotName = slot.name;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_7 = ___slot0;
		NullCheck(L_7);
		String_t* L_8 = L_7->get_name_1();
		NullCheck(L_4);
		L_4->set_slotName_5(L_8);
		// slotImage.name = "" + slot.id;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_9 = ___slotImage1;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_10 = ___slot0;
		NullCheck(L_10);
		int32_t* L_11 = L_10->get_address_of_id_0();
		String_t* L_12;
		L_12 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_11, /*hidden argument*/NULL);
		String_t* L_13 = L_12;
		G_B1_0 = L_13;
		G_B1_1 = L_9;
		if (L_13)
		{
			G_B2_0 = L_13;
			G_B2_1 = L_9;
			goto IL_003f;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
	}

IL_003f:
	{
		NullCheck(G_B2_1);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(G_B2_1, G_B2_0, /*hidden argument*/NULL);
		// if (slot.isActive){
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_14 = ___slot0;
		NullCheck(L_14);
		bool L_15 = L_14->get_isActive_2();
		if (!L_15)
		{
			goto IL_005f;
		}
	}
	{
		// slotDimentions = getSlotDimentions(slot);
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_16 = ___slot0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		L_17 = SlotGeneratorService_getSlotDimentions_m0FB3E99CD8DA0205F3873F1B0E7A2817407EB362(__this, L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		// pos = getPosistion(slot, slotDimentions);
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_18 = ___slot0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		L_20 = SlotGeneratorService_getPosistion_mC89A05F242862B71A0A43B2040F6F99F9A1E8512(__this, L_18, L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		// }
		goto IL_0070;
	}

IL_005f:
	{
		// slotDimentions = getOccupedSlotDimentions(slot);
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_21 = ___slot0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22;
		L_22 = SlotGeneratorService_getOccupedSlotDimentions_m96703C69905F6D15B08476FC5697E52B52D49544(__this, L_21, /*hidden argument*/NULL);
		V_1 = L_22;
		// pos = getOccupedPosistion(slot, slotDimentions);
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_23 = ___slot0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25;
		L_25 = SlotGeneratorService_getOccupedPosistion_m68D05AEF4EB8780084FD7F4FAC672F8887BD16C2(__this, L_23, L_24, /*hidden argument*/NULL);
		V_2 = L_25;
	}

IL_0070:
	{
		// float rotation = getRotation(slot);
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_26 = ___slot0;
		float L_27;
		L_27 = SlotGeneratorService_getRotation_m0DCA9193BE87A03A26719B3BAF7B85379AA81518(__this, L_26, /*hidden argument*/NULL);
		V_3 = L_27;
		// slotImage.rectTransform.sizeDelta = slotDimentions;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_28 = ___slotImage1;
		NullCheck(L_28);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_29;
		L_29 = Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF(L_28, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30 = V_1;
		NullCheck(L_29);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_29, L_30, /*hidden argument*/NULL);
		// slotImage.rectTransform.anchoredPosition = pos;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_31 = ___slotImage1;
		NullCheck(L_31);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_32;
		L_32 = Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF(L_31, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33 = V_2;
		NullCheck(L_32);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_32, L_33, /*hidden argument*/NULL);
		// slotImage.rectTransform.Rotate(new Vector3(0f, 0f, rotation));
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_34 = ___slotImage1;
		NullCheck(L_34);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_35;
		L_35 = Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF(L_34, /*hidden argument*/NULL);
		float L_36 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_37), (0.0f), (0.0f), L_36, /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7(L_35, L_37, /*hidden argument*/NULL);
		// Button imageButton = slotImage.GetComponent<Button>();
		U3CU3Ec__DisplayClass18_0_tE64AC2344E78812B4D2D693C8918CB2BB01D13EE * L_38 = V_0;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_39 = ___slotImage1;
		NullCheck(L_39);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_40;
		L_40 = Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6(L_39, /*hidden argument*/Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		NullCheck(L_38);
		L_38->set_imageButton_1(L_40);
		// if (slot.isActive){
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_41 = ___slot0;
		NullCheck(L_41);
		bool L_42 = L_41->get_isActive_2();
		if (!L_42)
		{
			goto IL_0119;
		}
	}
	{
		// Text slotTextComponenet = slotImage.GetComponentInChildren<Text>();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_43 = ___slotImage1;
		NullCheck(L_43);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_44;
		L_44 = Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3(L_43, /*hidden argument*/Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3_RuntimeMethod_var);
		V_4 = L_44;
		// slotTextComponenet.rectTransform.sizeDelta = slotDimentions;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_45 = V_4;
		NullCheck(L_45);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_46;
		L_46 = Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF(L_45, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_47 = V_1;
		NullCheck(L_46);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_46, L_47, /*hidden argument*/NULL);
		// slotTextComponenet.text = slot.name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_48 = V_4;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_49 = ___slot0;
		NullCheck(L_49);
		String_t* L_50 = L_49->get_name_1();
		NullCheck(L_48);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_48, L_50);
		// if (inRight(slot)){
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_51 = ___slot0;
		bool L_52;
		L_52 = SlotGeneratorService_inRight_m153BB8EBF72491FEC68F359217E2F8E04C318018(__this, L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_00f4;
		}
	}
	{
		// slotTextComponenet.alignment = TextAnchor.LowerLeft;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_53 = V_4;
		NullCheck(L_53);
		Text_set_alignment_mBA9424D5CCC6FB11861B67A40E0C0F6DDBFDAB2C(L_53, 6, /*hidden argument*/NULL);
		// }
		goto IL_00fc;
	}

IL_00f4:
	{
		// slotTextComponenet.alignment = TextAnchor.LowerRight;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_54 = V_4;
		NullCheck(L_54);
		Text_set_alignment_mBA9424D5CCC6FB11861B67A40E0C0F6DDBFDAB2C(L_54, 8, /*hidden argument*/NULL);
	}

IL_00fc:
	{
		// imageButton.onClick.AddListener(() => imageClicked(imageButton));
		U3CU3Ec__DisplayClass18_0_tE64AC2344E78812B4D2D693C8918CB2BB01D13EE * L_55 = V_0;
		NullCheck(L_55);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_56 = L_55->get_imageButton_1();
		NullCheck(L_56);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_57;
		L_57 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_56, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass18_0_tE64AC2344E78812B4D2D693C8918CB2BB01D13EE * L_58 = V_0;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_59 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_59, L_58, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass18_0_U3CaddSlotImagePropsU3Eb__0_mA9F739BDA8787E717A4CA9AFD25788C1FA68A306_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_57);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_57, L_59, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0119:
	{
		// slotImage.GetComponentInChildren<Text>().text = "";
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_60 = ___slotImage1;
		NullCheck(L_60);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_61;
		L_61 = Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3(L_60, /*hidden argument*/Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3_RuntimeMethod_var);
		NullCheck(L_61);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_61, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// imageButton.enabled = false;
		U3CU3Ec__DisplayClass18_0_tE64AC2344E78812B4D2D693C8918CB2BB01D13EE * L_62 = V_0;
		NullCheck(L_62);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_63 = L_62->get_imageButton_1();
		NullCheck(L_63);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_63, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 SlotGeneratorService::getOccupedPosistion(Slot,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  SlotGeneratorService_getOccupedPosistion_m68D05AEF4EB8780084FD7F4FAC672F8887BD16C2 (SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * __this, Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * ___slot0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___slotDimentions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	{
		// if (inRight(slot)){
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_0 = ___slot0;
		bool L_1;
		L_1 = SlotGeneratorService_inRight_m153BB8EBF72491FEC68F359217E2F8E04C318018(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00a5;
		}
	}
	{
		// x1 = slot.coordinates[3].x;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_2 = ___slot0;
		NullCheck(L_2);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_3 = L_2->get_coordinates_3();
		NullCheck(L_3);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_4;
		L_4 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_3, 3, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_4);
		float L_5 = L_4->get_x_1();
		V_0 = L_5;
		// y1 = slot.coordinates[3].y;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_6 = ___slot0;
		NullCheck(L_6);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_7 = L_6->get_coordinates_3();
		NullCheck(L_7);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_8;
		L_8 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_7, 3, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_8);
		float L_9 = L_8->get_y_2();
		V_4 = L_9;
		// x2 = slot.coordinates[2].x;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_10 = ___slot0;
		NullCheck(L_10);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_11 = L_10->get_coordinates_3();
		NullCheck(L_11);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_12;
		L_12 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_11, 2, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_12);
		float L_13 = L_12->get_x_1();
		V_1 = L_13;
		// y2 = slot.coordinates[2].y;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_14 = ___slot0;
		NullCheck(L_14);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_15 = L_14->get_coordinates_3();
		NullCheck(L_15);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_16;
		L_16 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_15, 2, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_16);
		float L_17 = L_16->get_y_2();
		V_5 = L_17;
		// x3 = slot.coordinates[1].x;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_18 = ___slot0;
		NullCheck(L_18);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_19 = L_18->get_coordinates_3();
		NullCheck(L_19);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_20;
		L_20 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_19, 1, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_20);
		float L_21 = L_20->get_x_1();
		V_2 = L_21;
		// y3 = slot.coordinates[1].y;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_22 = ___slot0;
		NullCheck(L_22);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_23 = L_22->get_coordinates_3();
		NullCheck(L_23);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_24;
		L_24 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_23, 1, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_24);
		float L_25 = L_24->get_y_2();
		V_6 = L_25;
		// x4 = slot.coordinates[0].x;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_26 = ___slot0;
		NullCheck(L_26);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_27 = L_26->get_coordinates_3();
		NullCheck(L_27);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_28;
		L_28 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_27, 0, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_28);
		float L_29 = L_28->get_x_1();
		V_3 = L_29;
		// y4 = slot.coordinates[0].y;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_30 = ___slot0;
		NullCheck(L_30);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_31 = L_30->get_coordinates_3();
		NullCheck(L_31);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_32;
		L_32 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_31, 0, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_32);
		float L_33 = L_32->get_y_2();
		V_7 = L_33;
		// }
		goto IL_0139;
	}

IL_00a5:
	{
		// x1 = slot.coordinates[0].x;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_34 = ___slot0;
		NullCheck(L_34);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_35 = L_34->get_coordinates_3();
		NullCheck(L_35);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_36;
		L_36 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_35, 0, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_36);
		float L_37 = L_36->get_x_1();
		V_0 = L_37;
		// y1 = slot.coordinates[0].y;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_38 = ___slot0;
		NullCheck(L_38);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_39 = L_38->get_coordinates_3();
		NullCheck(L_39);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_40;
		L_40 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_39, 0, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_40);
		float L_41 = L_40->get_y_2();
		V_4 = L_41;
		// x2 = slot.coordinates[1].x;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_42 = ___slot0;
		NullCheck(L_42);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_43 = L_42->get_coordinates_3();
		NullCheck(L_43);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_44;
		L_44 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_43, 1, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_44);
		float L_45 = L_44->get_x_1();
		V_1 = L_45;
		// y2 = slot.coordinates[1].y;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_46 = ___slot0;
		NullCheck(L_46);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_47 = L_46->get_coordinates_3();
		NullCheck(L_47);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_48;
		L_48 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_47, 1, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_48);
		float L_49 = L_48->get_y_2();
		V_5 = L_49;
		// x3 = slot.coordinates[2].x;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_50 = ___slot0;
		NullCheck(L_50);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_51 = L_50->get_coordinates_3();
		NullCheck(L_51);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_52;
		L_52 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_51, 2, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_52);
		float L_53 = L_52->get_x_1();
		V_2 = L_53;
		// y3 = slot.coordinates[2].y;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_54 = ___slot0;
		NullCheck(L_54);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_55 = L_54->get_coordinates_3();
		NullCheck(L_55);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_56;
		L_56 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_55, 2, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_56);
		float L_57 = L_56->get_y_2();
		V_6 = L_57;
		// x4 = slot.coordinates[3].x;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_58 = ___slot0;
		NullCheck(L_58);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_59 = L_58->get_coordinates_3();
		NullCheck(L_59);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_60;
		L_60 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_59, 3, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_60);
		float L_61 = L_60->get_x_1();
		V_3 = L_61;
		// y4 = slot.coordinates[3].y;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_62 = ___slot0;
		NullCheck(L_62);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_63 = L_62->get_coordinates_3();
		NullCheck(L_63);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_64;
		L_64 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_63, 3, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_64);
		float L_65 = L_64->get_y_2();
		V_7 = L_65;
	}

IL_0139:
	{
		// float xPos = (x1 + x2 + x3 + x4) / 4;
		float L_66 = V_0;
		float L_67 = V_1;
		float L_68 = V_2;
		float L_69 = V_3;
		// xPos *= xFactor;
		float L_70 = __this->get_xFactor_16();
		// float yPos = (y1 + y2 + y3 + y4) / 4;
		float L_71 = V_4;
		float L_72 = V_5;
		float L_73 = V_6;
		float L_74 = V_7;
		V_8 = ((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_71, (float)L_72)), (float)L_73)), (float)L_74))/(float)(4.0f)));
		// yPos *= yFactor;
		float L_75 = V_8;
		float L_76 = __this->get_yFactor_17();
		V_8 = ((float)il2cpp_codegen_multiply((float)L_75, (float)L_76));
		// xPos = xPos  - currentSize.x / 2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_77 = __this->get_address_of_currentSize_15();
		float L_78 = L_77->get_x_0();
		// yPos = currentSize.y / 2 - yPos;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_79 = __this->get_address_of_currentSize_15();
		float L_80 = L_79->get_y_1();
		float L_81 = V_8;
		V_8 = ((float)il2cpp_codegen_subtract((float)((float)((float)L_80/(float)(2.0f))), (float)L_81));
		// return new Vector3(xPos, yPos);
		float L_82 = V_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_83;
		memset((&L_83), 0, sizeof(L_83));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_83), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_66, (float)L_67)), (float)L_68)), (float)L_69))/(float)(4.0f))), (float)L_70)), (float)((float)((float)L_78/(float)(2.0f))))), L_82, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_84;
		L_84 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_83, /*hidden argument*/NULL);
		return L_84;
	}
}
// UnityEngine.Vector2 SlotGeneratorService::getPosistion(Slot,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  SlotGeneratorService_getPosistion_mC89A05F242862B71A0A43B2040F6F99F9A1E8512 (SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * __this, Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * ___slot0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___slotDimentions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// if (inRight(slot)){
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_0 = ___slot0;
		bool L_1;
		L_1 = SlotGeneratorService_inRight_m153BB8EBF72491FEC68F359217E2F8E04C318018(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		// x1 = slot.coordinates[3].x;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_2 = ___slot0;
		NullCheck(L_2);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_3 = L_2->get_coordinates_3();
		NullCheck(L_3);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_4;
		L_4 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_3, 3, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_4);
		float L_5 = L_4->get_x_1();
		V_0 = L_5;
		// y1 = slot.coordinates[3].y;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_6 = ___slot0;
		NullCheck(L_6);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_7 = L_6->get_coordinates_3();
		NullCheck(L_7);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_8;
		L_8 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_7, 3, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_8);
		float L_9 = L_8->get_y_2();
		V_1 = L_9;
		// y2 = slot.coordinates[2].y;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_10 = ___slot0;
		NullCheck(L_10);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_11 = L_10->get_coordinates_3();
		NullCheck(L_11);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_12;
		L_12 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_11, 2, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_12);
		float L_13 = L_12->get_y_2();
		V_2 = L_13;
		// }
		goto IL_0077;
	}

IL_0041:
	{
		// x1 = slot.coordinates[0].x;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_14 = ___slot0;
		NullCheck(L_14);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_15 = L_14->get_coordinates_3();
		NullCheck(L_15);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_16;
		L_16 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_15, 0, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_16);
		float L_17 = L_16->get_x_1();
		V_0 = L_17;
		// y1 = slot.coordinates[0].y;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_18 = ___slot0;
		NullCheck(L_18);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_19 = L_18->get_coordinates_3();
		NullCheck(L_19);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_20;
		L_20 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_19, 0, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_20);
		float L_21 = L_20->get_y_2();
		V_1 = L_21;
		// y2 = slot.coordinates[1].y;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_22 = ___slot0;
		NullCheck(L_22);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_23 = L_22->get_coordinates_3();
		NullCheck(L_23);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_24;
		L_24 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_23, 1, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_24);
		float L_25 = L_24->get_y_2();
		V_2 = L_25;
	}

IL_0077:
	{
		// xPos = x1 * xFactor - currentSize.x / 2;
		float L_26 = V_0;
		float L_27 = __this->get_xFactor_16();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_28 = __this->get_address_of_currentSize_15();
		float L_29 = L_28->get_x_0();
		// xPos += (slotDimentions.x / 2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30 = ___slotDimentions1;
		float L_31 = L_30.get_x_0();
		// yPos = currentSize.y / 2 - ((y1 + y2) / 2) * yFactor;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_32 = __this->get_address_of_currentSize_15();
		float L_33 = L_32->get_y_1();
		float L_34 = V_1;
		float L_35 = V_2;
		float L_36 = __this->get_yFactor_17();
		V_3 = ((float)il2cpp_codegen_subtract((float)((float)((float)L_33/(float)(2.0f))), (float)((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_add((float)L_34, (float)L_35))/(float)(2.0f))), (float)L_36))));
		// yPos -= (slotDimentions.y / 2);
		float L_37 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38 = ___slotDimentions1;
		float L_39 = L_38.get_y_1();
		V_3 = ((float)il2cpp_codegen_subtract((float)L_37, (float)((float)((float)L_39/(float)(2.0f)))));
		// return new Vector3(xPos, yPos);
		float L_40 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_41), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_26, (float)L_27)), (float)((float)((float)L_29/(float)(2.0f))))), (float)((float)((float)L_31/(float)(2.0f))))), L_40, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_42;
		L_42 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_41, /*hidden argument*/NULL);
		return L_42;
	}
}
// UnityEngine.Vector2 SlotGeneratorService::getOccupedSlotDimentions(Slot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  SlotGeneratorService_getOccupedSlotDimentions_m96703C69905F6D15B08476FC5697E52B52D49544 (SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * __this, Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * ___slot0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// float slotHeight = Mathf.Abs(slot.coordinates[0].y - slot.coordinates[2].y) * yFactor;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_0 = ___slot0;
		NullCheck(L_0);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_1 = L_0->get_coordinates_3();
		NullCheck(L_1);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_2;
		L_2 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_1, 0, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_2);
		float L_3 = L_2->get_y_2();
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_4 = ___slot0;
		NullCheck(L_4);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_5 = L_4->get_coordinates_3();
		NullCheck(L_5);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_6;
		L_6 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_5, 2, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_6);
		float L_7 = L_6->get_y_2();
		float L_8;
		L_8 = fabsf(((float)il2cpp_codegen_subtract((float)L_3, (float)L_7)));
		float L_9 = __this->get_yFactor_17();
		V_1 = ((float)il2cpp_codegen_multiply((float)L_8, (float)L_9));
		// float slotWidth = Mathf.Abs(slot.coordinates[0].x - slot.coordinates[1].x) * xFactor;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_10 = ___slot0;
		NullCheck(L_10);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_11 = L_10->get_coordinates_3();
		NullCheck(L_11);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_12;
		L_12 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_11, 0, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_12);
		float L_13 = L_12->get_x_1();
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_14 = ___slot0;
		NullCheck(L_14);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_15 = L_14->get_coordinates_3();
		NullCheck(L_15);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_16;
		L_16 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_15, 1, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_16);
		float L_17 = L_16->get_x_1();
		float L_18;
		L_18 = fabsf(((float)il2cpp_codegen_subtract((float)L_13, (float)L_17)));
		float L_19 = __this->get_xFactor_16();
		V_2 = ((float)il2cpp_codegen_multiply((float)L_18, (float)L_19));
		// if (slotHeight * 2.101010101010101f > slotWidth){
		float L_20 = V_1;
		float L_21 = V_2;
		if ((!(((float)((float)il2cpp_codegen_multiply((float)L_20, (float)(2.10101008f)))) > ((float)L_21))))
		{
			goto IL_007b;
		}
	}
	{
		// dimentions = new Vector2(slotWidth, slotWidth / 2.101010101010101f);
		float L_22 = V_2;
		float L_23 = V_2;
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), L_22, ((float)((float)L_23/(float)(2.10101008f))), /*hidden argument*/NULL);
		// }
		goto IL_008a;
	}

IL_007b:
	{
		// dimentions = new Vector2(slotHeight * 2.101010101010101f, slotHeight);
		float L_24 = V_1;
		float L_25 = V_1;
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), ((float)il2cpp_codegen_multiply((float)L_24, (float)(2.10101008f))), L_25, /*hidden argument*/NULL);
	}

IL_008a:
	{
		// return dimentions;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26 = V_0;
		return L_26;
	}
}
// UnityEngine.Vector2 SlotGeneratorService::getSlotDimentions(Slot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  SlotGeneratorService_getSlotDimentions_m0FB3E99CD8DA0205F3873F1B0E7A2817407EB362 (SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * __this, Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * ___slot0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		// if (inRight(slot)){
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_0 = ___slot0;
		bool L_1;
		L_1 = SlotGeneratorService_inRight_m153BB8EBF72491FEC68F359217E2F8E04C318018(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0053;
		}
	}
	{
		// x1 = slot.coordinates[3].x;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_2 = ___slot0;
		NullCheck(L_2);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_3 = L_2->get_coordinates_3();
		NullCheck(L_3);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_4;
		L_4 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_3, 3, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_4);
		float L_5 = L_4->get_x_1();
		V_0 = L_5;
		// x2 = slot.coordinates[2].x;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_6 = ___slot0;
		NullCheck(L_6);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_7 = L_6->get_coordinates_3();
		NullCheck(L_7);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_8;
		L_8 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_7, 2, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_8);
		float L_9 = L_8->get_x_1();
		V_1 = L_9;
		// y1 = slot.coordinates[3].y;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_10 = ___slot0;
		NullCheck(L_10);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_11 = L_10->get_coordinates_3();
		NullCheck(L_11);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_12;
		L_12 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_11, 3, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_12);
		float L_13 = L_12->get_y_2();
		V_2 = L_13;
		// y3 = slot.coordinates[1].y;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_14 = ___slot0;
		NullCheck(L_14);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_15 = L_14->get_coordinates_3();
		NullCheck(L_15);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_16;
		L_16 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_15, 1, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_16);
		float L_17 = L_16->get_y_2();
		V_3 = L_17;
		// }
		goto IL_009b;
	}

IL_0053:
	{
		// x1 = slot.coordinates[0].x;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_18 = ___slot0;
		NullCheck(L_18);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_19 = L_18->get_coordinates_3();
		NullCheck(L_19);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_20;
		L_20 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_19, 0, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_20);
		float L_21 = L_20->get_x_1();
		V_0 = L_21;
		// x2 = slot.coordinates[1].x;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_22 = ___slot0;
		NullCheck(L_22);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_23 = L_22->get_coordinates_3();
		NullCheck(L_23);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_24;
		L_24 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_23, 1, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_24);
		float L_25 = L_24->get_x_1();
		V_1 = L_25;
		// y1 = slot.coordinates[0].y;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_26 = ___slot0;
		NullCheck(L_26);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_27 = L_26->get_coordinates_3();
		NullCheck(L_27);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_28;
		L_28 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_27, 0, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_28);
		float L_29 = L_28->get_y_2();
		V_2 = L_29;
		// y3 = slot.coordinates[2].y;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_30 = ___slot0;
		NullCheck(L_30);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_31 = L_30->get_coordinates_3();
		NullCheck(L_31);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_32;
		L_32 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_31, 2, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_32);
		float L_33 = L_32->get_y_2();
		V_3 = L_33;
	}

IL_009b:
	{
		// float width = (x2 - x1) * xFactor;
		float L_34 = V_1;
		float L_35 = V_0;
		float L_36 = __this->get_xFactor_16();
		// float height = (y3 - y1) * yFactor;
		float L_37 = V_3;
		float L_38 = V_2;
		float L_39 = __this->get_yFactor_17();
		V_4 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_37, (float)L_38)), (float)L_39));
		// return new Vector2(width, height);
		float L_40 = V_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_41), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_34, (float)L_35)), (float)L_36)), L_40, /*hidden argument*/NULL);
		return L_41;
	}
}
// System.Single SlotGeneratorService::getRotation(Slot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SlotGeneratorService_getRotation_m0DCA9193BE87A03A26719B3BAF7B85379AA81518 (SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * __this, Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * ___slot0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// if (inRight(slot)){
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_0 = ___slot0;
		bool L_1;
		L_1 = SlotGeneratorService_inRight_m153BB8EBF72491FEC68F359217E2F8E04C318018(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_006f;
		}
	}
	{
		// x1 = slot.coordinates[3].x * xFactor;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_2 = ___slot0;
		NullCheck(L_2);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_3 = L_2->get_coordinates_3();
		NullCheck(L_3);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_4;
		L_4 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_3, 3, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_4);
		float L_5 = L_4->get_x_1();
		float L_6 = __this->get_xFactor_16();
		V_0 = ((float)il2cpp_codegen_multiply((float)L_5, (float)L_6));
		// y1 = slot.coordinates[3].y * yFactor;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_7 = ___slot0;
		NullCheck(L_7);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_8 = L_7->get_coordinates_3();
		NullCheck(L_8);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_9;
		L_9 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_8, 3, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_9);
		float L_10 = L_9->get_y_2();
		float L_11 = __this->get_yFactor_17();
		V_1 = ((float)il2cpp_codegen_multiply((float)L_10, (float)L_11));
		// x2 = slot.coordinates[2].x * xFactor;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_12 = ___slot0;
		NullCheck(L_12);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_13 = L_12->get_coordinates_3();
		NullCheck(L_13);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_14;
		L_14 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_13, 2, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_14);
		float L_15 = L_14->get_x_1();
		float L_16 = __this->get_xFactor_16();
		V_2 = ((float)il2cpp_codegen_multiply((float)L_15, (float)L_16));
		// y2 = slot.coordinates[2].y * yFactor;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_17 = ___slot0;
		NullCheck(L_17);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_18 = L_17->get_coordinates_3();
		NullCheck(L_18);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_19;
		L_19 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_18, 2, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_19);
		float L_20 = L_19->get_y_2();
		float L_21 = __this->get_yFactor_17();
		V_3 = ((float)il2cpp_codegen_multiply((float)L_20, (float)L_21));
		// }
		goto IL_00d3;
	}

IL_006f:
	{
		// x1 = slot.coordinates[0].x * xFactor;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_22 = ___slot0;
		NullCheck(L_22);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_23 = L_22->get_coordinates_3();
		NullCheck(L_23);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_24;
		L_24 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_23, 0, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_24);
		float L_25 = L_24->get_x_1();
		float L_26 = __this->get_xFactor_16();
		V_0 = ((float)il2cpp_codegen_multiply((float)L_25, (float)L_26));
		// y1 = slot.coordinates[0].y * yFactor;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_27 = ___slot0;
		NullCheck(L_27);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_28 = L_27->get_coordinates_3();
		NullCheck(L_28);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_29;
		L_29 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_28, 0, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_29);
		float L_30 = L_29->get_y_2();
		float L_31 = __this->get_yFactor_17();
		V_1 = ((float)il2cpp_codegen_multiply((float)L_30, (float)L_31));
		// x2 = slot.coordinates[1].x * xFactor;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_32 = ___slot0;
		NullCheck(L_32);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_33 = L_32->get_coordinates_3();
		NullCheck(L_33);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_34;
		L_34 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_33, 1, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_34);
		float L_35 = L_34->get_x_1();
		float L_36 = __this->get_xFactor_16();
		V_2 = ((float)il2cpp_codegen_multiply((float)L_35, (float)L_36));
		// y2 = slot.coordinates[1].y * yFactor;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_37 = ___slot0;
		NullCheck(L_37);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_38 = L_37->get_coordinates_3();
		NullCheck(L_38);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_39;
		L_39 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_38, 1, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_39);
		float L_40 = L_39->get_y_2();
		float L_41 = __this->get_yFactor_17();
		V_3 = ((float)il2cpp_codegen_multiply((float)L_40, (float)L_41));
	}

IL_00d3:
	{
		// float baseLine = Mathf.Sqrt(Mathf.Pow((x2 - x1), 2) + Mathf.Pow((y2 - y1), 2));
		float L_42 = V_2;
		float L_43 = V_0;
		float L_44;
		L_44 = powf(((float)il2cpp_codegen_subtract((float)L_42, (float)L_43)), (2.0f));
		float L_45 = V_3;
		float L_46 = V_1;
		float L_47;
		L_47 = powf(((float)il2cpp_codegen_subtract((float)L_45, (float)L_46)), (2.0f));
		float L_48;
		L_48 = sqrtf(((float)il2cpp_codegen_add((float)L_44, (float)L_47)));
		V_4 = L_48;
		// float otherLine = x2 - x1;
		float L_49 = V_2;
		float L_50 = V_0;
		// float angle = Mathf.Acos(otherLine / baseLine) * 180 / Mathf.PI; ;
		float L_51 = V_4;
		float L_52;
		L_52 = acosf(((float)((float)((float)il2cpp_codegen_subtract((float)L_49, (float)L_50))/(float)L_51)));
		V_5 = ((float)((float)((float)il2cpp_codegen_multiply((float)L_52, (float)(180.0f)))/(float)(3.14159274f)));
		// if (y2 > y1) {
		float L_53 = V_3;
		float L_54 = V_1;
		if ((!(((float)L_53) > ((float)L_54))))
		{
			goto IL_011c;
		}
	}
	{
		// angle *= -1;
		float L_55 = V_5;
		V_5 = ((float)il2cpp_codegen_multiply((float)L_55, (float)(-1.0f)));
	}

IL_011c:
	{
		// return angle;
		float L_56 = V_5;
		return L_56;
	}
}
// System.Boolean SlotGeneratorService::inLeft(Slot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SlotGeneratorService_inLeft_m36B5EC8F55BF0D7A8821D25172E8B62EEC99DB23 (SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * __this, Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * ___slot0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return slot.coordinates[0].y < slot.coordinates[2].y ? true : false;
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_0 = ___slot0;
		NullCheck(L_0);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_1 = L_0->get_coordinates_3();
		NullCheck(L_1);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_2;
		L_2 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_1, 0, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_2);
		float L_3 = L_2->get_y_2();
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_4 = ___slot0;
		NullCheck(L_4);
		List_1_tEE649AB7DD2C7175A697C42B3F84B58581935222 * L_5 = L_4->get_coordinates_3();
		NullCheck(L_5);
		Cordinate_tC8C5C8BB79C07CF3E344DB07B29000305C6D3497 * L_6;
		L_6 = List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_inline(L_5, 2, /*hidden argument*/List_1_get_Item_m5E83C453E29CE1997FED009826BA11157079F380_RuntimeMethod_var);
		NullCheck(L_6);
		float L_7 = L_6->get_y_2();
		if ((((float)L_3) < ((float)L_7)))
		{
			goto IL_0026;
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean SlotGeneratorService::inRight(Slot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SlotGeneratorService_inRight_m153BB8EBF72491FEC68F359217E2F8E04C318018 (SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * __this, Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * ___slot0, const RuntimeMethod* method)
{
	{
		// return !inLeft(slot);
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_0 = ___slot0;
		bool L_1;
		L_1 = SlotGeneratorService_inLeft_m36B5EC8F55BF0D7A8821D25172E8B62EEC99DB23(__this, L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean SlotGeneratorService::inButtom(Slot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SlotGeneratorService_inButtom_m857D8ED63DB9D1850E6CDD53FD2FE0BA148587D4 (SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * __this, Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * ___slot0, const RuntimeMethod* method)
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean SlotGeneratorService::inTop(Slot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SlotGeneratorService_inTop_m6F50A5AC799FDB6132156E88F7AFD7E0B8FAFAE9 (SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * __this, Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * ___slot0, const RuntimeMethod* method)
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Void SlotGeneratorService::imageClicked(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotGeneratorService_imageClicked_mC136EC63CD2931ED5C705E8A32D3DF331D4E1164 (SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * __this, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___imageButton0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3_mA28AAA0755ED22EB2362BBC9E639BF56223E3693_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF449ECB799492B6E94508C177821573A9593DCDE);
		s_Il2CppMethodInitialized = true;
	}
	SlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3 * V_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * V_1 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * V_2 = NULL;
	Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * V_3 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * V_4 = NULL;
	SlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3 * V_5 = NULL;
	Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * V_6 = NULL;
	Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * V_7 = NULL;
	{
		// SlotImageProps props = imageButton.gameObject.GetComponent<SlotImageProps>();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = ___imageButton0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		SlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3 * L_2;
		L_2 = GameObject_GetComponent_TisSlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3_mA28AAA0755ED22EB2362BBC9E639BF56223E3693(L_1, /*hidden argument*/GameObject_GetComponent_TisSlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3_mA28AAA0755ED22EB2362BBC9E639BF56223E3693_RuntimeMethod_var);
		V_0 = L_2;
		// Image image = imageButton.gameObject.GetComponent<Image>();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_3 = ___imageButton0;
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5;
		L_5 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_4, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		V_1 = L_5;
		// Text text = imageButton.gameObject.GetComponentInChildren<Text>();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_6 = ___imageButton0;
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8;
		L_8 = GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881(L_7, /*hidden argument*/GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881_RuntimeMethod_var);
		V_2 = L_8;
		// Slot clickedSlot = findSlotById(props.id);
		SlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3 * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = L_9->get_id_4();
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_11;
		L_11 = SlotGeneratorService_findSlotById_m8AE50D36CAC646A2910BC5EDEC3727CF372A74D2(__this, L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		// if (props.free){
		SlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3 * L_12 = V_0;
		NullCheck(L_12);
		bool L_13 = L_12->get_free_8();
		if (!L_13)
		{
			goto IL_0102;
		}
	}
	{
		// if (!ReferenceEquals(selectedImage, null)) {
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_14 = __this->get_selectedImage_18();
		if (!L_14)
		{
			goto IL_00c2;
		}
	}
	{
		// selectedImage.sprite = freeSlot;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_15 = __this->get_selectedImage_18();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_16 = __this->get_freeSlot_10();
		NullCheck(L_15);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_15, L_16, /*hidden argument*/NULL);
		// Text selectedText = selectedImage.gameObject.GetComponentInChildren<Text>();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_17 = __this->get_selectedImage_18();
		NullCheck(L_17);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_19;
		L_19 = GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881(L_18, /*hidden argument*/GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881_RuntimeMethod_var);
		V_4 = L_19;
		// SlotImageProps selectedProps = selectedImage.gameObject.GetComponent<SlotImageProps>();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_20 = __this->get_selectedImage_18();
		NullCheck(L_20);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		SlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3 * L_22;
		L_22 = GameObject_GetComponent_TisSlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3_mA28AAA0755ED22EB2362BBC9E639BF56223E3693(L_21, /*hidden argument*/GameObject_GetComponent_TisSlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3_mA28AAA0755ED22EB2362BBC9E639BF56223E3693_RuntimeMethod_var);
		V_5 = L_22;
		// selectedText.text = selectedProps.slotName;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_23 = V_4;
		SlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3 * L_24 = V_5;
		NullCheck(L_24);
		String_t* L_25 = L_24->get_slotName_5();
		NullCheck(L_23);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, L_25);
		// selectedProps.free = true;
		SlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3 * L_26 = V_5;
		NullCheck(L_26);
		L_26->set_free_8((bool)1);
		// selectedProps.selected = false;
		SlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3 * L_27 = V_5;
		NullCheck(L_27);
		L_27->set_selected_6((bool)0);
		// Slot s = findSlotById(selectedProps.id);
		SlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3 * L_28 = V_5;
		NullCheck(L_28);
		int32_t L_29 = L_28->get_id_4();
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_30;
		L_30 = SlotGeneratorService_findSlotById_m8AE50D36CAC646A2910BC5EDEC3727CF372A74D2(__this, L_29, /*hidden argument*/NULL);
		V_6 = L_30;
		// if (inRight(s)){
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_31 = V_6;
		bool L_32;
		L_32 = SlotGeneratorService_inRight_m153BB8EBF72491FEC68F359217E2F8E04C318018(__this, L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00ba;
		}
	}
	{
		// selectedText.alignment = TextAnchor.LowerLeft;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_33 = V_4;
		NullCheck(L_33);
		Text_set_alignment_mBA9424D5CCC6FB11861B67A40E0C0F6DDBFDAB2C(L_33, 6, /*hidden argument*/NULL);
		// }
		goto IL_00c2;
	}

IL_00ba:
	{
		// selectedText.alignment = TextAnchor.LowerRight;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_34 = V_4;
		NullCheck(L_34);
		Text_set_alignment_mBA9424D5CCC6FB11861B67A40E0C0F6DDBFDAB2C(L_34, 8, /*hidden argument*/NULL);
	}

IL_00c2:
	{
		// selectedImage = image;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_35 = V_1;
		__this->set_selectedImage_18(L_35);
		// garageService.updateSelected(clickedSlot);
		GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * L_36 = __this->get_garageService_6();
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_37 = V_3;
		NullCheck(L_36);
		GarageService_updateSelected_m9D618FD4B344E9DA6F39D3780E9FA94A29CADCC8(L_36, L_37, /*hidden argument*/NULL);
		// text.text = "Selected";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_38 = V_2;
		NullCheck(L_38);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_38, _stringLiteralF449ECB799492B6E94508C177821573A9593DCDE);
		// text.alignment = TextAnchor.MiddleCenter;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_39 = V_2;
		NullCheck(L_39);
		Text_set_alignment_mBA9424D5CCC6FB11861B67A40E0C0F6DDBFDAB2C(L_39, 4, /*hidden argument*/NULL);
		// image.sprite = selected;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_40 = V_1;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_41 = __this->get_selected_13();
		NullCheck(L_40);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_40, L_41, /*hidden argument*/NULL);
		// props.free = false;
		SlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3 * L_42 = V_0;
		NullCheck(L_42);
		L_42->set_free_8((bool)0);
		// props.selected = true;
		SlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3 * L_43 = V_0;
		NullCheck(L_43);
		L_43->set_selected_6((bool)1);
		// }
		return;
	}

IL_0102:
	{
		// else if (garageService.isSelected(clickedSlot.id)){
		GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * L_44 = __this->get_garageService_6();
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_45 = V_3;
		NullCheck(L_45);
		int32_t L_46 = L_45->get_id_0();
		NullCheck(L_44);
		bool L_47;
		L_47 = GarageService_isSelected_mB9C3BCFE55BAA06605D2572647FF4D04BE98D3AD(L_44, L_46, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_0174;
		}
	}
	{
		// selectedImage = null;
		__this->set_selectedImage_18((Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C *)NULL);
		// garageService.unSelect();
		GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * L_48 = __this->get_garageService_6();
		NullCheck(L_48);
		GarageService_unSelect_m90B84840764822FCD6906FCEC5E800C50DE4F627(L_48, /*hidden argument*/NULL);
		// text.text = props.slotName;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_49 = V_2;
		SlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3 * L_50 = V_0;
		NullCheck(L_50);
		String_t* L_51 = L_50->get_slotName_5();
		NullCheck(L_49);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_49, L_51);
		// image.sprite = freeSlot;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_52 = V_1;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_53 = __this->get_freeSlot_10();
		NullCheck(L_52);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_52, L_53, /*hidden argument*/NULL);
		// props.free = true;
		SlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3 * L_54 = V_0;
		NullCheck(L_54);
		L_54->set_free_8((bool)1);
		// props.selected = false;
		SlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3 * L_55 = V_0;
		NullCheck(L_55);
		L_55->set_selected_6((bool)0);
		// Slot s = findSlotById(props.id);
		SlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3 * L_56 = V_0;
		NullCheck(L_56);
		int32_t L_57 = L_56->get_id_4();
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_58;
		L_58 = SlotGeneratorService_findSlotById_m8AE50D36CAC646A2910BC5EDEC3727CF372A74D2(__this, L_57, /*hidden argument*/NULL);
		V_7 = L_58;
		// if (inRight(s)){
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_59 = V_7;
		bool L_60;
		L_60 = SlotGeneratorService_inRight_m153BB8EBF72491FEC68F359217E2F8E04C318018(__this, L_59, /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_016d;
		}
	}
	{
		// text.alignment = TextAnchor.LowerLeft;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_61 = V_2;
		NullCheck(L_61);
		Text_set_alignment_mBA9424D5CCC6FB11861B67A40E0C0F6DDBFDAB2C(L_61, 6, /*hidden argument*/NULL);
		// }
		return;
	}

IL_016d:
	{
		// text.alignment = TextAnchor.LowerRight;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_62 = V_2;
		NullCheck(L_62);
		Text_set_alignment_mBA9424D5CCC6FB11861B67A40E0C0F6DDBFDAB2C(L_62, 8, /*hidden argument*/NULL);
	}

IL_0174:
	{
		// }
		return;
	}
}
// Slot SlotGeneratorService::findSlotById(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * SlotGeneratorService_findSlotById_m8AE50D36CAC646A2910BC5EDEC3727CF372A74D2 (SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * __this, int32_t ___slotId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mAD305143492AAC7F276F069F770669D0346366DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA62707402B14898234C649AEE6E092C45B31E6FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m388FEDED591A9DB7405CD231BCE0F27C9DDC3384_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6BB3FBE04A346BEDADE16304C50350012B85D750_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t04B2B6D39010AE5234583088426C4035B4AD22F8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * V_1 = NULL;
	Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach (Slot slot in slots.data) {
		SlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC * L_0 = __this->get_slots_5();
		NullCheck(L_0);
		List_1_t056E7EF741034056C75CA26D0F661E2CA19929B2 * L_1 = L_0->get_data_0();
		NullCheck(L_1);
		Enumerator_t04B2B6D39010AE5234583088426C4035B4AD22F8  L_2;
		L_2 = List_1_GetEnumerator_m6BB3FBE04A346BEDADE16304C50350012B85D750(L_1, /*hidden argument*/List_1_GetEnumerator_m6BB3FBE04A346BEDADE16304C50350012B85D750_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0028;
		}

IL_0013:
		{
			// foreach (Slot slot in slots.data) {
			Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_3;
			L_3 = Enumerator_get_Current_m388FEDED591A9DB7405CD231BCE0F27C9DDC3384_inline((Enumerator_t04B2B6D39010AE5234583088426C4035B4AD22F8 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m388FEDED591A9DB7405CD231BCE0F27C9DDC3384_RuntimeMethod_var);
			V_1 = L_3;
			// if (slot.id == slotId)
			Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_4 = V_1;
			NullCheck(L_4);
			int32_t L_5 = L_4->get_id_0();
			int32_t L_6 = ___slotId0;
			if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
			{
				goto IL_0028;
			}
		}

IL_0024:
		{
			// return slot;
			Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_7 = V_1;
			V_2 = L_7;
			IL2CPP_LEAVE(0x43, FINALLY_0033);
		}

IL_0028:
		{
			// foreach (Slot slot in slots.data) {
			bool L_8;
			L_8 = Enumerator_MoveNext_mA62707402B14898234C649AEE6E092C45B31E6FD((Enumerator_t04B2B6D39010AE5234583088426C4035B4AD22F8 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mA62707402B14898234C649AEE6E092C45B31E6FD_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0013;
			}
		}

IL_0031:
		{
			IL2CPP_LEAVE(0x41, FINALLY_0033);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mAD305143492AAC7F276F069F770669D0346366DE((Enumerator_t04B2B6D39010AE5234583088426C4035B4AD22F8 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mAD305143492AAC7F276F069F770669D0346366DE_RuntimeMethod_var);
		IL2CPP_END_FINALLY(51)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_JUMP_TBL(0x41, IL_0041)
	}

IL_0041:
	{
		// return null;
		return (Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C *)NULL;
	}

IL_0043:
	{
		// }
		Slot_t06EB77BE7C7BF5CD6D0F27894AF7C89EA92A1A1C * L_9 = V_2;
		return L_9;
	}
}
// System.Void SlotGeneratorService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotGeneratorService__ctor_mC44EC4DF527EF0EE084DE6BA7184DAAAACEEC4EF (SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SlotImageProps::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotImageProps__ctor_mCF575361A4C03AF620C35B3EBC22C7F1356425F9 (SlotImageProps_tA4B51DF16D5362AB9482C6EBCC4CDF9F6F04FAF3 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SlotService::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotService_Awake_m526D3D85476229259B085F906E08B8660BA2C0CB (SlotService_t28D8E273470E6AA1A2BF11B6E8AC75C7B26A6A65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisSlotApiController_tD8CA2BAD7CF4BD0A8E75FCE437805A296FA89856_mA85E99BD1EFE7A5FD6726C8C70C85A9C4E6223EC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// slotApiController = GetComponentInChildren<SlotApiController>();
		SlotApiController_tD8CA2BAD7CF4BD0A8E75FCE437805A296FA89856 * L_0;
		L_0 = Component_GetComponentInChildren_TisSlotApiController_tD8CA2BAD7CF4BD0A8E75FCE437805A296FA89856_mA85E99BD1EFE7A5FD6726C8C70C85A9C4E6223EC(__this, /*hidden argument*/Component_GetComponentInChildren_TisSlotApiController_tD8CA2BAD7CF4BD0A8E75FCE437805A296FA89856_mA85E99BD1EFE7A5FD6726C8C70C85A9C4E6223EC_RuntimeMethod_var);
		__this->set_slotApiController_4(L_0);
		// }
		return;
	}
}
// SlotData SlotService::getSlots(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC * SlotService_getSlots_m180082A06104C303C332EE1A1ACC8F4F3A02460F (SlotService_t28D8E273470E6AA1A2BF11B6E8AC75C7B26A6A65 * __this, String_t* ___json0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisSlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC_m0FCE72AEA33EDFA7E3583E34EE8A3265C2FCEC51_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SlotData slots = JsonUtility.FromJson<SlotData>(json);
		String_t* L_0 = ___json0;
		SlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC * L_1;
		L_1 = JsonUtility_FromJson_TisSlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC_m0FCE72AEA33EDFA7E3583E34EE8A3265C2FCEC51(L_0, /*hidden argument*/JsonUtility_FromJson_TisSlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC_m0FCE72AEA33EDFA7E3583E34EE8A3265C2FCEC51_RuntimeMethod_var);
		// return slots;
		return L_1;
	}
}
// System.Void SlotService::callSlots(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotService_callSlots_m7DF3D03015EF55C94F9393D32A2A0947153B3C1A (SlotService_t28D8E273470E6AA1A2BF11B6E8AC75C7B26A6A65 * __this, int32_t ___placeId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DFA565CA0FCE84DC024B070D2E561D85473C510);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine("getJson", placeId);
		int32_t L_0 = ___placeId0;
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_1);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m81C113F45C28D065C9E31DD6D7566D1BF10CF851(__this, _stringLiteral2DFA565CA0FCE84DC024B070D2E561D85473C510, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator SlotService::getJson(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SlotService_getJson_mEEB3DBD45D18F4F33CC837DAA09563F38EC61D1C (SlotService_t28D8E273470E6AA1A2BF11B6E8AC75C7B26A6A65 * __this, int32_t ___placeId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CgetJsonU3Ed__6_t0DFEF59D02C34098F86C4D96C3AC0B6225C43935_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CgetJsonU3Ed__6_t0DFEF59D02C34098F86C4D96C3AC0B6225C43935 * L_0 = (U3CgetJsonU3Ed__6_t0DFEF59D02C34098F86C4D96C3AC0B6225C43935 *)il2cpp_codegen_object_new(U3CgetJsonU3Ed__6_t0DFEF59D02C34098F86C4D96C3AC0B6225C43935_il2cpp_TypeInfo_var);
		U3CgetJsonU3Ed__6__ctor_m0E71A49F92085D8698AEA217FCD8670171B63D3C(L_0, 0, /*hidden argument*/NULL);
		U3CgetJsonU3Ed__6_t0DFEF59D02C34098F86C4D96C3AC0B6225C43935 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CgetJsonU3Ed__6_t0DFEF59D02C34098F86C4D96C3AC0B6225C43935 * L_2 = L_1;
		int32_t L_3 = ___placeId0;
		NullCheck(L_2);
		L_2->set_placeId_2(L_3);
		return L_2;
	}
}
// System.Void SlotService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotService__ctor_mD1028DE4C9D45C6E87F57D8E19A844B15B29FABE (SlotService_t28D8E273470E6AA1A2BF11B6E8AC75C7B26A6A65 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SupportBackScript::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportBackScript_FixedUpdate_mFB74D3297E0A4D6773FA010DF9E108033D20DBE7 (SupportBackScript_t6862C3E1319BFE5DE5F204F679A1DEFBE7B3D54E * __this, const RuntimeMethod* method)
{
	{
		// if (Application.platform == RuntimePlatform.Android){
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0017;
		}
	}
	{
		// if (Input.GetKey(KeyCode.Escape)){
		bool L_1;
		L_1 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)27), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void SupportBackScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportBackScript__ctor_m2F421F865BD4AD2F7DF75CEF84FFA9DBB211BD10 (SupportBackScript_t6862C3E1319BFE5DE5F204F679A1DEFBE7B3D54E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Test::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Test_Start_m4D6FA0B24EBFD6471F4596A93EC95EC1EB5355D8 (Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Test::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Test_Update_m85FFE4CC559D42AAFA74D4DEAE19415052BB70D0 (Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Test::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Test__ctor_m1C2B5E11A339FD79C0C458FB86723E5F2B74545C (Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AndroidUnityHelper/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m4ECC95557837FF96B422A6A8BF3E30FC643E4ABA (U3CU3Ec__DisplayClass6_0_t1096B10413447D6B1F0AB53451DCCABF6ECAC272 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AndroidUnityHelper/<>c__DisplayClass6_0::<showAndroidToastMessage>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CshowAndroidToastMessageU3Eb__0_m0EE4766D69B9C9CFEDF507860FC71F373A13151B (U3CU3Ec__DisplayClass6_0_t1096B10413447D6B1F0AB53451DCCABF6ECAC272 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84EE66A73B24F0E9CEE249A5A8879E93FCC66EB0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AndroidJavaObject toastObject = toastClass.CallStatic<AndroidJavaObject>("makeText", currentActivity, message, 0);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = __this->get_toastClass_2();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		AndroidUnityHelper_t5B5288A041C4FCD4ED75A6BA2AF14E3D5D870D24 * L_3 = __this->get_U3CU3E4__this_0();
		NullCheck(L_3);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4 = L_3->get_currentActivity_5();
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_2;
		String_t* L_6 = __this->get_message_1();
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_5;
		int32_t L_8 = 0;
		RuntimeObject * L_9 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_9);
		NullCheck(L_0);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_10;
		L_10 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2(L_0, _stringLiteral84EE66A73B24F0E9CEE249A5A8879E93FCC66EB0, L_7, /*hidden argument*/AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var);
		// toastObject.Call("show");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11;
		L_11 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_10);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_10, _stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192, L_11, /*hidden argument*/NULL);
		// }));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GarageAPIController/<getJson>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetJsonU3Ed__1__ctor_mE0836763B48C19F1D5056118A96726EEA9DC99BA (U3CgetJsonU3Ed__1_tCE16584E7ED48D146D9D9439AE1BBEDB72F045CD * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GarageAPIController/<getJson>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetJsonU3Ed__1_System_IDisposable_Dispose_m106D0AE1084F7DB9841BCB178E506252E3179BA2 (U3CgetJsonU3Ed__1_tCE16584E7ED48D146D9D9439AE1BBEDB72F045CD * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GarageAPIController/<getJson>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CgetJsonU3Ed__1_MoveNext_m5104DDA33D27A0CCE0D5BBE142AB3FD2158B6F94 (U3CgetJsonU3Ed__1_tCE16584E7ED48D146D9D9439AE1BBEDB72F045CD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA2B0DD71CE7277FBC9C25FB5D55691853CF2DD3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// int placeId = 1;
		V_1 = 1;
		// string url = "http://64.20.46.227/api/api/Place/" + placeId;
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralEA2B0DD71CE7277FBC9C25FB5D55691853CF2DD3, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		// UnityWebRequest request = UnityWebRequest.Get(url);
		String_t* L_5 = V_2;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_6;
		L_6 = UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A(L_5, /*hidden argument*/NULL);
		__this->set_U3CrequestU3E5__2_2(L_6);
		// yield return request.SendWebRequest();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_7 = __this->get_U3CrequestU3E5__2_2();
		NullCheck(L_7);
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_8;
		L_8 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_7, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_8);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0051:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (request.result == UnityWebRequest.Result.ConnectionError)
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_9 = __this->get_U3CrequestU3E5__2_2();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6(L_9, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_0078;
		}
	}
	{
		// Debug.Log(request.error);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_11 = __this->get_U3CrequestU3E5__2_2();
		NullCheck(L_11);
		String_t* L_12;
		L_12 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_12, /*hidden argument*/NULL);
		// }
		goto IL_009e;
	}

IL_0078:
	{
		// Debug.Log(request.downloadHandler.text);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_13 = __this->get_U3CrequestU3E5__2_2();
		NullCheck(L_13);
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_14;
		L_14 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_15, /*hidden argument*/NULL);
		// byte[] results = request.downloadHandler.data;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_16 = __this->get_U3CrequestU3E5__2_2();
		NullCheck(L_16);
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_17;
		L_17 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18;
		L_18 = DownloadHandler_get_data_m3AE551AAE6BF21279435D386E76EA7084CC037D3(L_17, /*hidden argument*/NULL);
	}

IL_009e:
	{
		// }
		return (bool)0;
	}
}
// System.Object GarageAPIController/<getJson>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CgetJsonU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5DBB57925632C2542A19A40BA3E12B7FC4A2E974 (U3CgetJsonU3Ed__1_tCE16584E7ED48D146D9D9439AE1BBEDB72F045CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GarageAPIController/<getJson>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetJsonU3Ed__1_System_Collections_IEnumerator_Reset_mF0BA47FD3FC3DF00A511433152AE36A1776E5248 (U3CgetJsonU3Ed__1_tCE16584E7ED48D146D9D9439AE1BBEDB72F045CD * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CgetJsonU3Ed__1_System_Collections_IEnumerator_Reset_mF0BA47FD3FC3DF00A511433152AE36A1776E5248_RuntimeMethod_var)));
	}
}
// System.Object GarageAPIController/<getJson>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CgetJsonU3Ed__1_System_Collections_IEnumerator_get_Current_mC8D548118784B6D8C9D1DF4D817AA701F126B253 (U3CgetJsonU3Ed__1_tCE16584E7ED48D146D9D9439AE1BBEDB72F045CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GarageImageService/<getJson>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetJsonU3Ed__3__ctor_m915935A224F06766219BD59A04867476FB7BC44D (U3CgetJsonU3Ed__3_tA90AFA1FB2BD2B1BEE29AD706A2E82349D58DB0B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GarageImageService/<getJson>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetJsonU3Ed__3_System_IDisposable_Dispose_mC7E34523D2DD33C168376D2DA824C58C921EF5B8 (U3CgetJsonU3Ed__3_tA90AFA1FB2BD2B1BEE29AD706A2E82349D58DB0B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GarageImageService/<getJson>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CgetJsonU3Ed__3_MoveNext_m7E8A322D4DCF1ECFB228D4D2125F1923D360839C (U3CgetJsonU3Ed__3_tA90AFA1FB2BD2B1BEE29AD706A2E82349D58DB0B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EE3B7917C004D47E1B969255AA7B9588606CDF4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE74EAFB65D4442347992C90C032387B6B4DEBB7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D * V_1 = NULL;
	String_t* V_2 = NULL;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_3 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// string url = "http://64.20.46.227/api/api/File/" + parkingMap;
		String_t* L_4 = __this->get_parkingMap_2();
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralCE74EAFB65D4442347992C90C032387B6B4DEBB7, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		// WWWForm form = new WWWForm();
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_6 = (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB *)il2cpp_codegen_object_new(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB_il2cpp_TypeInfo_var);
		WWWForm__ctor_mA0987933892AF6FA9E01603B214E86EC52F6B055(L_6, /*hidden argument*/NULL);
		// form.AddField("PlaceId", 1);
		NullCheck(L_6);
		WWWForm_AddField_m20BED9E7C237D585E5D040A5D815D9C7DC16990C(L_6, _stringLiteral0EE3B7917C004D47E1B969255AA7B9588606CDF4, 1, /*hidden argument*/NULL);
		// UnityWebRequest request = UnityWebRequestTexture.GetTexture(url);
		String_t* L_7 = V_2;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_8;
		L_8 = UnityWebRequestTexture_GetTexture_mAC8E7F560F2A5ED2B3DA19211968311DD6D56F37(L_7, /*hidden argument*/NULL);
		__this->set_U3CrequestU3E5__2_4(L_8);
		// yield return request.SendWebRequest();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_9 = __this->get_U3CrequestU3E5__2_4();
		NullCheck(L_9);
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_10;
		L_10 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_9, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_10);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0065:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (request.result == UnityWebRequest.Result.ConnectionError) {
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_11 = __this->get_U3CrequestU3E5__2_4();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6(L_11, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)2))))
		{
			goto IL_008c;
		}
	}
	{
		// Debug.Log(request.error);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_13 = __this->get_U3CrequestU3E5__2_4();
		NullCheck(L_13);
		String_t* L_14;
		L_14 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_14, /*hidden argument*/NULL);
		// }
		goto IL_00dc;
	}

IL_008c:
	{
		// Texture2D t = DownloadHandlerTexture.GetContent(request);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_15 = __this->get_U3CrequestU3E5__2_4();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_16;
		L_16 = DownloadHandlerTexture_GetContent_m7CB6BFDD4B9E159B2BB46684707DFA9668AC21E6(L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		// garageImage.sprite = Sprite.Create(t, new Rect(0, 0, t.width, t.height), new Vector2(0, 0));
		GarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D * L_17 = V_1;
		NullCheck(L_17);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_18 = L_17->get_garageImage_4();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_19 = V_3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_20 = V_3;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_20);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_22 = V_3;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_22);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_24), (0.0f), (0.0f), ((float)((float)L_21)), ((float)((float)L_23)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_25), (0.0f), (0.0f), /*hidden argument*/NULL);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_26;
		L_26 = Sprite_Create_m9817936760193300A6049A788C3446C7ADB49C6B(L_19, L_24, L_25, /*hidden argument*/NULL);
		NullCheck(L_18);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_18, L_26, /*hidden argument*/NULL);
		// ready = true;
		GarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D * L_27 = V_1;
		NullCheck(L_27);
		L_27->set_ready_5((bool)1);
	}

IL_00dc:
	{
		// }
		return (bool)0;
	}
}
// System.Object GarageImageService/<getJson>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CgetJsonU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6385E1C413C0855EE88769BF72C0C419F06967C9 (U3CgetJsonU3Ed__3_tA90AFA1FB2BD2B1BEE29AD706A2E82349D58DB0B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GarageImageService/<getJson>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetJsonU3Ed__3_System_Collections_IEnumerator_Reset_mAC2ACFB8FBF97BA1A10AA28A3747E4045A217A11 (U3CgetJsonU3Ed__3_tA90AFA1FB2BD2B1BEE29AD706A2E82349D58DB0B * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CgetJsonU3Ed__3_System_Collections_IEnumerator_Reset_mAC2ACFB8FBF97BA1A10AA28A3747E4045A217A11_RuntimeMethod_var)));
	}
}
// System.Object GarageImageService/<getJson>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CgetJsonU3Ed__3_System_Collections_IEnumerator_get_Current_m9C3B956AEFC7A033DCF0F654B885239F379D457C (U3CgetJsonU3Ed__3_tA90AFA1FB2BD2B1BEE29AD706A2E82349D58DB0B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GarageService/<getJson>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetJsonU3Ed__10__ctor_m032ACCCFA89AAA080D90ACB6A5ED1AE9D65E49A2 (U3CgetJsonU3Ed__10_tAC3F70D6DB574296B60F1293582E27585AE21C41 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GarageService/<getJson>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetJsonU3Ed__10_System_IDisposable_Dispose_m8C4630BECE1F7CCED591B381D0E1FBBD9A1664DC (U3CgetJsonU3Ed__10_tAC3F70D6DB574296B60F1293582E27585AE21C41 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GarageService/<getJson>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CgetJsonU3Ed__10_MoveNext_mD417E37A713D3087157E7D28C0AA86E8203CC850 (U3CgetJsonU3Ed__10_tAC3F70D6DB574296B60F1293582E27585AE21C41 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA2B0DD71CE7277FBC9C25FB5D55691853CF2DD3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * V_1 = NULL;
	String_t* V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_005a;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// string url = "http://64.20.46.227/api/api/Place/" + placeId;
		int32_t* L_4 = __this->get_address_of_placeId_2();
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralEA2B0DD71CE7277FBC9C25FB5D55691853CF2DD3, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		// UnityWebRequest request = UnityWebRequest.Get(url);
		String_t* L_7 = V_2;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_8;
		L_8 = UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A(L_7, /*hidden argument*/NULL);
		__this->set_U3CrequestU3E5__2_4(L_8);
		// yield return request.SendWebRequest();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_9 = __this->get_U3CrequestU3E5__2_4();
		NullCheck(L_9);
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_10;
		L_10 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_9, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_10);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (request.result == UnityWebRequest.Result.ConnectionError) {
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_11 = __this->get_U3CrequestU3E5__2_4();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6(L_11, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)2))))
		{
			goto IL_0081;
		}
	}
	{
		// Debug.Log(request.error);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_13 = __this->get_U3CrequestU3E5__2_4();
		NullCheck(L_13);
		String_t* L_14;
		L_14 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_14, /*hidden argument*/NULL);
		// }
		goto IL_00bf;
	}

IL_0081:
	{
		// garage = getGarge(request.downloadHandler.text);
		GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * L_15 = V_1;
		GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * L_16 = V_1;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_17 = __this->get_U3CrequestU3E5__2_4();
		NullCheck(L_17);
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_18;
		L_18 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		String_t* L_19;
		L_19 = DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A(L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		GarageData_t6AC8C4C188330A4D476F559113CB4E358F161C9B * L_20;
		L_20 = GarageService_getGarge_m083D5B14E812926196EA89AE6DD2DAF163BE95D6(L_16, L_19, /*hidden argument*/NULL);
		NullCheck(L_15);
		L_15->set_garage_8(L_20);
		// garageImageService.setGarageImage(garage.data.parkingMap);
		GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * L_21 = V_1;
		NullCheck(L_21);
		GarageImageService_t74261EBF5CF9FA457EFE45061BDBF41455599F1D * L_22 = L_21->get_garageImageService_4();
		GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * L_23 = V_1;
		NullCheck(L_23);
		GarageData_t6AC8C4C188330A4D476F559113CB4E358F161C9B * L_24 = L_23->get_garage_8();
		NullCheck(L_24);
		Garage_t06BD12337A8A4FD8E5DA60B4152ED07D4585BE3F * L_25 = L_24->get_data_0();
		NullCheck(L_25);
		String_t* L_26 = L_25->get_parkingMap_2();
		NullCheck(L_22);
		GarageImageService_setGarageImage_m33D5C0A5A578EC40834C46A0B4AF390D9A93D7D9(L_22, L_26, /*hidden argument*/NULL);
		// ready = true;
		GarageService_tB6365385CE65F33D052E987A4A135D8EA4B5D0C2 * L_27 = V_1;
		NullCheck(L_27);
		L_27->set_ready_10((bool)1);
	}

IL_00bf:
	{
		// }
		return (bool)0;
	}
}
// System.Object GarageService/<getJson>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CgetJsonU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEC09D2BD7D3D87FBA43385ABB9907FA9789D1568 (U3CgetJsonU3Ed__10_tAC3F70D6DB574296B60F1293582E27585AE21C41 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GarageService/<getJson>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetJsonU3Ed__10_System_Collections_IEnumerator_Reset_m4F26EF2F7B57C9E4DF2EF2581489D751BB485BD0 (U3CgetJsonU3Ed__10_tAC3F70D6DB574296B60F1293582E27585AE21C41 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CgetJsonU3Ed__10_System_Collections_IEnumerator_Reset_m4F26EF2F7B57C9E4DF2EF2581489D751BB485BD0_RuntimeMethod_var)));
	}
}
// System.Object GarageService/<getJson>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CgetJsonU3Ed__10_System_Collections_IEnumerator_get_Current_m50F6974FED91C1860B75E815D13CB2797C9A0C38 (U3CgetJsonU3Ed__10_tAC3F70D6DB574296B60F1293582E27585AE21C41 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SlotApiController/<getJson>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetJsonU3Ed__1__ctor_mBE239E4F0CCE0A0D1A7E587FE668D04F710790DC (U3CgetJsonU3Ed__1_t69582BBB54FE0FE8110D44195366E8A689264514 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void SlotApiController/<getJson>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetJsonU3Ed__1_System_IDisposable_Dispose_m076910D7C3EDC1DD901DB51A28DBE77209A556CE (U3CgetJsonU3Ed__1_t69582BBB54FE0FE8110D44195366E8A689264514 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean SlotApiController/<getJson>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CgetJsonU3Ed__1_MoveNext_m3E875389226E6CC01F6C0BC709127143507DDB45 (U3CgetJsonU3Ed__1_t69582BBB54FE0FE8110D44195366E8A689264514 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA2B0DD71CE7277FBC9C25FB5D55691853CF2DD3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// int placeId = 1;
		V_1 = 1;
		// string url = "http://64.20.46.227/api/api/Place/" + placeId;
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralEA2B0DD71CE7277FBC9C25FB5D55691853CF2DD3, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		// UnityWebRequest request = UnityWebRequest.Get(url);
		String_t* L_5 = V_2;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_6;
		L_6 = UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A(L_5, /*hidden argument*/NULL);
		__this->set_U3CrequestU3E5__2_2(L_6);
		// yield return request.SendWebRequest();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_7 = __this->get_U3CrequestU3E5__2_2();
		NullCheck(L_7);
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_8;
		L_8 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_7, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_8);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0051:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (request.result == UnityWebRequest.Result.ConnectionError)
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_9 = __this->get_U3CrequestU3E5__2_2();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6(L_9, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_0078;
		}
	}
	{
		// Debug.Log(request.error);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_11 = __this->get_U3CrequestU3E5__2_2();
		NullCheck(L_11);
		String_t* L_12;
		L_12 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_12, /*hidden argument*/NULL);
		// }
		goto IL_009e;
	}

IL_0078:
	{
		// Debug.Log(request.downloadHandler.text);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_13 = __this->get_U3CrequestU3E5__2_2();
		NullCheck(L_13);
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_14;
		L_14 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_15, /*hidden argument*/NULL);
		// byte[] results = request.downloadHandler.data;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_16 = __this->get_U3CrequestU3E5__2_2();
		NullCheck(L_16);
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_17;
		L_17 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18;
		L_18 = DownloadHandler_get_data_m3AE551AAE6BF21279435D386E76EA7084CC037D3(L_17, /*hidden argument*/NULL);
	}

IL_009e:
	{
		// }
		return (bool)0;
	}
}
// System.Object SlotApiController/<getJson>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CgetJsonU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m684A4E82320CF64522873D016F174F7C49EE4C19 (U3CgetJsonU3Ed__1_t69582BBB54FE0FE8110D44195366E8A689264514 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SlotApiController/<getJson>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetJsonU3Ed__1_System_Collections_IEnumerator_Reset_mE55187E4FFAFE46FE237B86E3DF0D90AFE2EC9D6 (U3CgetJsonU3Ed__1_t69582BBB54FE0FE8110D44195366E8A689264514 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CgetJsonU3Ed__1_System_Collections_IEnumerator_Reset_mE55187E4FFAFE46FE237B86E3DF0D90AFE2EC9D6_RuntimeMethod_var)));
	}
}
// System.Object SlotApiController/<getJson>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CgetJsonU3Ed__1_System_Collections_IEnumerator_get_Current_m9FCD6EB8C16938E97D55DE16D0003422FE2FFED1 (U3CgetJsonU3Ed__1_t69582BBB54FE0FE8110D44195366E8A689264514 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SlotGeneratorService/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_m1B433C6A8C17DFAEE6ECD514307E7F9BE58C4582 (U3CU3Ec__DisplayClass18_0_tE64AC2344E78812B4D2D693C8918CB2BB01D13EE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SlotGeneratorService/<>c__DisplayClass18_0::<addSlotImageProps>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0_U3CaddSlotImagePropsU3Eb__0_mA9F739BDA8787E717A4CA9AFD25788C1FA68A306 (U3CU3Ec__DisplayClass18_0_tE64AC2344E78812B4D2D693C8918CB2BB01D13EE * __this, const RuntimeMethod* method)
{
	{
		// imageButton.onClick.AddListener(() => imageClicked(imageButton));
		SlotGeneratorService_t2801B184FB827C0D3D227C5CCB1CE2DC457B7C9B * L_0 = __this->get_U3CU3E4__this_0();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_1 = __this->get_imageButton_1();
		NullCheck(L_0);
		SlotGeneratorService_imageClicked_mC136EC63CD2931ED5C705E8A32D3DF331D4E1164(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SlotService/<getJson>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetJsonU3Ed__6__ctor_m0E71A49F92085D8698AEA217FCD8670171B63D3C (U3CgetJsonU3Ed__6_t0DFEF59D02C34098F86C4D96C3AC0B6225C43935 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void SlotService/<getJson>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetJsonU3Ed__6_System_IDisposable_Dispose_mF947E80BD2D51C22E73D5C2E0992C166C3ABADE5 (U3CgetJsonU3Ed__6_t0DFEF59D02C34098F86C4D96C3AC0B6225C43935 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean SlotService/<getJson>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CgetJsonU3Ed__6_MoveNext_m7E0F58FE38A65E22B1CD8A01336D22159D326EC8 (U3CgetJsonU3Ed__6_t0DFEF59D02C34098F86C4D96C3AC0B6225C43935 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7D4BD313D116E115CE883A0D209DEF099036A14);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SlotService_t28D8E273470E6AA1A2BF11B6E8AC75C7B26A6A65 * V_1 = NULL;
	String_t* V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SlotService_t28D8E273470E6AA1A2BF11B6E8AC75C7B26A6A65 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_005a;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// string url = "http://64.20.46.227/api/api/ParkingLot/getavailablelots?PlaceId=" + placeId;
		int32_t* L_4 = __this->get_address_of_placeId_2();
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralE7D4BD313D116E115CE883A0D209DEF099036A14, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		// UnityWebRequest request = UnityWebRequest.Get(url);
		String_t* L_7 = V_2;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_8;
		L_8 = UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A(L_7, /*hidden argument*/NULL);
		__this->set_U3CrequestU3E5__2_4(L_8);
		// yield return request.SendWebRequest();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_9 = __this->get_U3CrequestU3E5__2_4();
		NullCheck(L_9);
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_10;
		L_10 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_9, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_10);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (request.result == UnityWebRequest.Result.ConnectionError) {
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_11 = __this->get_U3CrequestU3E5__2_4();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6(L_11, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)2))))
		{
			goto IL_0081;
		}
	}
	{
		// Debug.Log(request.error);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_13 = __this->get_U3CrequestU3E5__2_4();
		NullCheck(L_13);
		String_t* L_14;
		L_14 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_14, /*hidden argument*/NULL);
		// }
		goto IL_00a4;
	}

IL_0081:
	{
		// slotData = getSlots(request.downloadHandler.text);
		SlotService_t28D8E273470E6AA1A2BF11B6E8AC75C7B26A6A65 * L_15 = V_1;
		SlotService_t28D8E273470E6AA1A2BF11B6E8AC75C7B26A6A65 * L_16 = V_1;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_17 = __this->get_U3CrequestU3E5__2_4();
		NullCheck(L_17);
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_18;
		L_18 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		String_t* L_19;
		L_19 = DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A(L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		SlotData_t9EA6D6A2364644114ADE22F6230F8DC2CD16B6DC * L_20;
		L_20 = SlotService_getSlots_m180082A06104C303C332EE1A1ACC8F4F3A02460F(L_16, L_19, /*hidden argument*/NULL);
		NullCheck(L_15);
		L_15->set_slotData_5(L_20);
		// ready = true;
		SlotService_t28D8E273470E6AA1A2BF11B6E8AC75C7B26A6A65 * L_21 = V_1;
		NullCheck(L_21);
		L_21->set_ready_6((bool)1);
	}

IL_00a4:
	{
		// }
		return (bool)0;
	}
}
// System.Object SlotService/<getJson>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CgetJsonU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m03F98A82C0F675C1068CD0DB5475046C2A9889A8 (U3CgetJsonU3Ed__6_t0DFEF59D02C34098F86C4D96C3AC0B6225C43935 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SlotService/<getJson>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgetJsonU3Ed__6_System_Collections_IEnumerator_Reset_mAAA4E3EE7C752D2C452725D0DD1E7B0C46A2148C (U3CgetJsonU3Ed__6_t0DFEF59D02C34098F86C4D96C3AC0B6225C43935 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CgetJsonU3Ed__6_System_Collections_IEnumerator_Reset_mAAA4E3EE7C752D2C452725D0DD1E7B0C46A2148C_RuntimeMethod_var)));
	}
}
// System.Object SlotService/<getJson>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CgetJsonU3Ed__6_System_Collections_IEnumerator_get_Current_m8ECCF8E7F0D45E11AA508851CFE32AD5FAF4BC81 (U3CgetJsonU3Ed__6_t0DFEF59D02C34098F86C4D96C3AC0B6225C43935 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * Image_get_sprite_mA6FB016B4E3FE5EFFAE4B3AEE2D2DF89C61E0AF3_inline (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Sprite; }
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_0 = __this->get_m_Sprite_37();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		__this->set_z_4((0.0f));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
