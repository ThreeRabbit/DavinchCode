#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<UniRx.Unit>
struct Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A;
// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
// System.Action`2<System.String,System.Object>
struct Action_2_t8A5691BDCBB15BBFE228BF21B998EF643FADA7E7;
// System.Action`2<d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw,System.Object>
struct Action_2_tFA8292EEB847839DD04E49505401FA54540D6DE6;
// System.Action`3<d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw,System.Object,System.Object>
struct Action_3_t8542420B0F1565B0770BBE4588001A8EBA78571E;
// System.Action`3<d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw,System.String,System.Object>
struct Action_3_t7D62D811E7B031F7E64AA2C5A31C5D3197CD4D26;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>>
struct CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>
struct ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32>
struct Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable>
struct Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD;
// System.Collections.Generic.Dictionary`2<System.String,v2xSH3XxGEfRxiwFa25.PLroM9XOaZl2MQk5Gig`2<H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B,bnNVwosyTuOtY1CS0cu.FTeFTOsqW6GUkDHy3Bq>>
struct Dictionary_2_t80DF57E305E438274C6E91AF35E1A9839CF49275;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,ClY49r2jGyRQaUB45Qk.wKmSPO23u9HBe4uNf5L>
struct Dictionary_2_t46E189FD1C055D0FB6AC3822A2AD8DC5A1AFFBE6;
// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
// System.EventHandler`1<QK0XA4gogXUi0PkFu9a.DXB1SWgsZXXFv4aaZKN>
struct EventHandler_1_t5B622BFC2E9DFB251411637E000B6AB4A195167A;
// System.EventHandler`1<Quuohwda6q59YgHBEaM.FOJuocdbMn2bOXwt4t5>
struct EventHandler_1_tFE2C8E8768488CC46987292B004888E76F20BA8E;
// System.EventHandler`1<IZD7qvIGKTbxt3J2euGR.I9MRR8IG6QnJKpqu22j3>
struct EventHandler_1_t23B335D4A5F9A0384AD712B68F35BE75AB92BCC6;
// System.EventHandler`1<zpW9ATKsSc8lDlN5teb.j6iU3nK1qWKAyRC6xgQ>
struct EventHandler_1_tAF8382A1CD5D4BD640CD098D7A5A0EAEFDE05E59;
// System.Linq.Expressions.Expression`1<System.Object>
struct Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ>>
struct Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<System.Object,System.String>
struct Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B;
// C9nH13a5oV83F8lBXvp.GWjGQNadWhjklk3KWL5`1<System.Boolean>
struct GWjGQNadWhjklk3KWL5_1_tAC30F52F4A47116A3A023E954C6F83D2E71F0217;
// C9nH13a5oV83F8lBXvp.GWjGQNadWhjklk3KWL5`1<System.Object>
struct GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021;
// mrsER6IY5FwIyj0NthCP.GaELVDIY2dLa2BLZTh0W`2<System.Object,System.Object>
struct GaELVDIY2dLa2BLZTh0W_2_tA8D55027EBADED6B8B585C72F06C2202B8063B3D;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t60509816D8966320E2A9660FC756B6C440ADFC50;
// System.Collections.Generic.IEnumerable`1<System.Boolean>
struct IEnumerable_1_tFCB3E41202F3CC65C7DE9B40C22F196A081E84D6;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>
struct IEnumerable_1_t49C2F44B68A54E1D7F267F9CC6AEAE8497D42901;
// System.Collections.Generic.IEnumerable`1<bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ>
struct IEnumerable_1_t20A371B946A1486B71573709BAE913719952C193;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
// System.Collections.Generic.IEnumerator`1<bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ>
struct IEnumerator_1_t7F39E60BCEFC20731F9F61953CE61A392016B2F3;
// System.Collections.Generic.IEqualityComparer`1<System.Boolean>
struct IEqualityComparer_1_t446D6AA97B44CB67BBAD9B016F7E4A238DF7763F;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.Linq.Expressions.ParameterExpression>
struct IEqualityComparer_1_t3950A1C72D0704C9A5D08F255CB6BE1525EDC4A9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Object>
struct IReadOnlyDictionary_2_t38BAE2A79A8C85F8795E24CF5DB231156D5A3B66;
// xQ909iXBZoEHtZsJ4Sk.IXE6IhXuObb58oAPbf4`1<bnNVwosyTuOtY1CS0cu.FTeFTOsqW6GUkDHy3Bq>
struct IXE6IhXuObb58oAPbf4_1_t777FB6F26FFD2D741A448AFE8C058B90B56DF128;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,ClY49r2jGyRQaUB45Qk.wKmSPO23u9HBe4uNf5L>
struct KeyCollection_tBE349DC2DF59895240DD3B0ACF1A0163B40E3169;
// System.Lazy`1<DYPSOUyTIlXrPcRjZ3r.YutsJ9yIcISgtVKmUQD>
struct Lazy_1_tBE86193F28FC1B12E65DCC1E443450C75CDD53EC;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F;
// System.Collections.Generic.List`1<rqo3Pl41rxZ7iRaTocs.YkQvuv4hCawQfAelLNK>
struct List_1_t946F3E5BDDD402C5D1F0CB36ECB13E66556BCA4F;
// hdi3RVbCUxS0q8IKdRD.MTr8f8bkTI3U1qepF9e`2<System.Int32,System.Object>
struct MTr8f8bkTI3U1qepF9e_2_t2C48CDCC3D6CC8E57E078BD9F4078C687C72779D;
// hdi3RVbCUxS0q8IKdRD.MTr8f8bkTI3U1qepF9e`2<System.Object,System.Object>
struct MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4;
// rBMcyk7i1qpBQWPQMMV.RNHGah7mjCbyEIni6WI`2<System.Object,System.Object>
struct RNHGah7mjCbyEIni6WI_2_tA238324D933B0DB6F6F694835ED2AD280CC0775A;
// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,ClY49r2jGyRQaUB45Qk.wKmSPO23u9HBe4uNf5L>
struct ValueCollection_tACD1D4793AB5161A6E893A002AE0A37B515BAE5E;
// ymgEqJIU5emOkIEDa8WI.dlBNo8IUdTB9OvDiafIL`1<System.Object>
struct dlBNo8IUdTB9OvDiafIL_1_tF79647556CF0263F058A729DDBA8AB11424FB498;
// ymgEqJIU5emOkIEDa8WI.dlBNo8IUdTB9OvDiafIL`1<bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ>
struct dlBNo8IUdTB9OvDiafIL_1_tB887307230795616A3371B1EC3646D82B720BE34;
// Lo52n0edVSKfQ2yKbtc.ogFvwvegPSghqL3j2Xj`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct ogFvwvegPSghqL3j2Xj_1_tC56A378FB8CA4F841B6514C8394A55604632FF9D;
// Lo52n0edVSKfQ2yKbtc.ogFvwvegPSghqL3j2Xj`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ogFvwvegPSghqL3j2Xj_1_t15B9D2B77A0788579AEF7DDA6895F841C1EE397D;
// Lo52n0edVSKfQ2yKbtc.ogFvwvegPSghqL3j2Xj`1<System.Boolean>
struct ogFvwvegPSghqL3j2Xj_1_tE3721860A6E5CD6BA8EF011E88A94AB2FD986DD0;
// Lo52n0edVSKfQ2yKbtc.ogFvwvegPSghqL3j2Xj`1<System.Object>
struct ogFvwvegPSghqL3j2Xj_1_tF52AE0D419E6A31554975FC2195ABC05FE58A66A;
// Qpj9uNIxDwUmbWuZDonk.uPhTUNIx8yIIYoDLYVH9`2<System.Type,System.Func`2<System.Object[],LhkWPlIkjZQUeqC2AJ5V.c3S7i8Ik31X2yoXQ0Ca5>>
struct uPhTUNIx8yIIYoDLYVH9_2_tDA30FD01086BB9BF3E756129372ADFEDA033FEAE;
// Qpj9uNIxDwUmbWuZDonk.uPhTUNIx8yIIYoDLYVH9`2<System.Type,System.Type>
struct uPhTUNIx8yIIYoDLYVH9_2_t00B32D9FD50FE20E71B5CB85D418B4669F6FC392;
// System.Collections.Generic.Dictionary`2/Entry<System.String,ClY49r2jGyRQaUB45Qk.wKmSPO23u9HBe4uNf5L>[]
struct EntryU5BU5D_tB066F2ADFAB78723F5E4F2264263F1CE8D5D449C;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>[]
struct HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4;
// System.Collections.Generic.HashSet`1/Slot<System.Linq.Expressions.ParameterExpression>[]
struct SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// jhsLfBIbhctU2TSTZKOY.muZQ35IbRCS6Lb3wDZ30[]
struct muZQ35IbRCS6Lb3wDZ30U5BU5D_tF521F490A0B1A51BC1A67C0A8C1BA8886336CDF3;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// w15wJtgtVDYKmXw30Ed.BbV5qOgBPMdSAS9FqNL
struct BbV5qOgBPMdSAS9FqNL_t108704F5736B3263387E5297DE64C488A40064C6;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// s67jBVIwEmI4OlyEHixM.CbLf9TIwPUSudLDcsxjt
struct CbLf9TIwPUSudLDcsxjt_t747BCAE98D9B3F65681D1442AFB6C77E94245BDA;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Exception
struct Exception_t;
// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// mfoi9tRW2qgdA7BewrG.GQTC9vRNE1QZHH1JhRH
struct GQTC9vRNE1QZHH1JhRH_t9CDC166C71F590A1B5048B6633E76FFB6EF428A9;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UniRx.ICancelable
struct ICancelable_tB1DEE5D3AD44B45D562C30F81A032B6CDF33DCF4;
// System.Collections.IComparer
struct IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerable
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Collections.IList
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
// System.Linq.Expressions.Interpreter.InterpretedFrame
struct InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D;
// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E;
// oksDuFIbspCdm9QQmdiA.MCOuyCIb1l1L0qFaD25v
struct MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_tB959BF0F4EF3F8611E5891A7011DD99F9FD69E2A;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Collections.SortedList
struct SortedList_t847331629BA06B518F1B5203BD22B59746EDDBF3;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B
struct TeYmbLhOx0lsZD78M9B_tF5B768209158D17137CD5677636A3D00C5FBEB45;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Threading.Timer
struct Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00;
// System.Type
struct Type_t;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// GOqPn2ILlW8BVZlX8Ufw.VKPb4hILTjuhWGr92lWR
struct VKPb4hILTjuhWGr92lWR_tADE763BDA1FB32B56788B3990D6DDA84E86C7A60;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
// DYPSOUyTIlXrPcRjZ3r.YutsJ9yIcISgtVKmUQD
struct YutsJ9yIcISgtVKmUQD_t703540E322FF7304C66DF1ACBAB1630065FEEC80;
// bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ
struct a2gGKII7j9Qd3ZepQemJ_t621214B9B0AE4E89A9DA12DA3D6D3051F579C037;
// x7qnybKXUR6lX8ex2Ur.cQ3Yk5KfrqRAL0VdNqG
struct cQ3Yk5KfrqRAL0VdNqG_tCD5E3A7C67A3E69DB043904DF3E5FD72353850E6;
// iTMoCfIkHiQLwZggjfNW.f63hrcIk04YdpFItJDMN
struct f63hrcIk04YdpFItJDMN_t093B43ADD89A16B7F2A08F2EC2D201FF19C87C3B;
// nOPReRItMQ4oZPYRdFB0.fHRQtFItxmArIpAaMF5p
struct fHRQtFItxmArIpAaMF5p_t2FDD2E48A14E58019725A8EA9DD221158927C5B9;
// V5NdV2IYxrYnyLRsSQw0.fJYLGxIYYISuLexSUp31
struct fJYLGxIYYISuLexSUp31_tDDED012884E24BD3E99AB370F7B613BC83DAB3FB;
// NinBA76aVfFeRxVXqEy.fQyjAn6bkwAeUnTbmaC
struct fQyjAn6bkwAeUnTbmaC_tD4D8BB045BEBBD76ACA7FAEDB03E3D119366229D;
// d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw
struct ielsk72D5xwPeAW05dw_t47546E0125EF22A068A9F0F55F1F8C0455D54992;
// gjATf0IGDy5tbGaAPVBH.kHmSfxIGiKCTCGYDcEMb
struct kHmSfxIGiKCTCGYDcEMb_tA8110BF9640E46A03B2F040D674428DEDC09165C;
// kceflkIHQHg3Cu4MG0Jf.pZxm8bIHdXh6JBR7jPRt
struct pZxm8bIHdXh6JBR7jPRt_t9553CDE3ECE89569BA1BF033F76DDC9C4D85DA89;
// kp7gi2IUhqNo3ONOLpC8.qyIidIIURCnhuMQQCyxD
struct qyIidIIURCnhuMQQCyxD_t8E6D17C842863573E56B9080FA22E33A8BA08DD9;
// D9RH4pI90JsJ9xVrDoJY.sY7ct6I9jmQ9O820lm61
struct sY7ct6I9jmQ9O820lm61_tB7CFCC51FE0E913BF72FD654F91FA58CEFBC586B;
// t6aCVRIkpp2SgR9piVLE.upoLbGIkG3EWbjXCVTnk
struct upoLbGIkG3EWbjXCVTnk_t733914D925D667921802DE07AFE63A3663751D38;
// flQtppIxT8ADGVArShbU.vfT5NaIxIOin1Q1v8Ubj
struct vfT5NaIxIOin1Q1v8Ubj_tF9AE41632CAB9070CBCAD1D52C1E4F85BD538250;
// ClY49r2jGyRQaUB45Qk.wKmSPO23u9HBe4uNf5L
struct wKmSPO23u9HBe4uNf5L_t832475E06A0F7749610DB870AF9E99F448F7FCA0;
// t3SaX0IG7o0cjrjhWTLu.wwSKWiIGeGnmmBQ83LgT
struct wwSKWiIGeGnmmBQ83LgT_t9F5EFBFAC6D1C13D49C68D49CEC54A4B2AEE88C4;
// qLffkh5kZZYN6fiZphR.y2ddBW5lTq25O1EM7M9
struct y2ddBW5lTq25O1EM7M9_t9744BCC3DFD79340E7F5EB5C50C52C1C8C507DDD;
// ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP
struct yDPgyIIYvL6HKuASy0XP_t72A374C34ED1E894BED1E856D81548FDC05B902E;
// TphoSbIWZOI0lSnbIwkG.yK2K2oIWOkTJLgXEXCPm
struct yK2K2oIWOkTJLgXEXCPm_t6D940F280684DF7CBEFF7E2BC151E7A9A0440E4A;
// Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq
struct yu6shyISV0cgPHoH4Fuq_t0A16977B178E0CC5C1EE91476FD242F00AC3E0B3;
// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor
struct QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F;
// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536;
// UniRx.Scheduler/EndOfFrameMainThreadScheduler
struct EndOfFrameMainThreadScheduler_tDEB00F3663F7A0E73714B59763FB10C194429663;
// UniRx.Scheduler/FixedUpdateMainThreadScheduler
struct FixedUpdateMainThreadScheduler_tCA7241F8BC3311A70DD07CFD2748CDFC2DEA11E3;
// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler
struct IgnoreTimeScaleMainThreadScheduler_t15A43252BE809D3C28FB0C3D1BE5A3D8B4E9614F;
// UniRx.Scheduler/MainThreadScheduler
struct MainThreadScheduler_t79381B64713DB60DDBD10B86155CEBD9AFF8C586;
// UniRx.Scheduler/ThreadPoolScheduler
struct ThreadPoolScheduler_tD70CA88940F9339327969057F716FA31BE56F840;
// System.Collections.SortedList/KeyList
struct KeyList_t2BE9B79B2857B4C783AC7EF097D1D1EEFC000CD8;
// System.Collections.SortedList/ValueList
struct ValueList_t9DF653525F9B5641C9B6143901F62A7BF447D331;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BlpDMbujQqgSL8Ynfso_tD4C1F11C9EF1B25C16253491FD2E68D909DFFD75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICancelable_tB1DEE5D3AD44B45D562C30F81A032B6CDF33DCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemberInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NK4HE7gXSdJsW4cE5Py_tAB00810ABFC49DCBA40A8F9A4A0C3F34A3A83198_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pxdx4NIjoIfmCFcUEecO_tEF8C580AFE2B34F24CCD7C8F26C54D67A7F716CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Singleton_1_tEEDB1C578D7C6F8A0F23D53671EA64F56500D4D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SortedList_t847331629BA06B518F1B5203BD22B59746EDDBF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TLct8kIcqpBbgiZ2HelB_t4BAAACCA5CFAABC7F0F8178AA069273A33C0E2CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* a2gGKII7j9Qd3ZepQemJ_t621214B9B0AE4E89A9DA12DA3D6D3051F579C037_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ielsk72D5xwPeAW05dw_t47546E0125EF22A068A9F0F55F1F8C0455D54992_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* pRIki9IyStHqBwnoedAT_tCEC0F8D00757FCA4ED786D195FDEE44E77519FBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0E65690939804B15F12B14D2152EA638DCB3BF40;
IL2CPP_EXTERN_C String_t* _stringLiteral24B384F1E033EC12CCBD648496627CAE231B092D;
IL2CPP_EXTERN_C String_t* _stringLiteral2F9BACDA740D58784E6ACAE19F0F0BC32F753A58;
IL2CPP_EXTERN_C String_t* _stringLiteral34E31A874682C1BAC752102C9E9839AE896533E9;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral5CC003E6E7B74677D42310BF0DC8F41625BA8B1F;
IL2CPP_EXTERN_C String_t* _stringLiteral663651D94667E59612E8078B3B8A1CA07ABFC6D6;
IL2CPP_EXTERN_C String_t* _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5;
IL2CPP_EXTERN_C String_t* _stringLiteral82EA3C9AFC08F0CECEBC1B257606B3106346FCAF;
IL2CPP_EXTERN_C String_t* _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E;
IL2CPP_EXTERN_C String_t* _stringLiteralA7FBBFFB8EE0FB972E2B09691037C46596893A5A;
IL2CPP_EXTERN_C String_t* _stringLiteralB2EAC54936C480056DBBB5B97FD1CFD1C79B1990;
IL2CPP_EXTERN_C String_t* _stringLiteralBC4C398F46D1471B5DD572F0761F88E95EC4A3CC;
IL2CPP_EXTERN_C String_t* _stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8;
IL2CPP_EXTERN_C String_t* _stringLiteralC79AE10DF38CEBD5131D205BA33F16E8B87ED170;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C String_t* _stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8;
IL2CPP_EXTERN_C String_t* _stringLiteralFBC35FFDE20578F35F7D80AA15EBCB02F42463C4;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m0E72266123E55C107E6F77DD347B35B840808475_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_GetInstance_mD4246965321EE63E2D488139AA4EAF3D59B73FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fJYLGxIYYISuLexSUp31_EAwIYMLetBS_TisRuntimeObject_mEBDF8A4020A114B6897E3E1A27A27A5FE9E2A206_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fJYLGxIYYISuLexSUp31_IIDIY37DNW5_TisRuntimeObject_mD6686628D8E8818115BACFB870926CC85B60C374_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fduRGHI0VRd5tjqPwiyf_cVZIHSedywo_TisRuntimeObject_mD00D491FE4C9A6D95DD1F9B835D9807BAA18A466_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ielsk72D5xwPeAW05dw_mk42zbbp7Q_TisRuntimeObject_mEA29EBCB49D244AE62D48524E2D262C8717B78BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* mVRvu6uocIktlmNOt0E_JAjLAC1t45_TisRuntimeObject_m8AD0157557E0A5935778092DAEFA0DB37710D0EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* mVRvu6uocIktlmNOt0E_UyquXBw0Ph_TisRuntimeObject_mD920299615A728CE0ED18AC717D7A0FFAC008771_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* p4Fj6KbzPsNH9Pl8Y5p_KZ1aY9XhXj_TisRuntimeObject_TisRuntimeObject_m599796638BAD8DBCF5A1A27EA56291AE1D4F738C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* p4Fj6KbzPsNH9Pl8Y5p_LJcaURV6Pv_TisRuntimeObject_TisRuntimeObject_m5D7C54DBC15F05815A261C7FCB93CB25E7019D64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* p4Fj6KbzPsNH9Pl8Y5p_T9paIp1CuF_TisRuntimeObject_TisRuntimeObject_m71B08DE526B4F98847AD7FC4681883AA50FAB839_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* p4Fj6KbzPsNH9Pl8Y5p_VUeap0yUJs_TisRuntimeObject_TisRuntimeObject_m0DEB4A2E2172D9C23325DF16FC84E309A21526CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* p4Fj6KbzPsNH9Pl8Y5p_zT3a8966d7_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mFEAB90D0771B0092682204C06F2522CBE7171074_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* t5Zn1EmretqgRed7mnZ_iOS8AFXXmC_TisRuntimeObject_m5F3DD8AC8DFABD038D0356AAA4BFA8224BE7F5CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* t5Zn1EmretqgRed7mnZ_siY8TlNnCT_TisRuntimeObject_m2C9D52D90AB131331241BFF4A21070294F40FB72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* x5rwaxIU1lgC3gy0hDDk_Value_TisRuntimeObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m773E72F7DAFED17A36F838CED46E869469217F34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* x5rwaxIU1lgC3gy0hDDk_Value_TisRuntimeObject_TisRuntimeObject_m80D8C9F26EDC3C4469843F3F16250E0F34D58C2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* x5rwaxIU1lgC3gy0hDDk_Value_TisRuntimeObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m582948C38DB3C0ACF5813EDAC4D4B36E491A3C94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* x5rwaxIU1lgC3gy0hDDk_gZyIwHaWVWD_TisRuntimeObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m895060EEA8B8E54049F7843DB0F79B835ECDB982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* x5rwaxIU1lgC3gy0hDDk_gZyIwHaWVWD_TisRuntimeObject_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_mB4A4235C1F31A3195D60F0A02E8DCC0392DEB19A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* x5rwaxIU1lgC3gy0hDDk_gZyIwHaWVWD_TisRuntimeObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m689455B8F846443C21A6040D792BC37C2CCDD9EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* x5rwaxIU1lgC3gy0hDDk_gZyIwHaWVWD_TisRuntimeObject_TisRuntimeObject_m4FC97F2EFEDCA65B6EB02CE69C4CA045F6EF1B91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* x5rwaxIU1lgC3gy0hDDk_gZyIwHaWVWD_TisRuntimeObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m9F2BEE7A27D38F0BF0699345116EEA9679776A83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SortedList_t847331629BA06B518F1B5203BD22B59746EDDBF3_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<>c__0`1<System.Object>
struct U3CU3Ec__0_1_tE0BE74224AF91240FB34F7A8C0A4C8A6B6A50652  : public RuntimeObject
{
};

// KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<>c__13`2<System.Object,System.Object>
struct U3CU3Ec__13_2_t4C8DFD9B557916EB78BD4095054C3D7153CC4921  : public RuntimeObject
{
};

// KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<>c__1`1<System.Object>
struct U3CU3Ec__1_1_t6BECFF0052993C618B678CEA3B331B69453C8C5A  : public RuntimeObject
{
};

// KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<>c__2`1<System.Object>
struct U3CU3Ec__2_1_tD9CC8E8B68712880473A649070B4C5E420FE7B7E  : public RuntimeObject
{
};

// KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<>c__3`1<System.Object>
struct U3CU3Ec__3_1_t4086104763D72563D5B9F9F0A06841A18FDF5286  : public RuntimeObject
{
};

// QmbtPuI0fF9IhiF5bYfS.fduRGHI0VRd5tjqPwiyf/<>c__DisplayClass15_0`1<System.Object>
struct U3CU3Ec__DisplayClass15_0_1_tD3D27B917DD8CF6D0724B16958E15992FBA9237B  : public RuntimeObject
{
	// System.Func`2<TSource,System.String> QmbtPuI0fF9IhiF5bYfS.fduRGHI0VRd5tjqPwiyf/<>c__DisplayClass15_0`1::valueSelector
	Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* ___valueSelector_0;
	// System.String QmbtPuI0fF9IhiF5bYfS.fduRGHI0VRd5tjqPwiyf/<>c__DisplayClass15_0`1::testValue
	String_t* ___testValue_1;
};

// qLHb9iaAGIg460N4uku.p4Fj6KbzPsNH9Pl8Y5p/<>c__DisplayClass15_0`3<System.Object,System.Object,System.Object>
struct U3CU3Ec__DisplayClass15_0_3_t14204BAAC998349F0BDE6F5A8F4176BD1CC294AE  : public RuntimeObject
{
	// System.Func`2<TSource,TKey> qLHb9iaAGIg460N4uku.p4Fj6KbzPsNH9Pl8Y5p/<>c__DisplayClass15_0`3::keySelector
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___keySelector_0;
	// System.Func`2<TSource,TValue> qLHb9iaAGIg460N4uku.p4Fj6KbzPsNH9Pl8Y5p/<>c__DisplayClass15_0`3::elementSelector
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___elementSelector_1;
};

// ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP/<>c__DisplayClass4_0`1<System.Object>
struct U3CU3Ec__DisplayClass4_0_1_t8F3DE6B995C68EB07455C221679A98EB3C0F21AE  : public RuntimeObject
{
	// System.Reflection.ConstructorInfo ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP/<>c__DisplayClass4_0`1::c
	ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___c_0;
	// System.Reflection.MethodBase ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP/<>c__DisplayClass4_0`1::method
	MethodBase_t* ___method_1;
};

// ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP/<>c__DisplayClass5_0`1<System.Object>
struct U3CU3Ec__DisplayClass5_0_1_t3695A9BA48A16412054233B1800FBF4479BBEF0A  : public RuntimeObject
{
	// System.Type ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP/<>c__DisplayClass5_0`1::type
	Type_t* ___type_0;
	// System.Reflection.ConstructorInfo ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP/<>c__DisplayClass5_0`1::constructorInfo
	ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___constructorInfo_1;
};

// ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP/<>c__DisplayClass6_0`1<System.Object>
struct U3CU3Ec__DisplayClass6_0_1_t02F36D9DBA5D9A3022D2AE5AD37C91D582B63F03  : public RuntimeObject
{
	// System.Reflection.PropertyInfo ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP/<>c__DisplayClass6_0`1::propertyInfo
	PropertyInfo_t* ___propertyInfo_0;
};

// ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP/<>c__DisplayClass7_0`1<System.Object>
struct U3CU3Ec__DisplayClass7_0_1_t9D429628836F7523D385531C1AA54A01F23E786C  : public RuntimeObject
{
	// System.Reflection.FieldInfo ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP/<>c__DisplayClass7_0`1::fieldInfo
	FieldInfo_t* ___fieldInfo_0;
};

// UniRx.Scheduler/ThreadPoolScheduler/<>c__DisplayClass7_0`1<System.Object>
struct U3CU3Ec__DisplayClass7_0_1_t278307FF040551BA151B7E74692991D34921AA60  : public RuntimeObject
{
	// UniRx.ICancelable UniRx.Scheduler/ThreadPoolScheduler/<>c__DisplayClass7_0`1::cancel
	RuntimeObject* ___cancel_0;
	// System.Action`1<T> UniRx.Scheduler/ThreadPoolScheduler/<>c__DisplayClass7_0`1::action
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action_1;
};

// ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP/<>c__DisplayClass8_0`1<System.Object>
struct U3CU3Ec__DisplayClass8_0_1_tE74EC767684D04F3C658190BCFDFFA81996741F7  : public RuntimeObject
{
	// System.Reflection.FieldInfo ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP/<>c__DisplayClass8_0`1::fieldInfo
	FieldInfo_t* ___fieldInfo_0;
};

// ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP/<>c__DisplayClass9_0`1<System.Object>
struct U3CU3Ec__DisplayClass9_0_1_tCF26C045CFAB29A45CD2BB902582FE5D191C1DEE  : public RuntimeObject
{
	// System.Reflection.PropertyInfo ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP/<>c__DisplayClass9_0`1::propertyInfo
	PropertyInfo_t* ___propertyInfo_0;
};

// KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<Convert>d__14`2<System.Object,System.Object>
struct U3CConvertU3Ed__14_2_tD857EEC61425F81FFA8430106880F044E3B31BC9  : public RuntimeObject
{
	// System.Int32 KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<Convert>d__14`2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// U KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<Convert>d__14`2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<Convert>d__14`2::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<T> KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<Convert>d__14`2::source
	RuntimeObject* ___source_3;
	// System.Collections.Generic.IEnumerable`1<T> KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<Convert>d__14`2::<>3__source
	RuntimeObject* ___U3CU3E3__source_4;
	// System.Collections.Generic.IEnumerator`1<T> KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<Convert>d__14`2::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_5;
};

// UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1<System.Object>
struct U3CImmediateActionU3Ed__1_1_tFF93CB0C459F032A5684C57C2EE8C0CB0C863DE1  : public RuntimeObject
{
	// System.Int32 UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UniRx.ICancelable UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::cancellation
	RuntimeObject* ___cancellation_2;
	// System.Action`1<T> UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::action
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action_3;
	// T UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::state
	RuntimeObject* ___state_4;
};

// UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1<System.Object>
struct U3CImmediateActionU3Ed__1_1_t34E37F43941C42289DB79C3661100E07BECD9168  : public RuntimeObject
{
	// System.Int32 UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UniRx.ICancelable UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::cancellation
	RuntimeObject* ___cancellation_2;
	// System.Action`1<T> UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::action
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action_3;
	// T UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::state
	RuntimeObject* ___state_4;
};

// KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<Values>d__11`2<System.Object,System.Object>
struct U3CValuesU3Ed__11_2_tB0A59E22624F279E754B4AC4E12D0A9EF9F7AC61  : public RuntimeObject
{
	// System.Int32 KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<Values>d__11`2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// U KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<Values>d__11`2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<Values>d__11`2::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<T> KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<Values>d__11`2::source
	RuntimeObject* ___source_3;
	// System.Collections.Generic.IEnumerable`1<T> KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<Values>d__11`2::<>3__source
	RuntimeObject* ___U3CU3E3__source_4;
	// System.Object KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<Values>d__11`2::key
	RuntimeObject* ___key_5;
	// System.Object KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<Values>d__11`2::<>3__key
	RuntimeObject* ___U3CU3E3__key_6;
	// bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<Values>d__11`2::<token>5__1
	a2gGKII7j9Qd3ZepQemJ_t621214B9B0AE4E89A9DA12DA3D6D3051F579C037* ___U3CtokenU3E5__1_7;
	// System.Collections.Generic.IEnumerator`1<T> KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<Values>d__11`2::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_8;
	// System.Collections.Generic.IEnumerator`1<bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ> KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<Values>d__11`2::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_9;
};

// System.Collections.Generic.Dictionary`2<System.String,ClY49r2jGyRQaUB45Qk.wKmSPO23u9HBe4uNf5L>
struct Dictionary_2_t46E189FD1C055D0FB6AC3822A2AD8DC5A1AFFBE6  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tB066F2ADFAB78723F5E4F2264263F1CE8D5D449C* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tBE349DC2DF59895240DD3B0ACF1A0163B40E3169* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tACD1D4793AB5161A6E893A002AE0A37B515BAE5E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// nwiPla2GhDLRbKCCsxQ.DigwHm20SpxNDRMXQJi`1<System.Object>
struct DigwHm20SpxNDRMXQJi_1_t368C47A56BB57E6E6A76ED519E9D52F93F8BAB6C  : public RuntimeObject
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2  : public RuntimeObject
{
};

// C9nH13a5oV83F8lBXvp.GWjGQNadWhjklk3KWL5`1<System.Boolean>
struct GWjGQNadWhjklk3KWL5_1_tAC30F52F4A47116A3A023E954C6F83D2E71F0217  : public RuntimeObject
{
	// Lo52n0edVSKfQ2yKbtc.ogFvwvegPSghqL3j2Xj`1<BVch3IaQqPGGUDc1mby> C9nH13a5oV83F8lBXvp.GWjGQNadWhjklk3KWL5`1::WW7mgY507e
	ogFvwvegPSghqL3j2Xj_1_tE3721860A6E5CD6BA8EF011E88A94AB2FD986DD0* ___WW7mgY507e_1;
	// System.Collections.Generic.IEqualityComparer`1<BVch3IaQqPGGUDc1mby> C9nH13a5oV83F8lBXvp.GWjGQNadWhjklk3KWL5`1::o32m2RvMOH
	RuntimeObject* ___o32m2RvMOH_2;
};

// C9nH13a5oV83F8lBXvp.GWjGQNadWhjklk3KWL5`1<System.Object>
struct GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021  : public RuntimeObject
{
	// Lo52n0edVSKfQ2yKbtc.ogFvwvegPSghqL3j2Xj`1<BVch3IaQqPGGUDc1mby> C9nH13a5oV83F8lBXvp.GWjGQNadWhjklk3KWL5`1::WW7mgY507e
	ogFvwvegPSghqL3j2Xj_1_tF52AE0D419E6A31554975FC2195ABC05FE58A66A* ___WW7mgY507e_1;
	// System.Collections.Generic.IEqualityComparer`1<BVch3IaQqPGGUDc1mby> C9nH13a5oV83F8lBXvp.GWjGQNadWhjklk3KWL5`1::o32m2RvMOH
	RuntimeObject* ___o32m2RvMOH_2;
};

// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// hdi3RVbCUxS0q8IKdRD.MTr8f8bkTI3U1qepF9e`2<System.Int32,System.Object>
struct MTr8f8bkTI3U1qepF9e_2_t2C48CDCC3D6CC8E57E078BD9F4078C687C72779D  : public RuntimeObject
{
	// Lo52n0edVSKfQ2yKbtc.ogFvwvegPSghqL3j2Xj`1<System.Collections.Generic.KeyValuePair`2<pbJG5GbcRIAy8IgCwWm,sVTmqDbSpqfeUdiKI3L>> hdi3RVbCUxS0q8IKdRD.MTr8f8bkTI3U1qepF9e`2::iW1ber9gAx
	ogFvwvegPSghqL3j2Xj_1_tC56A378FB8CA4F841B6514C8394A55604632FF9D* ___iW1ber9gAx_1;
	// System.Collections.Generic.IEqualityComparer`1<pbJG5GbcRIAy8IgCwWm> hdi3RVbCUxS0q8IKdRD.MTr8f8bkTI3U1qepF9e`2::rEWb7qui7x
	RuntimeObject* ___rEWb7qui7x_2;
	// System.Collections.Generic.IEqualityComparer`1<sVTmqDbSpqfeUdiKI3L> hdi3RVbCUxS0q8IKdRD.MTr8f8bkTI3U1qepF9e`2::xdNbbOtoVb
	RuntimeObject* ___xdNbbOtoVb_3;
};

// hdi3RVbCUxS0q8IKdRD.MTr8f8bkTI3U1qepF9e`2<System.Object,System.Object>
struct MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4  : public RuntimeObject
{
	// Lo52n0edVSKfQ2yKbtc.ogFvwvegPSghqL3j2Xj`1<System.Collections.Generic.KeyValuePair`2<pbJG5GbcRIAy8IgCwWm,sVTmqDbSpqfeUdiKI3L>> hdi3RVbCUxS0q8IKdRD.MTr8f8bkTI3U1qepF9e`2::iW1ber9gAx
	ogFvwvegPSghqL3j2Xj_1_t15B9D2B77A0788579AEF7DDA6895F841C1EE397D* ___iW1ber9gAx_1;
	// System.Collections.Generic.IEqualityComparer`1<pbJG5GbcRIAy8IgCwWm> hdi3RVbCUxS0q8IKdRD.MTr8f8bkTI3U1qepF9e`2::rEWb7qui7x
	RuntimeObject* ___rEWb7qui7x_2;
	// System.Collections.Generic.IEqualityComparer`1<sVTmqDbSpqfeUdiKI3L> hdi3RVbCUxS0q8IKdRD.MTr8f8bkTI3U1qepF9e`2::xdNbbOtoVb
	RuntimeObject* ___xdNbbOtoVb_3;
};

// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/QueuedAction`1<System.Object>
struct QueuedAction_1_t6C75CFFA426C16AC7A45FE40ED2DD9ABC0A8A790  : public RuntimeObject
{
};

// UniRx.Scheduler/MainThreadScheduler/QueuedAction`1<System.Object>
struct QueuedAction_1_t6A5CAEEB4E725A313A2340A9260501A1FBA36B19  : public RuntimeObject
{
};

// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/QueuedAction`1<UniRx.Unit>
struct QueuedAction_1_t07F49A76F2AFCA834825566E329075B151B16630  : public RuntimeObject
{
};

// UniRx.Scheduler/MainThreadScheduler/QueuedAction`1<UniRx.Unit>
struct QueuedAction_1_tF4DAACFE6CE13BB80D7DF87A5B9C4485D491C289  : public RuntimeObject
{
};

// BackEnd.Util.Singleton`1<DYPSOUyTIlXrPcRjZ3r.YutsJ9yIcISgtVKmUQD>
struct Singleton_1_tEEDB1C578D7C6F8A0F23D53671EA64F56500D4D4  : public RuntimeObject
{
};

// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Tuple`3<UniRx.ICancelable,System.Object,System.Action`1<System.Object>>
struct Tuple_3_t8E8637D2528F51948BF742E89FAF8590E18A8C43  : public RuntimeObject
{
	// T1 System.Tuple`3::m_Item1
	RuntimeObject* ___m_Item1_0;
	// T2 System.Tuple`3::m_Item2
	RuntimeObject* ___m_Item2_1;
	// T3 System.Tuple`3::m_Item3
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___m_Item3_2;
};

// pHRry0u0ZUTuuKhNpiN.BlpDMbujQqgSL8Ynfso
struct BlpDMbujQqgSL8Ynfso_tD4C1F11C9EF1B25C16253491FD2E68D909DFFD75  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785  : public RuntimeObject
{
};

// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_0;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_1;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_2;
};

// System.Collections.SortedList
struct SortedList_t847331629BA06B518F1B5203BD22B59746EDDBF3  : public RuntimeObject
{
	// System.Object[] System.Collections.SortedList::keys
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___keys_0;
	// System.Object[] System.Collections.SortedList::values
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___values_1;
	// System.Int32 System.Collections.SortedList::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.SortedList::version
	int32_t ___version_3;
	// System.Collections.IComparer System.Collections.SortedList::comparer
	RuntimeObject* ___comparer_4;
	// System.Collections.SortedList/KeyList System.Collections.SortedList::keyList
	KeyList_t2BE9B79B2857B4C783AC7EF097D1D1EEFC000CD8* ___keyList_5;
	// System.Collections.SortedList/ValueList System.Collections.SortedList::valueList
	ValueList_t9DF653525F9B5641C9B6143901F62A7BF447D331* ___valueList_6;
	// System.Object System.Collections.SortedList::_syncRoot
	RuntimeObject* ____syncRoot_7;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ
struct a2gGKII7j9Qd3ZepQemJ_t621214B9B0AE4E89A9DA12DA3D6D3051F579C037  : public RuntimeObject
{
	// s67jBVIwEmI4OlyEHixM.CbLf9TIwPUSudLDcsxjt bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ::YOtIbWH9r3C
	CbLf9TIwPUSudLDcsxjt_t747BCAE98D9B3F65681D1442AFB6C77E94245BDA* ___YOtIbWH9r3C_1;
	// bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ::nD6Ibv7CQfG
	a2gGKII7j9Qd3ZepQemJ_t621214B9B0AE4E89A9DA12DA3D6D3051F579C037* ___nD6Ibv7CQfG_2;
	// bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ::oSbIbugeg34
	a2gGKII7j9Qd3ZepQemJ_t621214B9B0AE4E89A9DA12DA3D6D3051F579C037* ___oSbIbugeg34_3;
	// System.Object bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ::DpTIbLC2A0a
	RuntimeObject* ___DpTIbLC2A0a_4;
};

// KF6VRRI3zhjwtJhAU8aD.eRMNUqI3r6AO0Det7vN1
struct eRMNUqI3r6AO0Det7vN1_tAE1A02714261752295B4D7E1B7A2C00444D54CE0  : public RuntimeObject
{
};

// V5NdV2IYxrYnyLRsSQw0.fJYLGxIYYISuLexSUp31
struct fJYLGxIYYISuLexSUp31_tDDED012884E24BD3E99AB370F7B613BC83DAB3FB  : public RuntimeObject
{
};

// QmbtPuI0fF9IhiF5bYfS.fduRGHI0VRd5tjqPwiyf
struct fduRGHI0VRd5tjqPwiyf_tCF5C3E6B27685898B5752FF24D05B49F84DE7BEA  : public RuntimeObject
{
};

// d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw
struct ielsk72D5xwPeAW05dw_t47546E0125EF22A068A9F0F55F1F8C0455D54992  : public RuntimeObject
{
	// H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw::lArd9VOM4n
	TeYmbLhOx0lsZD78M9B_tF5B768209158D17137CD5677636A3D00C5FBEB45* ___lArd9VOM4n_0;
	// System.Boolean d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw::MDldqda5Tw
	bool ___MDldqda5Tw_1;
	// System.EventHandler`1<zpW9ATKsSc8lDlN5teb.j6iU3nK1qWKAyRC6xgQ> d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw::fAHdyL05Ss
	EventHandler_1_tAF8382A1CD5D4BD640CD098D7A5A0EAEFDE05E59* ___fAHdyL05Ss_2;
	// System.EventHandler d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw::O3ZdUrdq6I
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___O3ZdUrdq6I_3;
	// System.EventHandler d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw::wbxdwsNGbw
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___wbxdwsNGbw_4;
	// System.Collections.Generic.Dictionary`2<System.String,ClY49r2jGyRQaUB45Qk.wKmSPO23u9HBe4uNf5L> d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw::G68d7seUXM
	Dictionary_2_t46E189FD1C055D0FB6AC3822A2AD8DC5A1AFFBE6* ___G68d7seUXM_6;
};

// NIgwBWu6t2UHHFMUEHr.mVRvu6uocIktlmNOt0E
struct mVRvu6uocIktlmNOt0E_tEC9EEC2557A822A46B90C288A6A5B20590AB9254  : public RuntimeObject
{
};

// qLHb9iaAGIg460N4uku.p4Fj6KbzPsNH9Pl8Y5p
struct p4Fj6KbzPsNH9Pl8Y5p_t27D2311AD2074670CC4F61B387E8128F9303D99F  : public RuntimeObject
{
};

// roIE5qmzjbcxwNjLw8s.t5Zn1EmretqgRed7mnZ
struct t5Zn1EmretqgRed7mnZ_t7021B3DDC93A414FA69110E8F75A75D43D96D641  : public RuntimeObject
{
};

// t3SaX0IG7o0cjrjhWTLu.wwSKWiIGeGnmmBQ83LgT
struct wwSKWiIGeGnmmBQ83LgT_t9F5EFBFAC6D1C13D49C68D49CEC54A4B2AEE88C4  : public RuntimeObject
{
	// D9RH4pI90JsJ9xVrDoJY.sY7ct6I9jmQ9O820lm61 t3SaX0IG7o0cjrjhWTLu.wwSKWiIGeGnmmBQ83LgT::tanIGm0BIyR
	sY7ct6I9jmQ9O820lm61_tB7CFCC51FE0E913BF72FD654F91FA58CEFBC586B* ___tanIGm0BIyR_0;
	// gjATf0IGDy5tbGaAPVBH.kHmSfxIGiKCTCGYDcEMb t3SaX0IG7o0cjrjhWTLu.wwSKWiIGeGnmmBQ83LgT::QVpIG85YKsU
	kHmSfxIGiKCTCGYDcEMb_tA8110BF9640E46A03B2F040D674428DEDC09165C* ___QVpIG85YKsU_1;
	// GOqPn2ILlW8BVZlX8Ufw.VKPb4hILTjuhWGr92lWR t3SaX0IG7o0cjrjhWTLu.wwSKWiIGeGnmmBQ83LgT::w72IGJcJFBA
	VKPb4hILTjuhWGr92lWR_tADE763BDA1FB32B56788B3990D6DDA84E86C7A60* ___w72IGJcJFBA_2;
};

// KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk
struct x5rwaxIU1lgC3gy0hDDk_tE2796136E5E0D8F7AC51982BCF5D6293D89C7EB5  : public RuntimeObject
{
};

// UniRx.Scheduler/EndOfFrameMainThreadScheduler
struct EndOfFrameMainThreadScheduler_tDEB00F3663F7A0E73714B59763FB10C194429663  : public RuntimeObject
{
};

// UniRx.Scheduler/FixedUpdateMainThreadScheduler
struct FixedUpdateMainThreadScheduler_tCA7241F8BC3311A70DD07CFD2748CDFC2DEA11E3  : public RuntimeObject
{
};

// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler
struct IgnoreTimeScaleMainThreadScheduler_t15A43252BE809D3C28FB0C3D1BE5A3D8B4E9614F  : public RuntimeObject
{
	// System.Action`1<System.Object> UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler::scheduleAction
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___scheduleAction_0;
};

// UniRx.Scheduler/MainThreadScheduler
struct MainThreadScheduler_t79381B64713DB60DDBD10B86155CEBD9AFF8C586  : public RuntimeObject
{
	// System.Action`1<System.Object> UniRx.Scheduler/MainThreadScheduler::scheduleAction
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___scheduleAction_0;
};

// UniRx.Scheduler/ThreadPoolScheduler
struct ThreadPoolScheduler_tD70CA88940F9339327969057F716FA31BE56F840  : public RuntimeObject
{
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<Oabvjo4Lwj945hYZb24.Bv09q84uyoo3dJswVvc>
struct Nullable_1_tBE716A7AB903AB9BC1745DDAE67AAA04DDE14193 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<up8detrcRLwv2b9LJU0.LfaUcGrk60ZwsGq46EF>
struct Nullable_1_t2C55346B895C61117675788028B1C168103B3517 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Pbadnr4qdiuCI8AfTTr.Nq4hst49tU1TAhyiBX2>
struct Nullable_1_t5AB15E4FBFDC13C920E20106C72DA501603D57A8 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<TVIvxo4N4cM8o2cQlI7.UK1mAS4pi6AWoihi2hS>
struct Nullable_1_t318A4163EDF298DCC366E38644B40B8A18EA526B 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<uV6ISt4vlfIlYkFtDXf.g574Ly4WUl7jqZIQbW1>
struct Nullable_1_t971E0FDD9E39AD21F29670C899CB85E45AA99699 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<s8lkkX4GFRZmiNC313I.hQ9oos4Htndf5JPKv1N>
struct Nullable_1_t5DA8F0A1D390D1BDC2064558F310DB681DDAF548 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<uI4PMu4tBmD7A3g1YSG.yoduuX4BGlwGTB3Of4k>
struct Nullable_1_t6F7EB71BFA578F5A3195D09219D6E8CA9E48F676 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// Y2148H274t0tPZZYn3F.PkE1Se2wUqeTx2BvAfd`1<System.Object>
struct PkE1Se2wUqeTx2BvAfd_1_tCAA822DDDF1A729EB38ADD4A922D9627B9740E08  : public DigwHm20SpxNDRMXQJi_1_t368C47A56BB57E6E6A76ED519E9D52F93F8BAB6C
{
	// System.Action`3<d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw,System.String,E874Rh2e0ijByWiqpom> Y2148H274t0tPZZYn3F.PkE1Se2wUqeTx2BvAfd`1::BSb2b6Ffek
	Action_3_t7D62D811E7B031F7E64AA2C5A31C5D3197CD4D26* ___BSb2b6Ffek_0;
};

// pLXTRO2BA8Y6MwRY6fq.RAYjK82ucV0wfW3vnRp`1<System.Object>
struct RAYjK82ucV0wfW3vnRp_1_tCBA0DF7990608945A434758A8B224555D0154505  : public DigwHm20SpxNDRMXQJi_1_t368C47A56BB57E6E6A76ED519E9D52F93F8BAB6C
{
	// System.Action`2<System.String,Ya6CKf2Lxd1YcDXOsgH> pLXTRO2BA8Y6MwRY6fq.RAYjK82ucV0wfW3vnRp`1::y7I2tudPxB
	Action_2_t8A5691BDCBB15BBFE228BF21B998EF643FADA7E7* ___y7I2tudPxB_0;
};

// mQMYxJ2WtYRw7jFtVAF.cleVNS2pPiHI8wG0t07`1<System.Object>
struct cleVNS2pPiHI8wG0t07_1_tC4A2A6DC11A53A7303AA63D0F64B4F993F068DF3  : public DigwHm20SpxNDRMXQJi_1_t368C47A56BB57E6E6A76ED519E9D52F93F8BAB6C
{
	// System.Action`1<V4SeE02NHmhEW7r7Zkj> mQMYxJ2WtYRw7jFtVAF.cleVNS2pPiHI8wG0t07`1::BAh2vHyw3j
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___BAh2vHyw3j_0;
};

// FZ33l5IenH8gFlwB7CLv.jaq7wfIex8bBMQFOq7l9`1<System.Object>
struct jaq7wfIex8bBMQFOq7l9_1_t173A3EF7D605437B902F320ED702CC71F2C3E02D 
{
	// System.Collections.Generic.IEnumerable`1<qVi4JtIeMIHL7A87RCCU> FZ33l5IenH8gFlwB7CLv.jaq7wfIex8bBMQFOq7l9`1::cfuIe0SZak2
	RuntimeObject* ___cfuIe0SZak2_1;
};

// jnfLnM28lDO50VFnDfr.t8ll5s2a10OPnANcNy6`1<System.Object>
struct t8ll5s2a10OPnANcNy6_1_tF3F1B0B7DF879A38871AD6AB233274DD84BD9AAE  : public DigwHm20SpxNDRMXQJi_1_t368C47A56BB57E6E6A76ED519E9D52F93F8BAB6C
{
	// System.Action`3<d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw,H59S7V2mp0x6GKElMFA,System.Object> jnfLnM28lDO50VFnDfr.t8ll5s2a10OPnANcNy6`1::iYn2JrSuOe
	Action_3_t8542420B0F1565B0770BBE4588001A8EBA78571E* ___iYn2JrSuOe_0;
	// System.Object jnfLnM28lDO50VFnDfr.t8ll5s2a10OPnANcNy6`1::tNL2ipNilw
	RuntimeObject* ___tNL2ipNilw_1;
};

// PPoeln2ydnJAV28HrRK.zrxlAv2918OHalIJrox`1<System.Object>
struct zrxlAv2918OHalIJrox_1_t852A9A27156312E2C94A9D71BFCE5B1A9B45EEC4  : public DigwHm20SpxNDRMXQJi_1_t368C47A56BB57E6E6A76ED519E9D52F93F8BAB6C
{
	// System.Action`2<d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw,McY3jD2qPD5R1mSqgqW> PPoeln2ydnJAV28HrRK.zrxlAv2918OHalIJrox`1::C8q2UthoDy
	Action_2_tFA8292EEB847839DD04E49505401FA54540D6DE6* ___C8q2UthoDy_0;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::_body
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ____body_3;
};

// oksDuFIbspCdm9QQmdiA.MCOuyCIb1l1L0qFaD25v
struct MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21  : public a2gGKII7j9Qd3ZepQemJ_t621214B9B0AE4E89A9DA12DA3D6D3051F579C037
{
	// jhsLfBIbhctU2TSTZKOY.muZQ35IbRCS6Lb3wDZ30 oksDuFIbspCdm9QQmdiA.MCOuyCIb1l1L0qFaD25v::KYwIacadXxF
	int32_t ___KYwIacadXxF_14;
	// System.Object oksDuFIbspCdm9QQmdiA.MCOuyCIb1l1L0qFaD25v::f0vIaS0yb1a
	RuntimeObject* ___f0vIaS0yb1a_15;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.String System.Linq.Expressions.ParameterExpression::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// UniRx.Unit
struct Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 
{
	union
	{
		struct
		{
		};
		uint8_t Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662__padding[1];
	};
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// rqo3Pl41rxZ7iRaTocs.YkQvuv4hCawQfAelLNK
struct YkQvuv4hCawQfAelLNK_tC674C2EEE358C6545A0D99E4A38A963F00A3B2CD 
{
	// Sfm3Fi4RojZJV6psWVb.eX6Zr045x2gkv7PtKKY rqo3Pl41rxZ7iRaTocs.YkQvuv4hCawQfAelLNK::OaP4XmNxAa
	int32_t ___OaP4XmNxAa_1;
	// System.Int32 rqo3Pl41rxZ7iRaTocs.YkQvuv4hCawQfAelLNK::x2t44reKBA
	int32_t ___x2t44reKBA_2;
	// System.String rqo3Pl41rxZ7iRaTocs.YkQvuv4hCawQfAelLNK::Ixx4rk7hXv
	String_t* ___Ixx4rk7hXv_3;
	// System.Boolean rqo3Pl41rxZ7iRaTocs.YkQvuv4hCawQfAelLNK::eTh4zXqg8K
	bool ___eTh4zXqg8K_4;
};
// Native definition for P/Invoke marshalling of rqo3Pl41rxZ7iRaTocs.YkQvuv4hCawQfAelLNK
struct YkQvuv4hCawQfAelLNK_tC674C2EEE358C6545A0D99E4A38A963F00A3B2CD_marshaled_pinvoke
{
	int32_t ___OaP4XmNxAa_1;
	int32_t ___x2t44reKBA_2;
	char* ___Ixx4rk7hXv_3;
	int32_t ___eTh4zXqg8K_4;
};
// Native definition for COM marshalling of rqo3Pl41rxZ7iRaTocs.YkQvuv4hCawQfAelLNK
struct YkQvuv4hCawQfAelLNK_tC674C2EEE358C6545A0D99E4A38A963F00A3B2CD_marshaled_com
{
	int32_t ___OaP4XmNxAa_1;
	int32_t ___x2t44reKBA_2;
	Il2CppChar* ___Ixx4rk7hXv_3;
	int32_t ___eTh4zXqg8K_4;
};

// DYPSOUyTIlXrPcRjZ3r.YutsJ9yIcISgtVKmUQD
struct YutsJ9yIcISgtVKmUQD_t703540E322FF7304C66DF1ACBAB1630065FEEC80  : public Singleton_1_tEEDB1C578D7C6F8A0F23D53671EA64F56500D4D4
{
	// System.Security.Cryptography.RijndaelManaged DYPSOUyTIlXrPcRjZ3r.YutsJ9yIcISgtVKmUQD::HLdyZACyHu
	RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39* ___HLdyZACyHu_1;
};

// ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP
struct yDPgyIIYvL6HKuASy0XP_t72A374C34ED1E894BED1E856D81548FDC05B902E  : public fJYLGxIYYISuLexSUp31_tDDED012884E24BD3E99AB370F7B613BC83DAB3FB
{
};

// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor
struct QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32> System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::_definedParameters
	Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69* ____definedParameters_0;
	// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::_hoistedParameters
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ____hoistedParameters_1;
};

// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable> System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_variables
	Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD* ____variables_0;
	// System.Linq.Expressions.Interpreter.InterpretedFrame System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_frame
	InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D* ____frame_1;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>> System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_shadowedVars
	Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* ____shadowedVars_2;
};

// U1L86SI2NwC7tKFjSTyx.Y4pbxKI2pVJcC3viTGJn/XcYrWcI1nMP0aZ9SOJym
struct XcYrWcI1nMP0aZ9SOJym_t400828C2B906FD2D8CB28B5628BB216290E61AD9 
{
	// System.Text.StringBuilder U1L86SI2NwC7tKFjSTyx.Y4pbxKI2pVJcC3viTGJn/XcYrWcI1nMP0aZ9SOJym::CdqI1whp6Os
	StringBuilder_t* ___CdqI1whp6Os_0;
};
// Native definition for P/Invoke marshalling of U1L86SI2NwC7tKFjSTyx.Y4pbxKI2pVJcC3viTGJn/XcYrWcI1nMP0aZ9SOJym
struct XcYrWcI1nMP0aZ9SOJym_t400828C2B906FD2D8CB28B5628BB216290E61AD9_marshaled_pinvoke
{
	char* ___CdqI1whp6Os_0;
};
// Native definition for COM marshalling of U1L86SI2NwC7tKFjSTyx.Y4pbxKI2pVJcC3viTGJn/XcYrWcI1nMP0aZ9SOJym
struct XcYrWcI1nMP0aZ9SOJym_t400828C2B906FD2D8CB28B5628BB216290E61AD9_marshaled_com
{
	Il2CppChar* ___CdqI1whp6Os_0;
};

// UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1<UniRx.Unit>
struct U3CImmediateActionU3Ed__1_1_t43A5F4D318EFF1FC95B25C97F1FA5805B1F41342  : public RuntimeObject
{
	// System.Int32 UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UniRx.ICancelable UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::cancellation
	RuntimeObject* ___cancellation_2;
	// System.Action`1<T> UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::action
	Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A* ___action_3;
	// T UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::state
	Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 ___state_4;
};

// UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1<UniRx.Unit>
struct U3CImmediateActionU3Ed__1_1_t8487A9985C20BA03526EA40D18F122714F0C3D8D  : public RuntimeObject
{
	// System.Int32 UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UniRx.ICancelable UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::cancellation
	RuntimeObject* ___cancellation_2;
	// System.Action`1<T> UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::action
	Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A* ___action_3;
	// T UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::state
	Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 ___state_4;
};

// System.Linq.Expressions.Expression`1<System.Object>
struct Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7  : public LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E
{
};

// System.Tuple`3<UniRx.ICancelable,UniRx.Unit,System.Action`1<UniRx.Unit>>
struct Tuple_3_tA9647D22FE7E2E8FBD298636E7A5EC84C9E158A0  : public RuntimeObject
{
	// T1 System.Tuple`3::m_Item1
	RuntimeObject* ___m_Item1_0;
	// T2 System.Tuple`3::m_Item2
	Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 ___m_Item2_1;
	// T3 System.Tuple`3::m_Item3
	Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A* ___m_Item3_2;
};

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB  : public MethodBase_t
{
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B
struct TeYmbLhOx0lsZD78M9B_tF5B768209158D17137CD5677636A3D00C5FBEB45  : public RuntimeObject
{
	// System.Int32 H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B::u331VvYp0g
	int32_t ___u331VvYp0g_0;
	// System.Net.EndPoint H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B::iF61fLVfgt
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___iF61fLVfgt_1;
	// System.Collections.Generic.Dictionary`2<System.String,v2xSH3XxGEfRxiwFa25.PLroM9XOaZl2MQk5Gig`2<H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B,bnNVwosyTuOtY1CS0cu.FTeFTOsqW6GUkDHy3Bq>> H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B::leU1XSpTxP
	Dictionary_2_t80DF57E305E438274C6E91AF35E1A9839CF49275* ___leU1XSpTxP_2;
	// System.Threading.Timer H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B::CKW1rK58xu
	Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00* ___CKW1rK58xu_4;
	// System.String H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B::pu41zWILTp
	String_t* ___pu41zWILTp_5;
	// System.Boolean H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B::M6ksAqlwXV
	bool ___M6ksAqlwXV_6;
	// System.EventHandler H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B::LoHsIEM2c4
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___LoHsIEM2c4_7;
	// System.EventHandler`1<Quuohwda6q59YgHBEaM.FOJuocdbMn2bOXwt4t5> H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B::NV9sTSfrXJ
	EventHandler_1_tFE2C8E8768488CC46987292B004888E76F20BA8E* ___NV9sTSfrXJ_8;
	// System.EventHandler`1<QK0XA4gogXUi0PkFu9a.DXB1SWgsZXXFv4aaZKN> H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B::upkslP7Fkd
	EventHandler_1_t5B622BFC2E9DFB251411637E000B6AB4A195167A* ___upkslP7Fkd_9;
	// w15wJtgtVDYKmXw30Ed.BbV5qOgBPMdSAS9FqNL H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B::tuqskQ81tV
	BbV5qOgBPMdSAS9FqNL_t108704F5736B3263387E5297DE64C488A40064C6* ___tuqskQ81tV_10;
	// System.EventHandler H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B::sDSscxGUgu
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___sDSscxGUgu_11;
	// System.EventHandler`1<zpW9ATKsSc8lDlN5teb.j6iU3nK1qWKAyRC6xgQ> H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B::wBKsStOZhI
	EventHandler_1_tAF8382A1CD5D4BD640CD098D7A5A0EAEFDE05E59* ___wBKsStOZhI_12;
	// System.Boolean H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B::z4PsOiCrnW
	bool ___z4PsOiCrnW_14;
	// x7qnybKXUR6lX8ex2Ur.cQ3Yk5KfrqRAL0VdNqG H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B::NN5sZPPcmf
	cQ3Yk5KfrqRAL0VdNqG_tCD5E3A7C67A3E69DB043904DF3E5FD72353850E6* ___NN5sZPPcmf_15;
	// YjW676soWi4cQQbKWZw.dBmyeBssxFosJmTs9hP H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B::pNQsYvwDmn
	int32_t ___pNQsYvwDmn_16;
	// System.DateTime H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B::gXVsxPY9ZZ
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___gXVsxPY9ZZ_17;
	// System.Boolean H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B::vW4sMR7gG2
	bool ___vW4sMR7gG2_18;
	// System.Int32 H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B::S97snhr4Ik
	int32_t ___S97snhr4Ik_19;
	// qLffkh5kZZYN6fiZphR.y2ddBW5lTq25O1EM7M9 H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B::gAHs3dcqfs
	RuntimeObject* ___gAHs3dcqfs_20;
	// System.Uri H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B::GJmsjoqkim
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___GJmsjoqkim_21;
	// System.String H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B::OBGs0yN40H
	String_t* ___OBGs0yN40H_22;
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B::M37sHvF3X5
	RuntimeObject* ___M37sHvF3X5_23;
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>> H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B::C5LsG3djBi
	List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* ___C5LsG3djBi_24;
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>> H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B::N2ZspXEeFB
	List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* ___N2ZspXEeFB_25;
	// System.Boolean H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B::oVdsND5VU3
	bool ___oVdsND5VU3_26;
	// NinBA76aVfFeRxVXqEy.fQyjAn6bkwAeUnTbmaC H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B::WyMsWVSg2B
	RuntimeObject* ___WyMsWVSg2B_27;
	// xQ909iXBZoEHtZsJ4Sk.IXE6IhXuObb58oAPbf4`1<bnNVwosyTuOtY1CS0cu.FTeFTOsqW6GUkDHy3Bq> H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B::Uu1sv83Z5E
	RuntimeObject* ___Uu1sv83Z5E_28;
	// System.Boolean H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B::JjqsuDO10h
	bool ___JjqsuDO10h_29;
	// System.String H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B::vFXsLlT2sU
	String_t* ___vFXsLlT2sU_30;
	// System.String H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B::SiNsBieS2y
	String_t* ___SiNsBieS2y_31;
	// System.String H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B::To5stHcOd1
	String_t* ___To5stHcOd1_32;
	// System.Boolean H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B::r7Cs9K8WFO
	bool ___r7Cs9K8WFO_33;
};

// HbifHiIyCnWmHH0USMVu.pRIki9IyStHqBwnoedAT
struct pRIki9IyStHqBwnoedAT_tCEC0F8D00757FCA4ED786D195FDEE44E77519FBA  : public RuntimeObject
{
};

// t6aCVRIkpp2SgR9piVLE.upoLbGIkG3EWbjXCVTnk
struct upoLbGIkG3EWbjXCVTnk_t733914D925D667921802DE07AFE63A3663751D38  : public RuntimeObject
{
	// Ma4sUYICVxMtdeXsboY9.cdg7BeICKOYO4FhEG3Wn t6aCVRIkpp2SgR9piVLE.upoLbGIkG3EWbjXCVTnk::bROIcMrsjlx
	int32_t ___bROIcMrsjlx_0;
	// System.Object t6aCVRIkpp2SgR9piVLE.upoLbGIkG3EWbjXCVTnk::KaIIcnfyw9W
	RuntimeObject* ___KaIIcnfyw9W_1;
	// System.Char t6aCVRIkpp2SgR9piVLE.upoLbGIkG3EWbjXCVTnk::re8Ic3mQeYM
	Il2CppChar ___re8Ic3mQeYM_2;
	// t6aCVRIkpp2SgR9piVLE.upoLbGIkG3EWbjXCVTnk/DoJBoeIc9CHF0MreAR5V t6aCVRIkpp2SgR9piVLE.upoLbGIkG3EWbjXCVTnk::TH2IcjXjuQN
	int32_t ___TH2IcjXjuQN_3;
	// rqo3Pl41rxZ7iRaTocs.YkQvuv4hCawQfAelLNK t6aCVRIkpp2SgR9piVLE.upoLbGIkG3EWbjXCVTnk::NHxIc0EQJbO
	YkQvuv4hCawQfAelLNK_tC674C2EEE358C6545A0D99E4A38A963F00A3B2CD ___NHxIc0EQJbO_4;
	// System.Globalization.CultureInfo t6aCVRIkpp2SgR9piVLE.upoLbGIkG3EWbjXCVTnk::OixIcHrgbrf
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___OixIcHrgbrf_5;
	// uV6ISt4vlfIlYkFtDXf.g574Ly4WUl7jqZIQbW1 t6aCVRIkpp2SgR9piVLE.upoLbGIkG3EWbjXCVTnk::RFwIcGMsyHG
	int32_t ___RFwIcGMsyHG_6;
	// System.Nullable`1<System.Int32> t6aCVRIkpp2SgR9piVLE.upoLbGIkG3EWbjXCVTnk::UaQIcpDIRMy
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___UaQIcpDIRMy_7;
	// System.Boolean t6aCVRIkpp2SgR9piVLE.upoLbGIkG3EWbjXCVTnk::T31IcNEceM6
	bool ___T31IcNEceM6_8;
	// TVIvxo4N4cM8o2cQlI7.UK1mAS4pi6AWoihi2hS t6aCVRIkpp2SgR9piVLE.upoLbGIkG3EWbjXCVTnk::sX4IcWoZKPE
	int32_t ___sX4IcWoZKPE_9;
	// uI4PMu4tBmD7A3g1YSG.yoduuX4BGlwGTB3Of4k t6aCVRIkpp2SgR9piVLE.upoLbGIkG3EWbjXCVTnk::q1rIcvkVYdI
	int32_t ___q1rIcvkVYdI_10;
	// System.String t6aCVRIkpp2SgR9piVLE.upoLbGIkG3EWbjXCVTnk::VqgIcuYhk5g
	String_t* ___VqgIcuYhk5g_11;
	// System.Collections.Generic.List`1<rqo3Pl41rxZ7iRaTocs.YkQvuv4hCawQfAelLNK> t6aCVRIkpp2SgR9piVLE.upoLbGIkG3EWbjXCVTnk::PxbIcLBEFcR
	List_1_t946F3E5BDDD402C5D1F0CB36ECB13E66556BCA4F* ___PxbIcLBEFcR_12;
	// System.Boolean t6aCVRIkpp2SgR9piVLE.upoLbGIkG3EWbjXCVTnk::pZIIcBd92VM
	bool ___pZIIcBd92VM_13;
	// System.Boolean t6aCVRIkpp2SgR9piVLE.upoLbGIkG3EWbjXCVTnk::crLIctC0UWq
	bool ___crLIctC0UWq_14;
};

// Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq
struct yu6shyISV0cgPHoH4Fuq_t0A16977B178E0CC5C1EE91476FD242F00AC3E0B3  : public RuntimeObject
{
	// yU76JCIC6gDH3FhK4H82.pPZdThICokltm4XASe7s Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq::iWJIC0GB9v8
	int32_t ___iWJIC0GB9v8_0;
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq::QRgICHyTaWF
	int32_t ___QRgICHyTaWF_1;
	// YUaNjerZt0hOMBXsF2u.cZuXYfrO9RnFrJWRp7N Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq::Cc7ICGoX0bO
	int32_t ___Cc7ICGoX0bO_2;
	// awTgGlICsdTFb90u1rVj.rEE3yEIC1spyBlLiFhcs Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq::C6FICpkX9PY
	int32_t ___C6FICpkX9PY_3;
	// Qr06jYIC5fZte9sWw8op.tfREbTICQ9umWwAgyGER Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq::Ad7ICNUt0B7
	int32_t ___Ad7ICNUt0B7_4;
	// butnhPIIWOMystIcXrKm.L2VXMmIINoLcWtfOfyXp Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq::Q6dICWoT6Ef
	int32_t ___Q6dICWoT6Ef_5;
	// QoU8V9IChQIHXib10w6o.cVYv5kICRygEmpSKToNG Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq::NTNICvF2Frb
	int32_t ___NTNICvF2Frb_6;
	// Nbe6O0rfT4IYxGg3hgS.AbVInvrVYXR6JenYGSL Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq::vMIICuMdNeL
	int32_t ___vMIICuMdNeL_7;
	// Sxp7YL40a6cSQngC82M.uxeJIK4jNe6ouVcVeLx Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq::vWIICLmnyHE
	int32_t ___vWIICLmnyHE_8;
	// uAH82Brl3NijRsOHcfG.Yx5cNsrTFq0JNj6k0Vy Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq::Gn2ICBygfgB
	int32_t ___Gn2ICBygfgB_9;
	// iTMoCfIkHiQLwZggjfNW.f63hrcIk04YdpFItJDMN Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq::d41ICt926ap
	f63hrcIk04YdpFItJDMN_t093B43ADD89A16B7F2A08F2EC2D201FF19C87C3B* ___d41ICt926ap_10;
	// TphoSbIWZOI0lSnbIwkG.yK2K2oIWOkTJLgXEXCPm Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq::m4tIC932ppZ
	RuntimeObject* ___m4tIC932ppZ_11;
	// kceflkIHQHg3Cu4MG0Jf.pZxm8bIHdXh6JBR7jPRt Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq::gB1ICqDiZPy
	RuntimeObject* ___gB1ICqDiZPy_12;
	// System.Collections.IEqualityComparer Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq::bXKICyfLEoP
	RuntimeObject* ___bXKICyfLEoP_13;
	// System.Runtime.Serialization.SerializationBinder Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq::HAGICUuPict
	SerializationBinder_tB959BF0F4EF3F8611E5891A7011DD99F9FD69E2A* ___HAGICUuPict_14;
	// System.Runtime.Serialization.StreamingContext Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq::GeuICwiFerh
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___GeuICwiFerh_15;
	// nOPReRItMQ4oZPYRdFB0.fHRQtFItxmArIpAaMF5p Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq::Ow0ICerrIfN
	RuntimeObject* ___Ow0ICerrIfN_16;
	// System.Nullable`1<Pbadnr4qdiuCI8AfTTr.Nq4hst49tU1TAhyiBX2> Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq::urDIC7qHGDg
	Nullable_1_t5AB15E4FBFDC13C920E20106C72DA501603D57A8 ___urDIC7qHGDg_17;
	// System.Nullable`1<s8lkkX4GFRZmiNC313I.hQ9oos4Htndf5JPKv1N> Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq::u8wICbYX7gy
	Nullable_1_t5DA8F0A1D390D1BDC2064558F310DB681DDAF548 ___u8wICbYX7gy_18;
	// System.Nullable`1<uV6ISt4vlfIlYkFtDXf.g574Ly4WUl7jqZIQbW1> Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq::pZIICaCd2vF
	Nullable_1_t971E0FDD9E39AD21F29670C899CB85E45AA99699 ___pZIICaCd2vF_19;
	// System.Nullable`1<TVIvxo4N4cM8o2cQlI7.UK1mAS4pi6AWoihi2hS> Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq::xKAICmoqahC
	Nullable_1_t318A4163EDF298DCC366E38644B40B8A18EA526B ___xKAICmoqahC_20;
	// System.Nullable`1<Oabvjo4Lwj945hYZb24.Bv09q84uyoo3dJswVvc> Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq::oKQIC8DGMOW
	Nullable_1_tBE716A7AB903AB9BC1745DDAE67AAA04DDE14193 ___oKQIC8DGMOW_21;
	// System.Nullable`1<uI4PMu4tBmD7A3g1YSG.yoduuX4BGlwGTB3Of4k> Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq::Dc8ICJ9PXVi
	Nullable_1_t6F7EB71BFA578F5A3195D09219D6E8CA9E48F676 ___Dc8ICJ9PXVi_22;
	// System.Nullable`1<up8detrcRLwv2b9LJU0.LfaUcGrk60ZwsGq46EF> Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq::Xo5ICivec7g
	Nullable_1_t2C55346B895C61117675788028B1C168103B3517 ___Xo5ICivec7g_23;
	// System.Globalization.CultureInfo Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq::E7gICD7k6CX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___E7gICD7k6CX_24;
	// System.Nullable`1<System.Int32> Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq::PC2ICPkDK26
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___PC2ICPkDK26_25;
	// System.Boolean Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq::BhMICEh2p7t
	bool ___BhMICEh2p7t_26;
	// System.Nullable`1<System.Boolean> Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq::L5SICF9y2vp
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___L5SICF9y2vp_27;
	// System.String Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq::pntICgLZVDA
	String_t* ___pntICgLZVDA_28;
	// System.Boolean Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq::j84IC2qlXyd
	bool ___j84IC2qlXyd_29;
	// System.EventHandler`1<IZD7qvIGKTbxt3J2euGR.I9MRR8IG6QnJKpqu22j3> Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq::bWhICdYtvJy
	EventHandler_1_t23B335D4A5F9A0384AD712B68F35BE75AB92BCC6* ___bWhICdYtvJy_30;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<UniRx.Unit>
struct Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A  : public MulticastDelegate_t
{
};

// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C  : public MulticastDelegate_t
{
};

// System.Action`2<System.String,System.Object>
struct Action_2_t8A5691BDCBB15BBFE228BF21B998EF643FADA7E7  : public MulticastDelegate_t
{
};

// System.Action`2<d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw,System.Object>
struct Action_2_tFA8292EEB847839DD04E49505401FA54540D6DE6  : public MulticastDelegate_t
{
};

// System.Action`3<d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw,System.Object,System.Object>
struct Action_3_t8542420B0F1565B0770BBE4588001A8EBA78571E  : public MulticastDelegate_t
{
};

// System.Action`3<d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw,System.String,System.Object>
struct Action_3_t7D62D811E7B031F7E64AA2C5A31C5D3197CD4D26  : public MulticastDelegate_t
{
};

// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ>>
struct Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Func_2_t499DDE5E46331A56DAB11C983B806E4A9BE3B5D2  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.String>
struct Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B  : public MulticastDelegate_t
{
};

// mrsER6IY5FwIyj0NthCP.GaELVDIY2dLa2BLZTh0W`2<System.Object,System.Object>
struct GaELVDIY2dLa2BLZTh0W_2_tA8D55027EBADED6B8B585C72F06C2202B8063B3D  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<>c__0`1<System.Object>
struct U3CU3Ec__0_1_tE0BE74224AF91240FB34F7A8C0A4C8A6B6A50652_StaticFields
{
	// KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<>c__0`1<T> KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<>c__0`1::<>9
	U3CU3Ec__0_1_tE0BE74224AF91240FB34F7A8C0A4C8A6B6A50652* ___U3CU3E9_0;
	// System.Func`2<T,System.Collections.Generic.IEnumerable`1<bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ>> KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<>c__0`1::<>9__0_0
	Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E* ___U3CU3E9__0_0_1;
};

// KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<>c__0`1<System.Object>

// KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<>c__13`2<System.Object,System.Object>
struct U3CU3Ec__13_2_t4C8DFD9B557916EB78BD4095054C3D7153CC4921_StaticFields
{
	// KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<>c__13`2<T,U> KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<>c__13`2::<>9
	U3CU3Ec__13_2_t4C8DFD9B557916EB78BD4095054C3D7153CC4921* ___U3CU3E9_0;
	// System.Func`2<T,System.Collections.Generic.IEnumerable`1<bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ>> KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<>c__13`2::<>9__13_0
	Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E* ___U3CU3E9__13_0_1;
};

// KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<>c__13`2<System.Object,System.Object>

// KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<>c__1`1<System.Object>
struct U3CU3Ec__1_1_t6BECFF0052993C618B678CEA3B331B69453C8C5A_StaticFields
{
	// KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<>c__1`1<T> KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<>c__1`1::<>9
	U3CU3Ec__1_1_t6BECFF0052993C618B678CEA3B331B69453C8C5A* ___U3CU3E9_0;
	// System.Func`2<T,System.Collections.Generic.IEnumerable`1<bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ>> KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<>c__1`1::<>9__1_0
	Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E* ___U3CU3E9__1_0_1;
};

// KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<>c__1`1<System.Object>

// KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<>c__2`1<System.Object>
struct U3CU3Ec__2_1_tD9CC8E8B68712880473A649070B4C5E420FE7B7E_StaticFields
{
	// KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<>c__2`1<T> KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<>c__2`1::<>9
	U3CU3Ec__2_1_tD9CC8E8B68712880473A649070B4C5E420FE7B7E* ___U3CU3E9_0;
	// System.Func`2<T,System.Collections.Generic.IEnumerable`1<bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ>> KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<>c__2`1::<>9__2_0
	Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E* ___U3CU3E9__2_0_1;
};

// KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<>c__2`1<System.Object>

// KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<>c__3`1<System.Object>
struct U3CU3Ec__3_1_t4086104763D72563D5B9F9F0A06841A18FDF5286_StaticFields
{
	// KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<>c__3`1<T> KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<>c__3`1::<>9
	U3CU3Ec__3_1_t4086104763D72563D5B9F9F0A06841A18FDF5286* ___U3CU3E9_0;
	// System.Func`2<T,System.Collections.Generic.IEnumerable`1<bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ>> KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<>c__3`1::<>9__3_0
	Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E* ___U3CU3E9__3_0_1;
};

// KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<>c__3`1<System.Object>

// QmbtPuI0fF9IhiF5bYfS.fduRGHI0VRd5tjqPwiyf/<>c__DisplayClass15_0`1<System.Object>

// QmbtPuI0fF9IhiF5bYfS.fduRGHI0VRd5tjqPwiyf/<>c__DisplayClass15_0`1<System.Object>

// qLHb9iaAGIg460N4uku.p4Fj6KbzPsNH9Pl8Y5p/<>c__DisplayClass15_0`3<System.Object,System.Object,System.Object>

// qLHb9iaAGIg460N4uku.p4Fj6KbzPsNH9Pl8Y5p/<>c__DisplayClass15_0`3<System.Object,System.Object,System.Object>

// ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP/<>c__DisplayClass4_0`1<System.Object>

// ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP/<>c__DisplayClass4_0`1<System.Object>

// ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP/<>c__DisplayClass5_0`1<System.Object>

// ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP/<>c__DisplayClass5_0`1<System.Object>

// ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP/<>c__DisplayClass6_0`1<System.Object>

// ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP/<>c__DisplayClass6_0`1<System.Object>

// ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP/<>c__DisplayClass7_0`1<System.Object>

// ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP/<>c__DisplayClass7_0`1<System.Object>

// UniRx.Scheduler/ThreadPoolScheduler/<>c__DisplayClass7_0`1<System.Object>

// UniRx.Scheduler/ThreadPoolScheduler/<>c__DisplayClass7_0`1<System.Object>

// ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP/<>c__DisplayClass8_0`1<System.Object>

// ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP/<>c__DisplayClass8_0`1<System.Object>

// ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP/<>c__DisplayClass9_0`1<System.Object>

// ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP/<>c__DisplayClass9_0`1<System.Object>

// KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<Convert>d__14`2<System.Object,System.Object>

// KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<Convert>d__14`2<System.Object,System.Object>

// UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1<System.Object>

// UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1<System.Object>

// UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1<System.Object>

// UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1<System.Object>

// KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<Values>d__11`2<System.Object,System.Object>

// KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk/<Values>d__11`2<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,ClY49r2jGyRQaUB45Qk.wKmSPO23u9HBe4uNf5L>

// System.Collections.Generic.Dictionary`2<System.String,ClY49r2jGyRQaUB45Qk.wKmSPO23u9HBe4uNf5L>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Object>

// C9nH13a5oV83F8lBXvp.GWjGQNadWhjklk3KWL5`1<System.Boolean>
struct GWjGQNadWhjklk3KWL5_1_tAC30F52F4A47116A3A023E954C6F83D2E71F0217_StaticFields
{
	// C9nH13a5oV83F8lBXvp.GWjGQNadWhjklk3KWL5`1<BVch3IaQqPGGUDc1mby> C9nH13a5oV83F8lBXvp.GWjGQNadWhjklk3KWL5`1::msEmFSHyUj
	GWjGQNadWhjklk3KWL5_1_tAC30F52F4A47116A3A023E954C6F83D2E71F0217* ___msEmFSHyUj_0;
};

// C9nH13a5oV83F8lBXvp.GWjGQNadWhjklk3KWL5`1<System.Boolean>

// C9nH13a5oV83F8lBXvp.GWjGQNadWhjklk3KWL5`1<System.Object>
struct GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021_StaticFields
{
	// C9nH13a5oV83F8lBXvp.GWjGQNadWhjklk3KWL5`1<BVch3IaQqPGGUDc1mby> C9nH13a5oV83F8lBXvp.GWjGQNadWhjklk3KWL5`1::msEmFSHyUj
	GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* ___msEmFSHyUj_0;
};

// C9nH13a5oV83F8lBXvp.GWjGQNadWhjklk3KWL5`1<System.Object>

// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>

// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>

// hdi3RVbCUxS0q8IKdRD.MTr8f8bkTI3U1qepF9e`2<System.Int32,System.Object>
struct MTr8f8bkTI3U1qepF9e_2_t2C48CDCC3D6CC8E57E078BD9F4078C687C72779D_StaticFields
{
	// hdi3RVbCUxS0q8IKdRD.MTr8f8bkTI3U1qepF9e`2<pbJG5GbcRIAy8IgCwWm,sVTmqDbSpqfeUdiKI3L> hdi3RVbCUxS0q8IKdRD.MTr8f8bkTI3U1qepF9e`2::FPnbw5Ml3Y
	MTr8f8bkTI3U1qepF9e_2_t2C48CDCC3D6CC8E57E078BD9F4078C687C72779D* ___FPnbw5Ml3Y_0;
};

// hdi3RVbCUxS0q8IKdRD.MTr8f8bkTI3U1qepF9e`2<System.Int32,System.Object>

// hdi3RVbCUxS0q8IKdRD.MTr8f8bkTI3U1qepF9e`2<System.Object,System.Object>
struct MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4_StaticFields
{
	// hdi3RVbCUxS0q8IKdRD.MTr8f8bkTI3U1qepF9e`2<pbJG5GbcRIAy8IgCwWm,sVTmqDbSpqfeUdiKI3L> hdi3RVbCUxS0q8IKdRD.MTr8f8bkTI3U1qepF9e`2::FPnbw5Ml3Y
	MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* ___FPnbw5Ml3Y_0;
};

// hdi3RVbCUxS0q8IKdRD.MTr8f8bkTI3U1qepF9e`2<System.Object,System.Object>

// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/QueuedAction`1<System.Object>
struct QueuedAction_1_t6C75CFFA426C16AC7A45FE40ED2DD9ABC0A8A790_StaticFields
{
	// System.Action`1<System.Object> UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/QueuedAction`1::Instance
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Instance_0;
};

// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/QueuedAction`1<System.Object>

// UniRx.Scheduler/MainThreadScheduler/QueuedAction`1<System.Object>
struct QueuedAction_1_t6A5CAEEB4E725A313A2340A9260501A1FBA36B19_StaticFields
{
	// System.Action`1<System.Object> UniRx.Scheduler/MainThreadScheduler/QueuedAction`1::Instance
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Instance_0;
};

// UniRx.Scheduler/MainThreadScheduler/QueuedAction`1<System.Object>

// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/QueuedAction`1<UniRx.Unit>
struct QueuedAction_1_t07F49A76F2AFCA834825566E329075B151B16630_StaticFields
{
	// System.Action`1<System.Object> UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/QueuedAction`1::Instance
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Instance_0;
};

// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/QueuedAction`1<UniRx.Unit>

// UniRx.Scheduler/MainThreadScheduler/QueuedAction`1<UniRx.Unit>
struct QueuedAction_1_tF4DAACFE6CE13BB80D7DF87A5B9C4485D491C289_StaticFields
{
	// System.Action`1<System.Object> UniRx.Scheduler/MainThreadScheduler/QueuedAction`1::Instance
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Instance_0;
};

// UniRx.Scheduler/MainThreadScheduler/QueuedAction`1<UniRx.Unit>

// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>

// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>

// System.Tuple`3<UniRx.ICancelable,System.Object,System.Action`1<System.Object>>

// System.Tuple`3<UniRx.ICancelable,System.Object,System.Action`1<System.Object>>

// pHRry0u0ZUTuuKhNpiN.BlpDMbujQqgSL8Ynfso
struct BlpDMbujQqgSL8Ynfso_tD4C1F11C9EF1B25C16253491FD2E68D909DFFD75_StaticFields
{
	// System.String pHRry0u0ZUTuuKhNpiN.BlpDMbujQqgSL8Ynfso::aQiuWBwsbg
	String_t* ___aQiuWBwsbg_0;
	// System.String pHRry0u0ZUTuuKhNpiN.BlpDMbujQqgSL8Ynfso::UsauvFKNkE
	String_t* ___UsauvFKNkE_1;
	// System.String pHRry0u0ZUTuuKhNpiN.BlpDMbujQqgSL8Ynfso::BtNuuV2X5p
	String_t* ___BtNuuV2X5p_2;
	// System.String pHRry0u0ZUTuuKhNpiN.BlpDMbujQqgSL8Ynfso::vH9uLRA3co
	String_t* ___vH9uLRA3co_3;
	// System.String pHRry0u0ZUTuuKhNpiN.BlpDMbujQqgSL8Ynfso::bDWuBiknr8
	String_t* ___bDWuBiknr8_4;
	// System.String pHRry0u0ZUTuuKhNpiN.BlpDMbujQqgSL8Ynfso::Rdput7RK5u
	String_t* ___Rdput7RK5u_5;
	// System.String pHRry0u0ZUTuuKhNpiN.BlpDMbujQqgSL8Ynfso::asBu96RCbH
	String_t* ___asBu96RCbH_6;
	// System.String pHRry0u0ZUTuuKhNpiN.BlpDMbujQqgSL8Ynfso::q68uq0dM6l
	String_t* ___q68uq0dM6l_7;
	// System.String pHRry0u0ZUTuuKhNpiN.BlpDMbujQqgSL8Ynfso::qpPuybinIV
	String_t* ___qpPuybinIV_8;
	// pHRry0u0ZUTuuKhNpiN.BlpDMbujQqgSL8Ynfso/MRCMVRuikphKH56Gm7d pHRry0u0ZUTuuKhNpiN.BlpDMbujQqgSL8Ynfso::LwduUHWOxd
	int32_t ___LwduUHWOxd_9;
	// System.Boolean pHRry0u0ZUTuuKhNpiN.BlpDMbujQqgSL8Ynfso::jTvuwLuJV6
	bool ___jTvuwLuJV6_10;
	// System.Boolean pHRry0u0ZUTuuKhNpiN.BlpDMbujQqgSL8Ynfso::gHHue4Qkek
	bool ___gHHue4Qkek_11;
	// System.Boolean pHRry0u0ZUTuuKhNpiN.BlpDMbujQqgSL8Ynfso::mOeu7KDXVL
	bool ___mOeu7KDXVL_12;
	// System.Boolean pHRry0u0ZUTuuKhNpiN.BlpDMbujQqgSL8Ynfso::wXrub9F2FY
	bool ___wXrub9F2FY_13;
	// System.Boolean pHRry0u0ZUTuuKhNpiN.BlpDMbujQqgSL8Ynfso::i1Sua6LaEu
	bool ___i1Sua6LaEu_14;
	// System.Boolean pHRry0u0ZUTuuKhNpiN.BlpDMbujQqgSL8Ynfso::t7vum2LlML
	bool ___t7vum2LlML_15;
	// System.Boolean pHRry0u0ZUTuuKhNpiN.BlpDMbujQqgSL8Ynfso::mCyu83UyWC
	bool ___mCyu83UyWC_16;
	// System.Boolean pHRry0u0ZUTuuKhNpiN.BlpDMbujQqgSL8Ynfso::WUsuJ5Fh2M
	bool ___WUsuJ5Fh2M_17;
};

// pHRry0u0ZUTuuKhNpiN.BlpDMbujQqgSL8Ynfso

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};

// System.Globalization.CultureInfo

// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_StaticFields
{
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo> System.Linq.Expressions.Expression::s_lambdaDelegateCache
	CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15* ___s_lambdaDelegateCache_0;
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Linq.Expressions.Expression::s_lambdaFactories
	CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7* ___s_lambdaFactories_1;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo> System.Linq.Expressions.Expression::s_legacyCtorSupportTable
	ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7* ___s_legacyCtorSupportTable_2;
};

// System.Linq.Expressions.Expression

// System.Linq.Expressions.ExpressionVisitor

// System.Linq.Expressions.ExpressionVisitor

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_4;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_3;
};

// System.Collections.SortedList

// System.Collections.SortedList

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ
struct a2gGKII7j9Qd3ZepQemJ_t621214B9B0AE4E89A9DA12DA3D6D3051F579C037_StaticFields
{
	// kp7gi2IUhqNo3ONOLpC8.qyIidIIURCnhuMQQCyxD bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ::c6rIbNX2lfR
	qyIidIIURCnhuMQQCyxD_t8E6D17C842863573E56B9080FA22E33A8BA08DD9* ___c6rIbNX2lfR_0;
	// jhsLfBIbhctU2TSTZKOY.muZQ35IbRCS6Lb3wDZ30[] bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ::trbIbBBNK87
	muZQ35IbRCS6Lb3wDZ30U5BU5D_tF521F490A0B1A51BC1A67C0A8C1BA8886336CDF3* ___trbIbBBNK87_5;
	// jhsLfBIbhctU2TSTZKOY.muZQ35IbRCS6Lb3wDZ30[] bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ::RwPIbtHQ03Y
	muZQ35IbRCS6Lb3wDZ30U5BU5D_tF521F490A0B1A51BC1A67C0A8C1BA8886336CDF3* ___RwPIbtHQ03Y_6;
	// jhsLfBIbhctU2TSTZKOY.muZQ35IbRCS6Lb3wDZ30[] bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ::Q7LIb9SJTDB
	muZQ35IbRCS6Lb3wDZ30U5BU5D_tF521F490A0B1A51BC1A67C0A8C1BA8886336CDF3* ___Q7LIb9SJTDB_7;
	// jhsLfBIbhctU2TSTZKOY.muZQ35IbRCS6Lb3wDZ30[] bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ::o7vIbqdSOiK
	muZQ35IbRCS6Lb3wDZ30U5BU5D_tF521F490A0B1A51BC1A67C0A8C1BA8886336CDF3* ___o7vIbqdSOiK_8;
	// jhsLfBIbhctU2TSTZKOY.muZQ35IbRCS6Lb3wDZ30[] bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ::AalIbyRkIn2
	muZQ35IbRCS6Lb3wDZ30U5BU5D_tF521F490A0B1A51BC1A67C0A8C1BA8886336CDF3* ___AalIbyRkIn2_9;
	// jhsLfBIbhctU2TSTZKOY.muZQ35IbRCS6Lb3wDZ30[] bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ::hf0IbUNeV9b
	muZQ35IbRCS6Lb3wDZ30U5BU5D_tF521F490A0B1A51BC1A67C0A8C1BA8886336CDF3* ___hf0IbUNeV9b_10;
	// jhsLfBIbhctU2TSTZKOY.muZQ35IbRCS6Lb3wDZ30[] bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ::REPIbwqLG0Q
	muZQ35IbRCS6Lb3wDZ30U5BU5D_tF521F490A0B1A51BC1A67C0A8C1BA8886336CDF3* ___REPIbwqLG0Q_11;
	// jhsLfBIbhctU2TSTZKOY.muZQ35IbRCS6Lb3wDZ30[] bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ::YrUIbeQtsPm
	muZQ35IbRCS6Lb3wDZ30U5BU5D_tF521F490A0B1A51BC1A67C0A8C1BA8886336CDF3* ___YrUIbeQtsPm_12;
	// jhsLfBIbhctU2TSTZKOY.muZQ35IbRCS6Lb3wDZ30[] bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ::CNRIb7U4GJu
	muZQ35IbRCS6Lb3wDZ30U5BU5D_tF521F490A0B1A51BC1A67C0A8C1BA8886336CDF3* ___CNRIb7U4GJu_13;
};

// bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ

// KF6VRRI3zhjwtJhAU8aD.eRMNUqI3r6AO0Det7vN1

// KF6VRRI3zhjwtJhAU8aD.eRMNUqI3r6AO0Det7vN1

// V5NdV2IYxrYnyLRsSQw0.fJYLGxIYYISuLexSUp31

// V5NdV2IYxrYnyLRsSQw0.fJYLGxIYYISuLexSUp31

// QmbtPuI0fF9IhiF5bYfS.fduRGHI0VRd5tjqPwiyf

// QmbtPuI0fF9IhiF5bYfS.fduRGHI0VRd5tjqPwiyf

// d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw
struct ielsk72D5xwPeAW05dw_t47546E0125EF22A068A9F0F55F1F8C0455D54992_StaticFields
{
	// System.Random d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw::Ipddew3hOW
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___Ipddew3hOW_5;
};

// d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw

// NIgwBWu6t2UHHFMUEHr.mVRvu6uocIktlmNOt0E

// NIgwBWu6t2UHHFMUEHr.mVRvu6uocIktlmNOt0E

// qLHb9iaAGIg460N4uku.p4Fj6KbzPsNH9Pl8Y5p

// qLHb9iaAGIg460N4uku.p4Fj6KbzPsNH9Pl8Y5p

// roIE5qmzjbcxwNjLw8s.t5Zn1EmretqgRed7mnZ

// roIE5qmzjbcxwNjLw8s.t5Zn1EmretqgRed7mnZ

// t3SaX0IG7o0cjrjhWTLu.wwSKWiIGeGnmmBQ83LgT

// t3SaX0IG7o0cjrjhWTLu.wwSKWiIGeGnmmBQ83LgT

// KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk

// KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk

// UniRx.Scheduler/EndOfFrameMainThreadScheduler

// UniRx.Scheduler/EndOfFrameMainThreadScheduler

// UniRx.Scheduler/FixedUpdateMainThreadScheduler

// UniRx.Scheduler/FixedUpdateMainThreadScheduler

// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler

// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler

// UniRx.Scheduler/MainThreadScheduler

// UniRx.Scheduler/MainThreadScheduler

// UniRx.Scheduler/ThreadPoolScheduler

// UniRx.Scheduler/ThreadPoolScheduler

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// Y2148H274t0tPZZYn3F.PkE1Se2wUqeTx2BvAfd`1<System.Object>

// Y2148H274t0tPZZYn3F.PkE1Se2wUqeTx2BvAfd`1<System.Object>

// pLXTRO2BA8Y6MwRY6fq.RAYjK82ucV0wfW3vnRp`1<System.Object>

// pLXTRO2BA8Y6MwRY6fq.RAYjK82ucV0wfW3vnRp`1<System.Object>

// mQMYxJ2WtYRw7jFtVAF.cleVNS2pPiHI8wG0t07`1<System.Object>

// mQMYxJ2WtYRw7jFtVAF.cleVNS2pPiHI8wG0t07`1<System.Object>

// FZ33l5IenH8gFlwB7CLv.jaq7wfIex8bBMQFOq7l9`1<System.Object>
struct jaq7wfIex8bBMQFOq7l9_1_t173A3EF7D605437B902F320ED702CC71F2C3E02D_StaticFields
{
	// FZ33l5IenH8gFlwB7CLv.jaq7wfIex8bBMQFOq7l9`1<qVi4JtIeMIHL7A87RCCU> FZ33l5IenH8gFlwB7CLv.jaq7wfIex8bBMQFOq7l9`1::TCVIejyBV5U
	jaq7wfIex8bBMQFOq7l9_1_t173A3EF7D605437B902F320ED702CC71F2C3E02D ___TCVIejyBV5U_0;
};

// FZ33l5IenH8gFlwB7CLv.jaq7wfIex8bBMQFOq7l9`1<System.Object>

// jnfLnM28lDO50VFnDfr.t8ll5s2a10OPnANcNy6`1<System.Object>

// jnfLnM28lDO50VFnDfr.t8ll5s2a10OPnANcNy6`1<System.Object>

// PPoeln2ydnJAV28HrRK.zrxlAv2918OHalIJrox`1<System.Object>

// PPoeln2ydnJAV28HrRK.zrxlAv2918OHalIJrox`1<System.Object>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Decimal

// System.Double

// System.Double

// System.Reflection.FieldInfo

// System.Reflection.FieldInfo

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Linq.Expressions.LambdaExpression

// System.Linq.Expressions.LambdaExpression

// oksDuFIbspCdm9QQmdiA.MCOuyCIb1l1L0qFaD25v

// oksDuFIbspCdm9QQmdiA.MCOuyCIb1l1L0qFaD25v

// System.Reflection.MethodBase

// System.Reflection.MethodBase

// System.Linq.Expressions.ParameterExpression

// System.Linq.Expressions.ParameterExpression

// System.Reflection.PropertyInfo

// System.Reflection.PropertyInfo

// System.SByte

// System.SByte

// System.Single

// System.Single

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// UniRx.Unit
struct Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662_StaticFields
{
	// UniRx.Unit UniRx.Unit::default
	Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 ___default_0;
};

// UniRx.Unit

// System.Void

// System.Void

// DYPSOUyTIlXrPcRjZ3r.YutsJ9yIcISgtVKmUQD

// DYPSOUyTIlXrPcRjZ3r.YutsJ9yIcISgtVKmUQD

// ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP
struct yDPgyIIYvL6HKuASy0XP_t72A374C34ED1E894BED1E856D81548FDC05B902E_StaticFields
{
	// ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP::jXqIYehRSZC
	yDPgyIIYvL6HKuASy0XP_t72A374C34ED1E894BED1E856D81548FDC05B902E* ___jXqIYehRSZC_0;
};

// ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP

// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor

// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor

// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter

// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter

// U1L86SI2NwC7tKFjSTyx.Y4pbxKI2pVJcC3viTGJn/XcYrWcI1nMP0aZ9SOJym

// U1L86SI2NwC7tKFjSTyx.Y4pbxKI2pVJcC3viTGJn/XcYrWcI1nMP0aZ9SOJym

// UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1<UniRx.Unit>

// UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1<UniRx.Unit>

// UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1<UniRx.Unit>

// UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1<UniRx.Unit>

// System.Linq.Expressions.Expression`1<System.Object>

// System.Linq.Expressions.Expression`1<System.Object>

// System.Tuple`3<UniRx.ICancelable,UniRx.Unit,System.Action`1<UniRx.Unit>>

// System.Tuple`3<UniRx.ICancelable,UniRx.Unit,System.Action`1<UniRx.Unit>>

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticFields
{
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;
};

// System.Reflection.ConstructorInfo

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B
struct TeYmbLhOx0lsZD78M9B_tF5B768209158D17137CD5677636A3D00C5FBEB45_StaticFields
{
	// mfoi9tRW2qgdA7BewrG.GQTC9vRNE1QZHH1JhRH H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B::XwB14mKXui
	GQTC9vRNE1QZHH1JhRH_t9CDC166C71F590A1B5048B6633E76FFB6EF428A9* ___XwB14mKXui_3;
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>> H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B::FjhsCvbDfG
	List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* ___FjhsCvbDfG_13;
};

// H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B

// HbifHiIyCnWmHH0USMVu.pRIki9IyStHqBwnoedAT
struct pRIki9IyStHqBwnoedAT_tCEC0F8D00757FCA4ED786D195FDEE44E77519FBA_StaticFields
{
	// System.Nullable`1<System.Boolean> HbifHiIyCnWmHH0USMVu.pRIki9IyStHqBwnoedAT::GMKIyw8hoIu
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___GMKIyw8hoIu_0;
	// System.Nullable`1<System.Boolean> HbifHiIyCnWmHH0USMVu.pRIki9IyStHqBwnoedAT::GedIyeogOK6
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___GedIyeogOK6_1;
	// Qpj9uNIxDwUmbWuZDonk.uPhTUNIx8yIIYoDLYVH9`2<System.Type,System.Func`2<System.Object[],LhkWPlIkjZQUeqC2AJ5V.c3S7i8Ik31X2yoXQ0Ca5>> HbifHiIyCnWmHH0USMVu.pRIki9IyStHqBwnoedAT::Xy3Iy7SPBYs
	uPhTUNIx8yIIYoDLYVH9_2_tDA30FD01086BB9BF3E756129372ADFEDA033FEAE* ___Xy3Iy7SPBYs_2;
	// Qpj9uNIxDwUmbWuZDonk.uPhTUNIx8yIIYoDLYVH9`2<System.Type,System.Type> HbifHiIyCnWmHH0USMVu.pRIki9IyStHqBwnoedAT::ewVIybuslvI
	uPhTUNIx8yIIYoDLYVH9_2_t00B32D9FD50FE20E71B5CB85D418B4669F6FC392* ___ewVIybuslvI_3;
	// flQtppIxT8ADGVArShbU.vfT5NaIxIOin1Q1v8Ubj HbifHiIyCnWmHH0USMVu.pRIki9IyStHqBwnoedAT::wF6Iya3V8Xd
	vfT5NaIxIOin1Q1v8Ubj_tF9AE41632CAB9070CBCAD1D52C1E4F85BD538250* ___wF6Iya3V8Xd_4;
};

// HbifHiIyCnWmHH0USMVu.pRIki9IyStHqBwnoedAT

// t6aCVRIkpp2SgR9piVLE.upoLbGIkG3EWbjXCVTnk

// t6aCVRIkpp2SgR9piVLE.upoLbGIkG3EWbjXCVTnk

// Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq

// Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Action`1<UniRx.Unit>

// System.Action`1<UniRx.Unit>

// System.Action`2<System.Object,System.Object>

// System.Action`2<System.Object,System.Object>

// System.Action`2<System.String,System.Object>

// System.Action`2<System.String,System.Object>

// System.Action`2<d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw,System.Object>

// System.Action`2<d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw,System.Object>

// System.Action`3<d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw,System.Object,System.Object>

// System.Action`3<d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw,System.Object,System.Object>

// System.Action`3<d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw,System.String,System.Object>

// System.Action`3<d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw,System.String,System.Object>

// System.Func`1<System.Object>

// System.Func`1<System.Object>

// System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ>>

// System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ>>

// System.Func`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>

// System.Func`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>

// System.Func`2<System.Object,System.Boolean>

// System.Func`2<System.Object,System.Boolean>

// System.Func`2<System.Object,System.Object>

// System.Func`2<System.Object,System.Object>

// System.Func`2<System.Object,System.String>

// System.Func`2<System.Object,System.String>

// mrsER6IY5FwIyj0NthCP.GaELVDIY2dLa2BLZTh0W`2<System.Object,System.Object>

// mrsER6IY5FwIyj0NthCP.GaELVDIY2dLa2BLZTh0W`2<System.Object,System.Object>

// System.ArgumentException

// System.ArgumentException

// System.InvalidCastException

// System.InvalidCastException

// System.Threading.WaitCallback

// System.Threading.WaitCallback

// System.ArgumentNullException

// System.ArgumentNullException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* m_Items[1];

	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// T BackEnd.Util.Singleton`1<System.Object>::get_GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Singleton_1_get_GetInstance_mB358DAC7DD09F84B70B5EF0A0D2B9458FDFE9A38_gshared (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void FZ33l5IenH8gFlwB7CLv.jaq7wfIex8bBMQFOq7l9`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<qVi4JtIeMIHL7A87RCCU>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void jaq7wfIex8bBMQFOq7l9_1__ctor_m20170059DA89337524F4FE98B0A66B2F87904A2D_gshared (jaq7wfIex8bBMQFOq7l9_1_t173A3EF7D605437B902F320ED702CC71F2C3E02D* __this, RuntimeObject* ___0_U20, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Void U1L86SI2NwC7tKFjSTyx.Y4pbxKI2pVJcC3viTGJn/XcYrWcI1nMP0aZ9SOJym::GFhI1jpcadG<System.Object>(nReNSpI10p5vfExj6dJF)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XcYrWcI1nMP0aZ9SOJym_GFhI1jpcadG_TisRuntimeObject_m33FEB8F4D58C208BB0752F26E240DB436BB07B1B_gshared (XcYrWcI1nMP0aZ9SOJym_t400828C2B906FD2D8CB28B5628BB216290E61AD9* __this, RuntimeObject* ___0_jmFbStI1HchJKTwD6HcJ, const RuntimeMethod* method) ;
// System.Void U1L86SI2NwC7tKFjSTyx.Y4pbxKI2pVJcC3viTGJn/XcYrWcI1nMP0aZ9SOJym::OxiI1Gvhneh<System.Object>(W66fjsI1p129343Id4qs,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XcYrWcI1nMP0aZ9SOJym_OxiI1Gvhneh_TisRuntimeObject_mF7E0971A3C9433DC6C6B9DB228206E7356061200_gshared (XcYrWcI1nMP0aZ9SOJym_t400828C2B906FD2D8CB28B5628BB216290E61AD9* __this, RuntimeObject* ___0_lKKTTnI1Nny4TjhlWcyu, String_t* ___1_U20, const RuntimeMethod* method) ;
// System.Void U1L86SI2NwC7tKFjSTyx.Y4pbxKI2pVJcC3viTGJn/XcYrWcI1nMP0aZ9SOJym::hJhI1WXOpCn<System.Object>(wM2cQuI1v0RHhwpb3ne1,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XcYrWcI1nMP0aZ9SOJym_hJhI1WXOpCn_TisRuntimeObject_mED124B146005B472A524E98E89972D2CE7E73061_gshared (XcYrWcI1nMP0aZ9SOJym_t400828C2B906FD2D8CB28B5628BB216290E61AD9* __this, RuntimeObject* ___0_PFt6iJI1uGPQVr2pulFj, int32_t ___1_U20, const RuntimeMethod* method) ;
// System.Void U1L86SI2NwC7tKFjSTyx.Y4pbxKI2pVJcC3viTGJn/XcYrWcI1nMP0aZ9SOJym::vLLI1LTniRs<System.Object>(k4yfdCI1BPrZqoKUPxKt,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XcYrWcI1nMP0aZ9SOJym_vLLI1LTniRs_TisRuntimeObject_m150FFB7FFF52E1BCDE5DAC6E503BAA28D43F7955_gshared (XcYrWcI1nMP0aZ9SOJym_t400828C2B906FD2D8CB28B5628BB216290E61AD9* __this, RuntimeObject* ___0_l2x17xI1tuExW5byebX4, int32_t ___1_U20, String_t* ___2_U20, const RuntimeMethod* method) ;

// System.Void WiMrrxIHatTNAViXnjqR.qHNsI1IHbt6MSvUAaMXD::gO3IHmVPH3W(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void qHNsI1IHbt6MSvUAaMXD_gO3IHmVPH3W_m0DF8EA259C270017610BAAF1AA3F282D2D9FCB09 (RuntimeObject* ___0_U20, String_t* ___1_U20, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.String QmbtPuI0fF9IhiF5bYfS.fduRGHI0VRd5tjqPwiyf::PWGI0XXDPfM(System.String,System.IFormatProvider,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* fduRGHI0VRd5tjqPwiyf_PWGI0XXDPfM_m1F2489565C0855522BD6E3E10A3F89F17973E101 (String_t* ___0_U20, RuntimeObject* ___1_U20, RuntimeObject* ___2_U20, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,ClY49r2jGyRQaUB45Qk.wKmSPO23u9HBe4uNf5L>::Add(TKey,TValue)
inline void Dictionary_2_Add_m0E72266123E55C107E6F77DD347B35B840808475 (Dictionary_2_t46E189FD1C055D0FB6AC3822A2AD8DC5A1AFFBE6* __this, String_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46E189FD1C055D0FB6AC3822A2AD8DC5A1AFFBE6*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean umcW2ug4IoD5PyUunmZ.NK4HE7gXSdJsW4cE5Py::SSm2OK3dvu(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NK4HE7gXSdJsW4cE5Py_SSm2OK3dvu_m20FC9D87A1DCC15910B7D4CA652B3DA61B3F0A31 (Type_t* ___0_U20, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.Void H7IOhlhZ6EE19xuXoux.TeYmbLhOx0lsZD78M9B::Send(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeYmbLhOx0lsZD78M9B_Send_m58A4A27DE452509A629D20CE450A5422BBD1951E (TeYmbLhOx0lsZD78M9B_tF5B768209158D17137CD5677636A3D00C5FBEB45* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.String NIgwBWu6t2UHHFMUEHr.mVRvu6uocIktlmNOt0E::RvOLZkWpCZ(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* mVRvu6uocIktlmNOt0E_RvOLZkWpCZ_mE0B9306F290246BE7FFAC9CAEE10789D5F695BD2 (String_t* ___0_U20, const RuntimeMethod* method) ;
// T BackEnd.Util.Singleton`1<DYPSOUyTIlXrPcRjZ3r.YutsJ9yIcISgtVKmUQD>::get_GetInstance()
inline YutsJ9yIcISgtVKmUQD_t703540E322FF7304C66DF1ACBAB1630065FEEC80* Singleton_1_get_GetInstance_mD4246965321EE63E2D488139AA4EAF3D59B73FFD (const RuntimeMethod* method)
{
	return ((  YutsJ9yIcISgtVKmUQD_t703540E322FF7304C66DF1ACBAB1630065FEEC80* (*) (const RuntimeMethod*))Singleton_1_get_GetInstance_mB358DAC7DD09F84B70B5EF0A0D2B9458FDFE9A38_gshared)(method);
}
// System.String DYPSOUyTIlXrPcRjZ3r.YutsJ9yIcISgtVKmUQD::wVeySGswtG(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* YutsJ9yIcISgtVKmUQD_wVeySGswtG_m7E70CA4DD2D5A165735C572B6DBFC1E02C14501A (YutsJ9yIcISgtVKmUQD_t703540E322FF7304C66DF1ACBAB1630065FEEC80* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_U20, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.String NIgwBWu6t2UHHFMUEHr.mVRvu6uocIktlmNOt0E::gnZLCuCXCj(System.String,System.Collections.SortedList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* mVRvu6uocIktlmNOt0E_gnZLCuCXCj_m9FF9C7BE8166D8A4F19007A91155F52768ACB1C0 (String_t* ___0_U20, SortedList_t847331629BA06B518F1B5203BD22B59746EDDBF3* ___1_U20, const RuntimeMethod* method) ;
// System.String NIgwBWu6t2UHHFMUEHr.mVRvu6uocIktlmNOt0E::JZZLOX7mCP(System.String,System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* mVRvu6uocIktlmNOt0E_JZZLOX7mCP_mD4CBF44080A40B46B625B51FC361DD88505B8290 (String_t* ___0_U20, RuntimeObject* ___1_U20, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String NIgwBWu6t2UHHFMUEHr.mVRvu6uocIktlmNOt0E::bKrLSO0s1T(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* mVRvu6uocIktlmNOt0E_bKrLSO0s1T_m2F96D3B5A795B3D3CF58C4BB4CDB8A2F8002E84F (String_t* ___0_U20, String_t* ___1_U20, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.String ErXoYKIcyubivf6xwHJP.TLct8kIcqpBbgiZ2HelB::k03IST4cQQt(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TLct8kIcqpBbgiZ2HelB_k03IST4cQQt_mB0DFE8192EB3F2CC890B6655DD516AF19DF6F1F8 (RuntimeObject* ___0_U20, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950 (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Type HbifHiIyCnWmHH0USMVu.pRIki9IyStHqBwnoedAT::DQfIyHRc8NG(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* pRIki9IyStHqBwnoedAT_DQfIyHRc8NG_mEF1B4B21EAA6B5963808D199E97EF916FEACD9A0 (Type_t* ___0_U20, const RuntimeMethod* method) ;
// System.Reflection.MemberInfo zOVnWsIj6BdRJR0Jjx6V.Pxdx4NIjoIfmCFcUEecO::jxBI0wbWFxF(System.Type,System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfo_t* Pxdx4NIjoIfmCFcUEecO_jxBI0wbWFxF_mC507F4981E0CCE34CCA28C89219287E4A68B7665 (Type_t* ___0_U20, MemberInfo_t* ___1_U20, const RuntimeMethod* method) ;
// System.Object oksDuFIbspCdm9QQmdiA.MCOuyCIb1l1L0qFaD25v::KFKIalOiXcy()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline (MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21* __this, const RuntimeMethod* method) ;
// System.Object System.Convert::ChangeType(System.Object,System.Type,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Convert_ChangeType_m2AA053891B5D1BD5CA7689B72EE5ADC95CD3E14B (RuntimeObject* ___0_value, Type_t* ___1_conversionType, RuntimeObject* ___2_provider, const RuntimeMethod* method) ;
// ymgEqJIU5emOkIEDa8WI.dlBNo8IUdTB9OvDiafIL`1<bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ> KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk::E4iIwWxobRy(System.Collections.Generic.IEnumerable`1<bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* x5rwaxIU1lgC3gy0hDDk_E4iIwWxobRy_m766C659A23C2D490B19343D3F373DEF7998D5069 (RuntimeObject* ___0_U20, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.String QmbtPuI0fF9IhiF5bYfS.fduRGHI0VRd5tjqPwiyf::TgdI04liofE(System.String,System.IFormatProvider,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* fduRGHI0VRd5tjqPwiyf_TgdI04liofE_m55D122CB0DDEE25A6C3E7C0D3D2D1202166C83AD (String_t* ___0_U20, RuntimeObject* ___1_U20, RuntimeObject* ___2_U20, RuntimeObject* ___3_U20, const RuntimeMethod* method) ;
// System.Void System.InvalidCastException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644 (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Boolean zOVnWsIj6BdRJR0Jjx6V.Pxdx4NIjoIfmCFcUEecO::oXpI0lHqJLP(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pxdx4NIjoIfmCFcUEecO_oXpI0lHqJLP_mAAB5095DD7B77D6AE0CED69929E2AA87A9F877AA (Type_t* ___0_U20, const RuntimeMethod* method) ;
// System.Type System.Nullable::GetUnderlyingType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8 (Type_t* ___0_nullableType, const RuntimeMethod* method) ;
// System.Void FZ33l5IenH8gFlwB7CLv.jaq7wfIex8bBMQFOq7l9`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<qVi4JtIeMIHL7A87RCCU>)
inline void jaq7wfIex8bBMQFOq7l9_1__ctor_m20170059DA89337524F4FE98B0A66B2F87904A2D (jaq7wfIex8bBMQFOq7l9_1_t173A3EF7D605437B902F320ED702CC71F2C3E02D* __this, RuntimeObject* ___0_U20, const RuntimeMethod* method)
{
	((  void (*) (jaq7wfIex8bBMQFOq7l9_1_t173A3EF7D605437B902F320ED702CC71F2C3E02D*, RuntimeObject*, const RuntimeMethod*))jaq7wfIex8bBMQFOq7l9_1__ctor_m20170059DA89337524F4FE98B0A66B2F87904A2D_gshared)(__this, ___0_U20, method);
}
// System.Boolean IB4itGIH0KGn59sj2yJ8.kgvn0uIHjZTRpwB26bcc::VAOIHU2nfvV(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool kgvn0uIHjZTRpwB26bcc_VAOIHU2nfvV_m5958007A2EB1A6CB8DB05DD7C5896608D89F384C (Type_t* ___0_U20, const RuntimeMethod* method) ;
// System.Reflection.ConstructorInfo zOVnWsIj6BdRJR0Jjx6V.Pxdx4NIjoIfmCFcUEecO::hoeI0IMX0gv(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* Pxdx4NIjoIfmCFcUEecO_hoeI0IMX0gv_m26E5055F2C0F4CEF3A7FB1B6FF88702C237EE64C (Type_t* ___0_U20, bool ___1_U20, const RuntimeMethod* method) ;
// System.Object Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq::tHKICSFQrC9(t6aCVRIkpp2SgR9piVLE.upoLbGIkG3EWbjXCVTnk,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* yu6shyISV0cgPHoH4Fuq_tHKICSFQrC9_mBCA8DF0CB2754A434F6B819FCBCBD3CD777624AB (yu6shyISV0cgPHoH4Fuq_t0A16977B178E0CC5C1EE91476FD242F00AC3E0B3* __this, upoLbGIkG3EWbjXCVTnk_t733914D925D667921802DE07AFE63A3663751D38* ___0_U20, Type_t* ___1_U20, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Linq.Expressions.ParameterExpression>()
inline ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_inline (const RuntimeMethod* method)
{
	return ((  ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::.ctor(System.Int32)
inline void List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___0_capacity, method);
}
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::Add(T)
inline void List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::PushParameters(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76 (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, RuntimeObject* ___0_parameters, const RuntimeMethod* method) ;
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::PopParameters(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9 (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, RuntimeObject* ___0_parameters, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::.ctor()
inline void HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::Add(T)
inline bool HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69 (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Push(T)
inline void Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*, HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___0_item, method);
}
// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Pop()
inline HashSet_1_t068F5201D923072F46716204841D21328FE6218D* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5 (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, const RuntimeMethod* method)
{
	return ((  HashSet_1_t068F5201D923072F46716204841D21328FE6218D* (*) (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
// System.Void UniRx.MainThreadDispatcher::StartEndOfFrameMicroCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher_StartEndOfFrameMicroCoroutine_mF882DADDE3048CBA9A2B2CFB706C7DA7732B4880 (RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void UniRx.MainThreadDispatcher::StartFixedUpdateMicroCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher_StartFixedUpdateMicroCoroutine_m7B5A7DD59FB62E461CDDEFFE178DBDE0A6570DF9 (RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void UniRx.MainThreadDispatcher::Post(System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher_Post_m34EA78B903F2F3282D9B5080E7C7FDEBB36EB25F (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_action, RuntimeObject* ___1_state, const RuntimeMethod* method) ;
// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItem_mE534D14C47699D1D37288AE0710B19FC7EC02BAB (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___0_callBack, RuntimeObject* ___1_state, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63 (StringBuilder_t* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void U1L86SI2NwC7tKFjSTyx.Y4pbxKI2pVJcC3viTGJn/XcYrWcI1nMP0aZ9SOJym::GFhI1jpcadG<System.Object>(nReNSpI10p5vfExj6dJF)
inline void XcYrWcI1nMP0aZ9SOJym_GFhI1jpcadG_TisRuntimeObject_m33FEB8F4D58C208BB0752F26E240DB436BB07B1B (XcYrWcI1nMP0aZ9SOJym_t400828C2B906FD2D8CB28B5628BB216290E61AD9* __this, RuntimeObject* ___0_jmFbStI1HchJKTwD6HcJ, const RuntimeMethod* method)
{
	((  void (*) (XcYrWcI1nMP0aZ9SOJym_t400828C2B906FD2D8CB28B5628BB216290E61AD9*, RuntimeObject*, const RuntimeMethod*))XcYrWcI1nMP0aZ9SOJym_GFhI1jpcadG_TisRuntimeObject_m33FEB8F4D58C208BB0752F26E240DB436BB07B1B_gshared)(__this, ___0_jmFbStI1HchJKTwD6HcJ, method);
}
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F (StringBuilder_t* __this, String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void U1L86SI2NwC7tKFjSTyx.Y4pbxKI2pVJcC3viTGJn/XcYrWcI1nMP0aZ9SOJym::OxiI1Gvhneh<System.Object>(W66fjsI1p129343Id4qs,System.String)
inline void XcYrWcI1nMP0aZ9SOJym_OxiI1Gvhneh_TisRuntimeObject_mF7E0971A3C9433DC6C6B9DB228206E7356061200 (XcYrWcI1nMP0aZ9SOJym_t400828C2B906FD2D8CB28B5628BB216290E61AD9* __this, RuntimeObject* ___0_lKKTTnI1Nny4TjhlWcyu, String_t* ___1_U20, const RuntimeMethod* method)
{
	((  void (*) (XcYrWcI1nMP0aZ9SOJym_t400828C2B906FD2D8CB28B5628BB216290E61AD9*, RuntimeObject*, String_t*, const RuntimeMethod*))XcYrWcI1nMP0aZ9SOJym_OxiI1Gvhneh_TisRuntimeObject_mF7E0971A3C9433DC6C6B9DB228206E7356061200_gshared)(__this, ___0_lKKTTnI1Nny4TjhlWcyu, ___1_U20, method);
}
// System.Void U1L86SI2NwC7tKFjSTyx.Y4pbxKI2pVJcC3viTGJn/XcYrWcI1nMP0aZ9SOJym::hJhI1WXOpCn<System.Object>(wM2cQuI1v0RHhwpb3ne1,System.Int32)
inline void XcYrWcI1nMP0aZ9SOJym_hJhI1WXOpCn_TisRuntimeObject_mED124B146005B472A524E98E89972D2CE7E73061 (XcYrWcI1nMP0aZ9SOJym_t400828C2B906FD2D8CB28B5628BB216290E61AD9* __this, RuntimeObject* ___0_PFt6iJI1uGPQVr2pulFj, int32_t ___1_U20, const RuntimeMethod* method)
{
	((  void (*) (XcYrWcI1nMP0aZ9SOJym_t400828C2B906FD2D8CB28B5628BB216290E61AD9*, RuntimeObject*, int32_t, const RuntimeMethod*))XcYrWcI1nMP0aZ9SOJym_hJhI1WXOpCn_TisRuntimeObject_mED124B146005B472A524E98E89972D2CE7E73061_gshared)(__this, ___0_PFt6iJI1uGPQVr2pulFj, ___1_U20, method);
}
// System.Void U1L86SI2NwC7tKFjSTyx.Y4pbxKI2pVJcC3viTGJn/XcYrWcI1nMP0aZ9SOJym::vLLI1LTniRs<System.Object>(k4yfdCI1BPrZqoKUPxKt,System.Int32,System.String)
inline void XcYrWcI1nMP0aZ9SOJym_vLLI1LTniRs_TisRuntimeObject_m150FFB7FFF52E1BCDE5DAC6E503BAA28D43F7955 (XcYrWcI1nMP0aZ9SOJym_t400828C2B906FD2D8CB28B5628BB216290E61AD9* __this, RuntimeObject* ___0_l2x17xI1tuExW5byebX4, int32_t ___1_U20, String_t* ___2_U20, const RuntimeMethod* method)
{
	((  void (*) (XcYrWcI1nMP0aZ9SOJym_t400828C2B906FD2D8CB28B5628BB216290E61AD9*, RuntimeObject*, int32_t, String_t*, const RuntimeMethod*))XcYrWcI1nMP0aZ9SOJym_vLLI1LTniRs_TisRuntimeObject_m150FFB7FFF52E1BCDE5DAC6E503BAA28D43F7955_gshared)(__this, ___0_l2x17xI1tuExW5byebX4, ___1_U20, ___2_U20, method);
}
// System.Boolean KF6VRRI3zhjwtJhAU8aD.eRMNUqI3r6AO0Det7vN1::oCSIjGK7urM<System.Object>(System.Collections.Generic.IList`1<DSNkhFIjpGSFvjcsK9LT>,System.Collections.Generic.IEnumerable`1<DSNkhFIjpGSFvjcsK9LT>,System.Collections.Generic.IEqualityComparer`1<DSNkhFIjpGSFvjcsK9LT>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool eRMNUqI3r6AO0Det7vN1_oCSIjGK7urM_TisRuntimeObject_mDA4A5286A4E5A938717AF75815E1EB8522FC9FFE_gshared (RuntimeObject* ___0_U20, RuntimeObject* ___1_U20, RuntimeObject* ___2_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		V_0 = (bool)1;
		RuntimeObject* L_0 = ___1_U20;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, il2cpp_rgctx_data(method->rgctx_data, 0), L_0);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0028:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_1;
					if (!L_2)
					{
						goto IL_0031;
					}
				}
				{
					RuntimeObject* L_3 = V_1;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_0031:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001e_1;
			}

IL_000b_1:
			{
				RuntimeObject* L_4 = V_1;
				NullCheck(L_4);
				RuntimeObject* L_5;
				L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(method->rgctx_data, 2), L_4);
				V_2 = L_5;
				RuntimeObject* L_6 = ___0_U20;
				RuntimeObject* L_7 = V_2;
				RuntimeObject* L_8 = ___2_U20;
				bool L_9;
				L_9 = ((  bool (*) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 4));
				if (L_9)
				{
					goto IL_001e_1;
				}
			}
			{
				V_0 = (bool)0;
			}

IL_001e_1:
			{
				RuntimeObject* L_10 = V_1;
				NullCheck((RuntimeObject*)L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
				if (L_11)
				{
					goto IL_000b_1;
				}
			}
			{
				goto IL_0032;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0032:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
// System.Void KF6VRRI3zhjwtJhAU8aD.eRMNUqI3r6AO0Det7vN1::xnsIjkmQeqZ<System.Object>(System.Collections.Generic.IList`1<Bv87NKIjccAxdAWjGAy5>,System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void eRMNUqI3r6AO0Det7vN1_xnsIjkmQeqZ_TisRuntimeObject_mE1848BEFD6A899B4E25DCDAEA37E776D476A2124_gshared (RuntimeObject* ___0_U20, RuntimeObject* ___1_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E65690939804B15F12B14D2152EA638DCB3BF40);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_U20;
		qHNsI1IHbt6MSvUAaMXD_gO3IHmVPH3W_m0DF8EA259C270017610BAAF1AA3F282D2D9FCB09((RuntimeObject*)L_0, _stringLiteral0E65690939804B15F12B14D2152EA638DCB3BF40, NULL);
		RuntimeObject* L_1 = ___0_U20;
		RuntimeObject* L_2 = ___1_U20;
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		((  void (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
// System.Func`2<uDpw85IYn1g27u8op4Jr,System.Object> V5NdV2IYxrYnyLRsSQw0.fJYLGxIYYISuLexSUp31::EAwIYMLetBS<System.Object>(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_tACBF5A1656250800CE861707354491F0611F6624* fJYLGxIYYISuLexSUp31_EAwIYMLetBS_TisRuntimeObject_mEBDF8A4020A114B6897E3E1A27A27A5FE9E2A206_gshared (fJYLGxIYYISuLexSUp31_tDDED012884E24BD3E99AB370F7B613BC83DAB3FB* __this, MemberInfo_t* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PropertyInfo_t* V_0 = NULL;
	FieldInfo_t* V_1 = NULL;
	{
		MemberInfo_t* L_0 = ___0_U20;
		V_0 = ((PropertyInfo_t*)IsInstClass((RuntimeObject*)L_0, PropertyInfo_t_il2cpp_TypeInfo_var));
		PropertyInfo_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		PropertyInfo_t* L_2 = V_0;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_3;
		L_3 = GenericVirtualFuncInvoker1< Func_2_tACBF5A1656250800CE861707354491F0611F6624*, PropertyInfo_t* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_2);
		return L_3;
	}

IL_0012:
	{
		MemberInfo_t* L_4 = ___0_U20;
		V_1 = ((FieldInfo_t*)IsInstClass((RuntimeObject*)L_4, FieldInfo_t_il2cpp_TypeInfo_var));
		FieldInfo_t* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		FieldInfo_t* L_6 = V_1;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_7;
		L_7 = GenericVirtualFuncInvoker1< Func_2_tACBF5A1656250800CE861707354491F0611F6624*, FieldInfo_t* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_6);
		return L_7;
	}

IL_0024:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_8;
		L_8 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		MemberInfo_t* L_9 = ___0_U20;
		String_t* L_10;
		L_10 = fduRGHI0VRd5tjqPwiyf_PWGI0XXDPfM_m1F2489565C0855522BD6E3E10A3F89F17973E101(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7FBBFFB8EE0FB972E2B09691037C46596893A5A)), (RuntimeObject*)L_8, (RuntimeObject*)L_9, NULL);
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fJYLGxIYYISuLexSUp31_EAwIYMLetBS_TisRuntimeObject_mEBDF8A4020A114B6897E3E1A27A27A5FE9E2A206_RuntimeMethod_var)));
	}
}
// System.Action`2<pmiI1WIYjDHaNOAsQMnQ,System.Object> V5NdV2IYxrYnyLRsSQw0.fJYLGxIYYISuLexSUp31::IIDIY37DNW5<System.Object>(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* fJYLGxIYYISuLexSUp31_IIDIY37DNW5_TisRuntimeObject_mD6686628D8E8818115BACFB870926CC85B60C374_gshared (fJYLGxIYYISuLexSUp31_tDDED012884E24BD3E99AB370F7B613BC83DAB3FB* __this, MemberInfo_t* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PropertyInfo_t* V_0 = NULL;
	FieldInfo_t* V_1 = NULL;
	{
		MemberInfo_t* L_0 = ___0_U20;
		V_0 = ((PropertyInfo_t*)IsInstClass((RuntimeObject*)L_0, PropertyInfo_t_il2cpp_TypeInfo_var));
		PropertyInfo_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		PropertyInfo_t* L_2 = V_0;
		Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* L_3;
		L_3 = GenericVirtualFuncInvoker1< Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C*, PropertyInfo_t* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_2);
		return L_3;
	}

IL_0012:
	{
		MemberInfo_t* L_4 = ___0_U20;
		V_1 = ((FieldInfo_t*)IsInstClass((RuntimeObject*)L_4, FieldInfo_t_il2cpp_TypeInfo_var));
		FieldInfo_t* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		FieldInfo_t* L_6 = V_1;
		Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* L_7;
		L_7 = GenericVirtualFuncInvoker1< Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C*, FieldInfo_t* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_6);
		return L_7;
	}

IL_0024:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_8;
		L_8 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		MemberInfo_t* L_9 = ___0_U20;
		String_t* L_10;
		L_10 = fduRGHI0VRd5tjqPwiyf_PWGI0XXDPfM_m1F2489565C0855522BD6E3E10A3F89F17973E101(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F9BACDA740D58784E6ACAE19F0F0BC32F753A58)), (RuntimeObject*)L_8, (RuntimeObject*)L_9, NULL);
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fJYLGxIYYISuLexSUp31_IIDIY37DNW5_TisRuntimeObject_mD6686628D8E8818115BACFB870926CC85B60C374_RuntimeMethod_var)));
	}
}
// kLNbQvIHCf9KmUR24ody QmbtPuI0fF9IhiF5bYfS.fduRGHI0VRd5tjqPwiyf::cVZIHSedywo<System.Object>(System.Collections.Generic.IEnumerable`1<kLNbQvIHCf9KmUR24ody>,System.Func`2<kLNbQvIHCf9KmUR24ody,System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* fduRGHI0VRd5tjqPwiyf_cVZIHSedywo_TisRuntimeObject_mD00D491FE4C9A6D95DD1F9B835D9807BAA18A466_gshared (RuntimeObject* ___0_U20, Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* ___1_U20, String_t* ___2_U20, const RuntimeMethod* method) 
{
	U3CU3Ec__DisplayClass15_0_1_tD3D27B917DD8CF6D0724B16958E15992FBA9237B* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass15_0_1_tD3D27B917DD8CF6D0724B16958E15992FBA9237B* L_0 = (U3CU3Ec__DisplayClass15_0_1_tD3D27B917DD8CF6D0724B16958E15992FBA9237B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (U3CU3Ec__DisplayClass15_0_1_tD3D27B917DD8CF6D0724B16958E15992FBA9237B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		U3CU3Ec__DisplayClass15_0_1_tD3D27B917DD8CF6D0724B16958E15992FBA9237B* L_1 = V_0;
		Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* L_2 = ___1_U20;
		NullCheck(L_1);
		L_1->___valueSelector_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___valueSelector_0), (void*)L_2);
		U3CU3Ec__DisplayClass15_0_1_tD3D27B917DD8CF6D0724B16958E15992FBA9237B* L_3 = V_0;
		String_t* L_4 = ___2_U20;
		NullCheck(L_3);
		L_3->___testValue_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___testValue_1), (void*)L_4);
		RuntimeObject* L_5 = ___0_U20;
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fduRGHI0VRd5tjqPwiyf_cVZIHSedywo_TisRuntimeObject_mD00D491FE4C9A6D95DD1F9B835D9807BAA18A466_RuntimeMethod_var)));
	}

IL_0022:
	{
		U3CU3Ec__DisplayClass15_0_1_tD3D27B917DD8CF6D0724B16958E15992FBA9237B* L_7 = V_0;
		NullCheck(L_7);
		Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* L_8 = (Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B*)L_7->___valueSelector_0;
		if (L_8)
		{
			goto IL_0035;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_9 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB2EAC54936C480056DBBB5B97FD1CFD1C79B1990)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fduRGHI0VRd5tjqPwiyf_cVZIHSedywo_TisRuntimeObject_mD00D491FE4C9A6D95DD1F9B835D9807BAA18A466_RuntimeMethod_var)));
	}

IL_0035:
	{
		RuntimeObject* L_10 = ___0_U20;
		U3CU3Ec__DisplayClass15_0_1_tD3D27B917DD8CF6D0724B16958E15992FBA9237B* L_11 = V_0;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_12 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_12);
		((  void (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_12, (RuntimeObject*)L_11, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_10, L_12, il2cpp_rgctx_method(method->rgctx_data, 5));
		V_1 = L_13;
		RuntimeObject* L_14 = V_1;
		int32_t L_15;
		L_15 = ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_14, il2cpp_rgctx_method(method->rgctx_data, 6));
		if ((((int32_t)L_15) > ((int32_t)1)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject* L_16 = V_1;
		RuntimeObject* L_17;
		L_17 = ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(L_16, il2cpp_rgctx_method(method->rgctx_data, 7));
		return L_17;
	}

IL_0058:
	{
		RuntimeObject* L_18 = ___0_U20;
		U3CU3Ec__DisplayClass15_0_1_tD3D27B917DD8CF6D0724B16958E15992FBA9237B* L_19 = V_0;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_20 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_20);
		((  void (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_20, (RuntimeObject*)L_19, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 8)), il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_21;
		L_21 = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_18, L_20, il2cpp_rgctx_method(method->rgctx_data, 5));
		RuntimeObject* L_22;
		L_22 = ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(L_21, il2cpp_rgctx_method(method->rgctx_data, 7));
		return L_22;
	}
}
// System.String d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw::IU42K55vkm<System.Object>(System.String,System.Object,System.Action`2<d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw,V4xsby2V15eK5KnoBcB>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ielsk72D5xwPeAW05dw_IU42K55vkm_TisRuntimeObject_mA67FF2B0FD3377F0889B48D868D407749428E1EB_gshared (ielsk72D5xwPeAW05dw_t47546E0125EF22A068A9F0F55F1F8C0455D54992* __this, String_t* ___0_U20, RuntimeObject* ___1_U20, Action_2_tFA8292EEB847839DD04E49505401FA54540D6DE6* ___2_U20, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_U20;
		RuntimeObject* L_1 = ___1_U20;
		Action_2_tFA8292EEB847839DD04E49505401FA54540D6DE6* L_2 = ___2_U20;
		zrxlAv2918OHalIJrox_1_t852A9A27156312E2C94A9D71BFCE5B1A9B45EEC4* L_3 = (zrxlAv2918OHalIJrox_1_t852A9A27156312E2C94A9D71BFCE5B1A9B45EEC4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_3);
		((  void (*) (zrxlAv2918OHalIJrox_1_t852A9A27156312E2C94A9D71BFCE5B1A9B45EEC4*, Action_2_tFA8292EEB847839DD04E49505401FA54540D6DE6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_3, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		String_t* L_4;
		L_4 = ((  String_t* (*) (ielsk72D5xwPeAW05dw_t47546E0125EF22A068A9F0F55F1F8C0455D54992*, String_t*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(__this, L_0, L_1, (RuntimeObject*)L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_4;
	}
}
// System.Void d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw::UIJ2Rqko4N<System.Object>(System.String,System.Action`2<d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw,CKr6O92h4xVv4ffaIJH>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ielsk72D5xwPeAW05dw_UIJ2Rqko4N_TisRuntimeObject_m4CC6EDC21FC7A75A02A61634BAF3B4049ACF550A_gshared (ielsk72D5xwPeAW05dw_t47546E0125EF22A068A9F0F55F1F8C0455D54992* __this, String_t* ___0_U20, Action_2_tFA8292EEB847839DD04E49505401FA54540D6DE6* ___1_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_U20;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		Action_2_tFA8292EEB847839DD04E49505401FA54540D6DE6* L_2 = ___1_U20;
		zrxlAv2918OHalIJrox_1_t852A9A27156312E2C94A9D71BFCE5B1A9B45EEC4* L_3 = (zrxlAv2918OHalIJrox_1_t852A9A27156312E2C94A9D71BFCE5B1A9B45EEC4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_3);
		((  void (*) (zrxlAv2918OHalIJrox_1_t852A9A27156312E2C94A9D71BFCE5B1A9B45EEC4*, Action_2_tFA8292EEB847839DD04E49505401FA54540D6DE6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_3, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		((  void (*) (ielsk72D5xwPeAW05dw_t47546E0125EF22A068A9F0F55F1F8C0455D54992*, String_t*, String_t*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(__this, L_0, L_1, (RuntimeObject*)L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
// System.Void d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw::UIldIdyC3Y<System.Object>(System.String,System.String,ClY49r2jGyRQaUB45Qk.wKmSPO23u9HBe4uNf5L)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ielsk72D5xwPeAW05dw_UIldIdyC3Y_TisRuntimeObject_mDFEDD3329B2A86264C67DA3638AD0CA656C99112_gshared (ielsk72D5xwPeAW05dw_t47546E0125EF22A068A9F0F55F1F8C0455D54992* __this, String_t* ___0_U20, String_t* ___1_U20, RuntimeObject* ___2_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m0E72266123E55C107E6F77DD347B35B840808475_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Dictionary_2_t46E189FD1C055D0FB6AC3822A2AD8DC5A1AFFBE6* V_1 = NULL;
	{
		V_0 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004b:
			{// begin finally (depth: 1)
				{
					bool L_0 = V_0;
					if (!L_0)
					{
						goto IL_0057;
					}
				}
				{
					Dictionary_2_t46E189FD1C055D0FB6AC3822A2AD8DC5A1AFFBE6* L_1 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_1, NULL);
				}

IL_0057:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Dictionary_2_t46E189FD1C055D0FB6AC3822A2AD8DC5A1AFFBE6* L_2 = (Dictionary_2_t46E189FD1C055D0FB6AC3822A2AD8DC5A1AFFBE6*)__this->___G68d7seUXM_6;
				Dictionary_2_t46E189FD1C055D0FB6AC3822A2AD8DC5A1AFFBE6* L_3 = L_2;
				V_1 = L_3;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_3, (&V_0), NULL);
				String_t* L_4 = ___1_U20;
				bool L_5;
				L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
				if (!L_5)
				{
					goto IL_002e_1;
				}
			}
			{
				Dictionary_2_t46E189FD1C055D0FB6AC3822A2AD8DC5A1AFFBE6* L_6 = (Dictionary_2_t46E189FD1C055D0FB6AC3822A2AD8DC5A1AFFBE6*)__this->___G68d7seUXM_6;
				String_t* L_7 = ___0_U20;
				RuntimeObject* L_8 = ___2_U20;
				NullCheck(L_6);
				Dictionary_2_Add_m0E72266123E55C107E6F77DD347B35B840808475(L_6, L_7, L_8, Dictionary_2_Add_m0E72266123E55C107E6F77DD347B35B840808475_RuntimeMethod_var);
				goto IL_0046_1;
			}

IL_002e_1:
			{
				Dictionary_2_t46E189FD1C055D0FB6AC3822A2AD8DC5A1AFFBE6* L_9 = (Dictionary_2_t46E189FD1C055D0FB6AC3822A2AD8DC5A1AFFBE6*)__this->___G68d7seUXM_6;
				String_t* L_10 = ___0_U20;
				String_t* L_11 = ___1_U20;
				String_t* L_12;
				L_12 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8, (RuntimeObject*)L_10, (RuntimeObject*)L_11, NULL);
				RuntimeObject* L_13 = ___2_U20;
				NullCheck(L_9);
				Dictionary_2_Add_m0E72266123E55C107E6F77DD347B35B840808475(L_9, L_12, L_13, Dictionary_2_Add_m0E72266123E55C107E6F77DD347B35B840808475_RuntimeMethod_var);
			}

IL_0046_1:
			{
				goto IL_0058;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0058:
	{
		return;
	}
}
// System.String d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw::bdI24eqTaf<System.Object>(System.String,System.Object,System.Action`3<d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw,X6t3Zx2rYo4Wi1IALDn,System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ielsk72D5xwPeAW05dw_bdI24eqTaf_TisRuntimeObject_m1921C419638510716A4D6766E10BEBC9D562BC0A_gshared (ielsk72D5xwPeAW05dw_t47546E0125EF22A068A9F0F55F1F8C0455D54992* __this, String_t* ___0_U20, RuntimeObject* ___1_U20, Action_3_t8542420B0F1565B0770BBE4588001A8EBA78571E* ___2_U20, RuntimeObject* ___3_U20, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_U20;
		RuntimeObject* L_1 = ___1_U20;
		Action_3_t8542420B0F1565B0770BBE4588001A8EBA78571E* L_2 = ___2_U20;
		RuntimeObject* L_3 = ___3_U20;
		t8ll5s2a10OPnANcNy6_1_tF3F1B0B7DF879A38871AD6AB233274DD84BD9AAE* L_4 = (t8ll5s2a10OPnANcNy6_1_tF3F1B0B7DF879A38871AD6AB233274DD84BD9AAE*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_4);
		((  void (*) (t8ll5s2a10OPnANcNy6_1_tF3F1B0B7DF879A38871AD6AB233274DD84BD9AAE*, Action_3_t8542420B0F1565B0770BBE4588001A8EBA78571E*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		String_t* L_5;
		L_5 = ((  String_t* (*) (ielsk72D5xwPeAW05dw_t47546E0125EF22A068A9F0F55F1F8C0455D54992*, String_t*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(__this, L_0, L_1, (RuntimeObject*)L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_5;
	}
}
// System.String d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw::g7J2oMZh3Y<System.Object>(System.String,System.Object,System.Action`2<System.String,SU0n4g26VVnFPwn7Ufm>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ielsk72D5xwPeAW05dw_g7J2oMZh3Y_TisRuntimeObject_m8F9ACC787F08C97262F443A7FF038A85D8F87BBB_gshared (ielsk72D5xwPeAW05dw_t47546E0125EF22A068A9F0F55F1F8C0455D54992* __this, String_t* ___0_U20, RuntimeObject* ___1_U20, Action_2_t8A5691BDCBB15BBFE228BF21B998EF643FADA7E7* ___2_U20, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_U20;
		RuntimeObject* L_1 = ___1_U20;
		Action_2_t8A5691BDCBB15BBFE228BF21B998EF643FADA7E7* L_2 = ___2_U20;
		RAYjK82ucV0wfW3vnRp_1_tCBA0DF7990608945A434758A8B224555D0154505* L_3 = (RAYjK82ucV0wfW3vnRp_1_tCBA0DF7990608945A434758A8B224555D0154505*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_3);
		((  void (*) (RAYjK82ucV0wfW3vnRp_1_tCBA0DF7990608945A434758A8B224555D0154505*, Action_2_t8A5691BDCBB15BBFE228BF21B998EF643FADA7E7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_3, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		String_t* L_4;
		L_4 = ((  String_t* (*) (ielsk72D5xwPeAW05dw_t47546E0125EF22A068A9F0F55F1F8C0455D54992*, String_t*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(__this, L_0, L_1, (RuntimeObject*)L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_4;
	}
}
// System.String d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw::mk42zbbp7Q<System.Object>(System.String,System.Object,ClY49r2jGyRQaUB45Qk.wKmSPO23u9HBe4uNf5L)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ielsk72D5xwPeAW05dw_mk42zbbp7Q_TisRuntimeObject_mEA29EBCB49D244AE62D48524E2D262C8717B78BD_gshared (ielsk72D5xwPeAW05dw_t47546E0125EF22A068A9F0F55F1F8C0455D54992* __this, String_t* ___0_U20, RuntimeObject* ___1_U20, RuntimeObject* ___2_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NK4HE7gXSdJsW4cE5Py_tAB00810ABFC49DCBA40A8F9A4A0C3F34A3A83198_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34E31A874682C1BAC752102C9E9839AE896533E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ielsk72D5xwPeAW05dw_t47546E0125EF22A068A9F0F55F1F8C0455D54992_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___0_U20;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ielsk72D5xwPeAW05dw_mk42zbbp7Q_TisRuntimeObject_mEA29EBCB49D244AE62D48524E2D262C8717B78BD_RuntimeMethod_var)));
	}

IL_0016:
	{
		il2cpp_codegen_runtime_class_init_inline(ielsk72D5xwPeAW05dw_t47546E0125EF22A068A9F0F55F1F8C0455D54992_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_3 = ((ielsk72D5xwPeAW05dw_t47546E0125EF22A068A9F0F55F1F8C0455D54992_StaticFields*)il2cpp_codegen_static_fields_for(ielsk72D5xwPeAW05dw_t47546E0125EF22A068A9F0F55F1F8C0455D54992_il2cpp_TypeInfo_var))->___Ipddew3hOW_5;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_3, ((int32_t)1000), ((int32_t)9999));
		V_0 = L_4;
		String_t* L_5 = ___0_U20;
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		RuntimeObject* L_7 = ___2_U20;
		((  void (*) (ielsk72D5xwPeAW05dw_t47546E0125EF22A068A9F0F55F1F8C0455D54992*, String_t*, String_t*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 0));
		RuntimeObject* L_8 = ___1_U20;
		if (!L_8)
		{
			goto IL_009a;
		}
	}
	{
		RuntimeObject* L_9 = ___1_U20;
		NullCheck(L_9);
		Type_t* L_10;
		L_10 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(NK4HE7gXSdJsW4cE5Py_tAB00810ABFC49DCBA40A8F9A4A0C3F34A3A83198_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = NK4HE7gXSdJsW4cE5Py_SSm2OK3dvu_m20FC9D87A1DCC15910B7D4CA652B3DA61B3F0A31(L_10, NULL);
		if (L_11)
		{
			goto IL_0078;
		}
	}
	{
		TeYmbLhOx0lsZD78M9B_tF5B768209158D17137CD5677636A3D00C5FBEB45* L_12 = (TeYmbLhOx0lsZD78M9B_tF5B768209158D17137CD5677636A3D00C5FBEB45*)__this->___lArd9VOM4n_0;
		String_t* L_13 = ___0_U20;
		int32_t L_14 = V_0;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		RuntimeObject* L_17 = ___1_U20;
		String_t* L_18;
		L_18 = VirtualFuncInvoker1< String_t*, RuntimeObject* >::Invoke(6 /* System.String d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw::HfdIoEmTEwR(System.Object) */, __this, L_17);
		String_t* L_19;
		L_19 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral34E31A874682C1BAC752102C9E9839AE896533E9, (RuntimeObject*)L_13, L_16, (RuntimeObject*)L_18, NULL);
		NullCheck(L_12);
		TeYmbLhOx0lsZD78M9B_Send_m58A4A27DE452509A629D20CE450A5422BBD1951E(L_12, L_19, NULL);
		goto IL_00b6;
	}

IL_0078:
	{
		TeYmbLhOx0lsZD78M9B_tF5B768209158D17137CD5677636A3D00C5FBEB45* L_20 = (TeYmbLhOx0lsZD78M9B_tF5B768209158D17137CD5677636A3D00C5FBEB45*)__this->___lArd9VOM4n_0;
		String_t* L_21 = ___0_U20;
		int32_t L_22 = V_0;
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_23);
		RuntimeObject* L_25 = ___1_U20;
		String_t* L_26;
		L_26 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral34E31A874682C1BAC752102C9E9839AE896533E9, (RuntimeObject*)L_21, L_24, L_25, NULL);
		NullCheck(L_20);
		TeYmbLhOx0lsZD78M9B_Send_m58A4A27DE452509A629D20CE450A5422BBD1951E(L_20, L_26, NULL);
		goto IL_00b6;
	}

IL_009a:
	{
		TeYmbLhOx0lsZD78M9B_tF5B768209158D17137CD5677636A3D00C5FBEB45* L_27 = (TeYmbLhOx0lsZD78M9B_tF5B768209158D17137CD5677636A3D00C5FBEB45*)__this->___lArd9VOM4n_0;
		String_t* L_28 = ___0_U20;
		int32_t L_29 = V_0;
		int32_t L_30 = L_29;
		RuntimeObject* L_31 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_30);
		String_t* L_32;
		L_32 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8, (RuntimeObject*)L_28, L_31, NULL);
		NullCheck(L_27);
		TeYmbLhOx0lsZD78M9B_Send_m58A4A27DE452509A629D20CE450A5422BBD1951E(L_27, L_32, NULL);
	}

IL_00b6:
	{
		String_t* L_33;
		L_33 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		return L_33;
	}
}
// System.Void d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw::qVr2QrdDQw<System.Object>(System.String,System.Action`1<JrQJJH25MAhu2CCwLPt>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ielsk72D5xwPeAW05dw_qVr2QrdDQw_TisRuntimeObject_mEA0557CB6437F3BA4805425FD1777C926F689D06_gshared (ielsk72D5xwPeAW05dw_t47546E0125EF22A068A9F0F55F1F8C0455D54992* __this, String_t* ___0_U20, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___1_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_U20;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___1_U20;
		cleVNS2pPiHI8wG0t07_1_tC4A2A6DC11A53A7303AA63D0F64B4F993F068DF3* L_3 = (cleVNS2pPiHI8wG0t07_1_tC4A2A6DC11A53A7303AA63D0F64B4F993F068DF3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_3);
		((  void (*) (cleVNS2pPiHI8wG0t07_1_tC4A2A6DC11A53A7303AA63D0F64B4F993F068DF3*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_3, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		((  void (*) (ielsk72D5xwPeAW05dw_t47546E0125EF22A068A9F0F55F1F8C0455D54992*, String_t*, String_t*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(__this, L_0, L_1, (RuntimeObject*)L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
// System.String d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw::wnR21CPf8T<System.Object>(System.String,System.Object,System.Action`1<FvMqRU2sp1GmRDAb1dd>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ielsk72D5xwPeAW05dw_wnR21CPf8T_TisRuntimeObject_m6E95E29FC990702F1FADD866353C68356BA4261C_gshared (ielsk72D5xwPeAW05dw_t47546E0125EF22A068A9F0F55F1F8C0455D54992* __this, String_t* ___0_U20, RuntimeObject* ___1_U20, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___2_U20, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_U20;
		RuntimeObject* L_1 = ___1_U20;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___2_U20;
		cleVNS2pPiHI8wG0t07_1_tC4A2A6DC11A53A7303AA63D0F64B4F993F068DF3* L_3 = (cleVNS2pPiHI8wG0t07_1_tC4A2A6DC11A53A7303AA63D0F64B4F993F068DF3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_3);
		((  void (*) (cleVNS2pPiHI8wG0t07_1_tC4A2A6DC11A53A7303AA63D0F64B4F993F068DF3*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_3, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		String_t* L_4;
		L_4 = ((  String_t* (*) (ielsk72D5xwPeAW05dw_t47546E0125EF22A068A9F0F55F1F8C0455D54992*, String_t*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(__this, L_0, L_1, (RuntimeObject*)L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_4;
	}
}
// System.String d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw::yeW2fkccNX<System.Object>(System.String,System.Object,System.Action`3<d0n1Sl2Pq0hMoIjVKh8.ielsk72D5xwPeAW05dw,System.String,dwe6tE2XPSTCeP2fVkY>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ielsk72D5xwPeAW05dw_yeW2fkccNX_TisRuntimeObject_m27921E502477AA1CEC9AB74416D722DEEDBBFF04_gshared (ielsk72D5xwPeAW05dw_t47546E0125EF22A068A9F0F55F1F8C0455D54992* __this, String_t* ___0_U20, RuntimeObject* ___1_U20, Action_3_t7D62D811E7B031F7E64AA2C5A31C5D3197CD4D26* ___2_U20, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_U20;
		RuntimeObject* L_1 = ___1_U20;
		Action_3_t7D62D811E7B031F7E64AA2C5A31C5D3197CD4D26* L_2 = ___2_U20;
		PkE1Se2wUqeTx2BvAfd_1_tCAA822DDDF1A729EB38ADD4A922D9627B9740E08* L_3 = (PkE1Se2wUqeTx2BvAfd_1_tCAA822DDDF1A729EB38ADD4A922D9627B9740E08*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_3);
		((  void (*) (PkE1Se2wUqeTx2BvAfd_1_tCAA822DDDF1A729EB38ADD4A922D9627B9740E08*, Action_3_t7D62D811E7B031F7E64AA2C5A31C5D3197CD4D26*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_3, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		String_t* L_4;
		L_4 = ((  String_t* (*) (ielsk72D5xwPeAW05dw_t47546E0125EF22A068A9F0F55F1F8C0455D54992*, String_t*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(__this, L_0, L_1, (RuntimeObject*)L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_4;
	}
}
// System.String NIgwBWu6t2UHHFMUEHr.mVRvu6uocIktlmNOt0E::JAjLAC1t45<System.Object>(System.Byte[],System.String,System.String,UGngaYLIh0qDst6NmjU,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* mVRvu6uocIktlmNOt0E_JAjLAC1t45_TisRuntimeObject_m8AD0157557E0A5935778092DAEFA0DB37710D0EA_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_U20, String_t* ___1_U20, String_t* ___2_U20, RuntimeObject* ___3_r8cFH7LT5NQphnMg0pv, String_t* ___4_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlpDMbujQqgSL8Ynfso_tD4C1F11C9EF1B25C16253491FD2E68D909DFFD75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_GetInstance_mD4246965321EE63E2D488139AA4EAF3D59B73FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_tEEDB1C578D7C6F8A0F23D53671EA64F56500D4D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedList_t847331629BA06B518F1B5203BD22B59746EDDBF3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedList_t847331629BA06B518F1B5203BD22B59746EDDBF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	Type_t* V_5 = NULL;
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_1 = L_1;
		String_t* L_2 = ___1_U20;
		String_t* L_3;
		L_3 = mVRvu6uocIktlmNOt0E_RvOLZkWpCZ_mE0B9306F290246BE7FFAC9CAEE10789D5F695BD2(L_2, NULL);
		V_2 = L_3;
		String_t* L_4 = ___2_U20;
		String_t* L_5;
		L_5 = mVRvu6uocIktlmNOt0E_RvOLZkWpCZ_mE0B9306F290246BE7FFAC9CAEE10789D5F695BD2(L_4, NULL);
		V_3 = L_5;
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_4 = L_6;
	}
	try
	{// begin try (depth: 1)
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_tEEDB1C578D7C6F8A0F23D53671EA64F56500D4D4_il2cpp_TypeInfo_var);
		YutsJ9yIcISgtVKmUQD_t703540E322FF7304C66DF1ACBAB1630065FEEC80* L_7;
		L_7 = Singleton_1_get_GetInstance_mD4246965321EE63E2D488139AA4EAF3D59B73FFD(Singleton_1_get_GetInstance_mD4246965321EE63E2D488139AA4EAF3D59B73FFD_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_U20;
		NullCheck(L_7);
		String_t* L_9;
		L_9 = YutsJ9yIcISgtVKmUQD_wVeySGswtG_m7E70CA4DD2D5A165735C572B6DBFC1E02C14501A(L_7, L_8, NULL);
		V_4 = L_9;
		goto IL_0049;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0030;
		}
		throw e;
	}

CATCH_0030:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_10 = V_6;
		NullCheck((RuntimeObject*)L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5CC003E6E7B74677D42310BF0DC8F41625BA8B1F)), (RuntimeObject*)L_11, NULL);
		Exception_t* L_13 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&mVRvu6uocIktlmNOt0E_JAjLAC1t45_TisRuntimeObject_m8AD0157557E0A5935778092DAEFA0DB37710D0EA_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0049:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		V_5 = L_15;
		Type_t* L_16 = V_5;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (SortedList_t847331629BA06B518F1B5203BD22B59746EDDBF3_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_007c;
		}
	}
	{
		String_t* L_20 = V_1;
		RuntimeObject* L_21 = ___3_r8cFH7LT5NQphnMg0pv;
		String_t* L_22;
		L_22 = mVRvu6uocIktlmNOt0E_gnZLCuCXCj_m9FF9C7BE8166D8A4F19007A91155F52768ACB1C0(L_20, ((SortedList_t847331629BA06B518F1B5203BD22B59746EDDBF3*)IsInstClass((RuntimeObject*)L_21, SortedList_t847331629BA06B518F1B5203BD22B59746EDDBF3_il2cpp_TypeInfo_var)), NULL);
		V_1 = L_22;
		goto IL_00b5;
	}

IL_007c:
	{
		Type_t* L_23 = V_5;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		bool L_26;
		L_26 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_23, L_25, NULL);
		if (!L_26)
		{
			goto IL_00a3;
		}
	}
	{
		String_t* L_27 = V_1;
		RuntimeObject* L_28 = ___3_r8cFH7LT5NQphnMg0pv;
		String_t* L_29;
		L_29 = mVRvu6uocIktlmNOt0E_JZZLOX7mCP_mD4CBF44080A40B46B625B51FC361DD88505B8290(L_27, ((RuntimeObject*)IsInst((RuntimeObject*)L_28, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var)), NULL);
		V_1 = L_29;
		goto IL_00b5;
	}

IL_00a3:
	{
		Type_t* L_30 = V_5;
		String_t* L_31;
		L_31 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC4C398F46D1471B5DD572F0761F88E95EC4A3CC)), (RuntimeObject*)L_30, NULL);
		Exception_t* L_32 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_32);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_32, L_31, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&mVRvu6uocIktlmNOt0E_JAjLAC1t45_TisRuntimeObject_m8AD0157557E0A5935778092DAEFA0DB37710D0EA_RuntimeMethod_var)));
	}

IL_00b5:
	{
		StringBuilder_t* L_33 = V_0;
		String_t* L_34 = ___4_U20;
		String_t* L_35;
		L_35 = mVRvu6uocIktlmNOt0E_RvOLZkWpCZ_mE0B9306F290246BE7FFAC9CAEE10789D5F695BD2(L_34, NULL);
		NullCheck(L_33);
		StringBuilder_t* L_36;
		L_36 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_33, L_35, NULL);
		NullCheck(L_36);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_36, _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E, NULL);
		il2cpp_codegen_runtime_class_init_inline(BlpDMbujQqgSL8Ynfso_tD4C1F11C9EF1B25C16253491FD2E68D909DFFD75_il2cpp_TypeInfo_var);
		String_t* L_38 = ((BlpDMbujQqgSL8Ynfso_tD4C1F11C9EF1B25C16253491FD2E68D909DFFD75_StaticFields*)il2cpp_codegen_static_fields_for(BlpDMbujQqgSL8Ynfso_tD4C1F11C9EF1B25C16253491FD2E68D909DFFD75_il2cpp_TypeInfo_var))->___bDWuBiknr8_4;
		String_t* L_39;
		L_39 = mVRvu6uocIktlmNOt0E_RvOLZkWpCZ_mE0B9306F290246BE7FFAC9CAEE10789D5F695BD2(L_38, NULL);
		NullCheck(L_37);
		StringBuilder_t* L_40;
		L_40 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_37, L_39, NULL);
		NullCheck(L_40);
		StringBuilder_t* L_41;
		L_41 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_40, _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E, NULL);
		String_t* L_42 = ((BlpDMbujQqgSL8Ynfso_tD4C1F11C9EF1B25C16253491FD2E68D909DFFD75_StaticFields*)il2cpp_codegen_static_fields_for(BlpDMbujQqgSL8Ynfso_tD4C1F11C9EF1B25C16253491FD2E68D909DFFD75_il2cpp_TypeInfo_var))->___Rdput7RK5u_5;
		String_t* L_43;
		L_43 = mVRvu6uocIktlmNOt0E_RvOLZkWpCZ_mE0B9306F290246BE7FFAC9CAEE10789D5F695BD2(L_42, NULL);
		NullCheck(L_41);
		StringBuilder_t* L_44;
		L_44 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_41, L_43, NULL);
		NullCheck(L_44);
		StringBuilder_t* L_45;
		L_45 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_44, _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E, NULL);
		String_t* L_46 = ((BlpDMbujQqgSL8Ynfso_tD4C1F11C9EF1B25C16253491FD2E68D909DFFD75_StaticFields*)il2cpp_codegen_static_fields_for(BlpDMbujQqgSL8Ynfso_tD4C1F11C9EF1B25C16253491FD2E68D909DFFD75_il2cpp_TypeInfo_var))->___asBu96RCbH_6;
		String_t* L_47;
		L_47 = mVRvu6uocIktlmNOt0E_RvOLZkWpCZ_mE0B9306F290246BE7FFAC9CAEE10789D5F695BD2(L_46, NULL);
		NullCheck(L_45);
		StringBuilder_t* L_48;
		L_48 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_45, L_47, NULL);
		NullCheck(L_48);
		StringBuilder_t* L_49;
		L_49 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_48, _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E, NULL);
		String_t* L_50 = V_2;
		NullCheck(L_49);
		StringBuilder_t* L_51;
		L_51 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_49, L_50, NULL);
		NullCheck(L_51);
		StringBuilder_t* L_52;
		L_52 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_51, _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E, NULL);
		String_t* L_53 = V_3;
		NullCheck(L_52);
		StringBuilder_t* L_54;
		L_54 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_52, L_53, NULL);
		NullCheck(L_54);
		StringBuilder_t* L_55;
		L_55 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_54, _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E, NULL);
		String_t* L_56 = V_1;
		String_t* L_57;
		L_57 = mVRvu6uocIktlmNOt0E_RvOLZkWpCZ_mE0B9306F290246BE7FFAC9CAEE10789D5F695BD2(L_56, NULL);
		NullCheck(L_55);
		StringBuilder_t* L_58;
		L_58 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_55, L_57, NULL);
		String_t* L_59 = V_4;
		StringBuilder_t* L_60 = V_0;
		NullCheck((RuntimeObject*)L_60);
		String_t* L_61;
		L_61 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_60);
		String_t* L_62;
		L_62 = mVRvu6uocIktlmNOt0E_bKrLSO0s1T_m2F96D3B5A795B3D3CF58C4BB4CDB8A2F8002E84F(L_59, L_61, NULL);
		NullCheck(L_62);
		String_t* L_63;
		L_63 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_62, NULL);
		return L_63;
	}
}
// System.String NIgwBWu6t2UHHFMUEHr.mVRvu6uocIktlmNOt0E::UyquXBw0Ph<System.Object>(System.Byte[],System.String,System.String,BbUCF3u4c4QTa2bIfnO,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* mVRvu6uocIktlmNOt0E_UyquXBw0Ph_TisRuntimeObject_mD920299615A728CE0ED18AC717D7A0FFAC008771_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_U20, String_t* ___1_U20, String_t* ___2_U20, RuntimeObject* ___3_HXAGSgur6fKRAaMuY18, String_t* ___4_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlpDMbujQqgSL8Ynfso_tD4C1F11C9EF1B25C16253491FD2E68D909DFFD75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_GetInstance_mD4246965321EE63E2D488139AA4EAF3D59B73FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_tEEDB1C578D7C6F8A0F23D53671EA64F56500D4D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedList_t847331629BA06B518F1B5203BD22B59746EDDBF3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TLct8kIcqpBbgiZ2HelB_t4BAAACCA5CFAABC7F0F8178AA069273A33C0E2CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	Type_t* V_5 = NULL;
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_1 = L_1;
		String_t* L_2 = ___1_U20;
		String_t* L_3;
		L_3 = mVRvu6uocIktlmNOt0E_RvOLZkWpCZ_mE0B9306F290246BE7FFAC9CAEE10789D5F695BD2(L_2, NULL);
		V_2 = L_3;
		String_t* L_4 = ___2_U20;
		String_t* L_5;
		L_5 = mVRvu6uocIktlmNOt0E_RvOLZkWpCZ_mE0B9306F290246BE7FFAC9CAEE10789D5F695BD2(L_4, NULL);
		V_3 = L_5;
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_4 = L_6;
	}
	try
	{// begin try (depth: 1)
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_tEEDB1C578D7C6F8A0F23D53671EA64F56500D4D4_il2cpp_TypeInfo_var);
		YutsJ9yIcISgtVKmUQD_t703540E322FF7304C66DF1ACBAB1630065FEEC80* L_7;
		L_7 = Singleton_1_get_GetInstance_mD4246965321EE63E2D488139AA4EAF3D59B73FFD(Singleton_1_get_GetInstance_mD4246965321EE63E2D488139AA4EAF3D59B73FFD_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_U20;
		NullCheck(L_7);
		String_t* L_9;
		L_9 = YutsJ9yIcISgtVKmUQD_wVeySGswtG_m7E70CA4DD2D5A165735C572B6DBFC1E02C14501A(L_7, L_8, NULL);
		V_4 = L_9;
		goto IL_0049;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0030;
		}
		throw e;
	}

CATCH_0030:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_10 = V_6;
		NullCheck((RuntimeObject*)L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5CC003E6E7B74677D42310BF0DC8F41625BA8B1F)), (RuntimeObject*)L_11, NULL);
		Exception_t* L_13 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&mVRvu6uocIktlmNOt0E_UyquXBw0Ph_TisRuntimeObject_mD920299615A728CE0ED18AC717D7A0FFAC008771_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0049:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		V_5 = L_15;
		Type_t* L_16 = V_5;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (SortedList_t847331629BA06B518F1B5203BD22B59746EDDBF3_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (L_19)
		{
			goto IL_007b;
		}
	}
	{
		Type_t* L_20 = V_5;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		if (!L_23)
		{
			goto IL_0089;
		}
	}

IL_007b:
	{
		RuntimeObject* L_24 = ___3_HXAGSgur6fKRAaMuY18;
		il2cpp_codegen_runtime_class_init_inline(TLct8kIcqpBbgiZ2HelB_t4BAAACCA5CFAABC7F0F8178AA069273A33C0E2CB_il2cpp_TypeInfo_var);
		String_t* L_25;
		L_25 = TLct8kIcqpBbgiZ2HelB_k03IST4cQQt_mB0DFE8192EB3F2CC890B6655DD516AF19DF6F1F8(L_24, NULL);
		V_1 = L_25;
		goto IL_009b;
	}

IL_0089:
	{
		Type_t* L_26 = V_5;
		String_t* L_27;
		L_27 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC4C398F46D1471B5DD572F0761F88E95EC4A3CC)), (RuntimeObject*)L_26, NULL);
		Exception_t* L_28 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_28);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_28, L_27, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&mVRvu6uocIktlmNOt0E_UyquXBw0Ph_TisRuntimeObject_mD920299615A728CE0ED18AC717D7A0FFAC008771_RuntimeMethod_var)));
	}

IL_009b:
	{
		StringBuilder_t* L_29 = V_0;
		String_t* L_30 = ___4_U20;
		String_t* L_31;
		L_31 = mVRvu6uocIktlmNOt0E_RvOLZkWpCZ_mE0B9306F290246BE7FFAC9CAEE10789D5F695BD2(L_30, NULL);
		NullCheck(L_29);
		StringBuilder_t* L_32;
		L_32 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_29, L_31, NULL);
		NullCheck(L_32);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_32, _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E, NULL);
		il2cpp_codegen_runtime_class_init_inline(BlpDMbujQqgSL8Ynfso_tD4C1F11C9EF1B25C16253491FD2E68D909DFFD75_il2cpp_TypeInfo_var);
		String_t* L_34 = ((BlpDMbujQqgSL8Ynfso_tD4C1F11C9EF1B25C16253491FD2E68D909DFFD75_StaticFields*)il2cpp_codegen_static_fields_for(BlpDMbujQqgSL8Ynfso_tD4C1F11C9EF1B25C16253491FD2E68D909DFFD75_il2cpp_TypeInfo_var))->___bDWuBiknr8_4;
		String_t* L_35;
		L_35 = mVRvu6uocIktlmNOt0E_RvOLZkWpCZ_mE0B9306F290246BE7FFAC9CAEE10789D5F695BD2(L_34, NULL);
		NullCheck(L_33);
		StringBuilder_t* L_36;
		L_36 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_33, L_35, NULL);
		NullCheck(L_36);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_36, _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E, NULL);
		String_t* L_38 = ((BlpDMbujQqgSL8Ynfso_tD4C1F11C9EF1B25C16253491FD2E68D909DFFD75_StaticFields*)il2cpp_codegen_static_fields_for(BlpDMbujQqgSL8Ynfso_tD4C1F11C9EF1B25C16253491FD2E68D909DFFD75_il2cpp_TypeInfo_var))->___Rdput7RK5u_5;
		String_t* L_39;
		L_39 = mVRvu6uocIktlmNOt0E_RvOLZkWpCZ_mE0B9306F290246BE7FFAC9CAEE10789D5F695BD2(L_38, NULL);
		NullCheck(L_37);
		StringBuilder_t* L_40;
		L_40 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_37, L_39, NULL);
		NullCheck(L_40);
		StringBuilder_t* L_41;
		L_41 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_40, _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E, NULL);
		String_t* L_42 = ((BlpDMbujQqgSL8Ynfso_tD4C1F11C9EF1B25C16253491FD2E68D909DFFD75_StaticFields*)il2cpp_codegen_static_fields_for(BlpDMbujQqgSL8Ynfso_tD4C1F11C9EF1B25C16253491FD2E68D909DFFD75_il2cpp_TypeInfo_var))->___asBu96RCbH_6;
		String_t* L_43;
		L_43 = mVRvu6uocIktlmNOt0E_RvOLZkWpCZ_mE0B9306F290246BE7FFAC9CAEE10789D5F695BD2(L_42, NULL);
		NullCheck(L_41);
		StringBuilder_t* L_44;
		L_44 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_41, L_43, NULL);
		NullCheck(L_44);
		StringBuilder_t* L_45;
		L_45 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_44, _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E, NULL);
		String_t* L_46 = V_2;
		NullCheck(L_45);
		StringBuilder_t* L_47;
		L_47 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_45, L_46, NULL);
		NullCheck(L_47);
		StringBuilder_t* L_48;
		L_48 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_47, _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E, NULL);
		String_t* L_49 = V_3;
		NullCheck(L_48);
		StringBuilder_t* L_50;
		L_50 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_48, L_49, NULL);
		NullCheck(L_50);
		StringBuilder_t* L_51;
		L_51 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_50, _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E, NULL);
		String_t* L_52 = V_1;
		String_t* L_53;
		L_53 = mVRvu6uocIktlmNOt0E_RvOLZkWpCZ_mE0B9306F290246BE7FFAC9CAEE10789D5F695BD2(L_52, NULL);
		NullCheck(L_51);
		StringBuilder_t* L_54;
		L_54 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_51, L_53, NULL);
		String_t* L_55 = V_4;
		StringBuilder_t* L_56 = V_0;
		NullCheck((RuntimeObject*)L_56);
		String_t* L_57;
		L_57 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_56);
		String_t* L_58;
		L_58 = mVRvu6uocIktlmNOt0E_bKrLSO0s1T_m2F96D3B5A795B3D3CF58C4BB4CDB8A2F8002E84F(L_55, L_57, NULL);
		NullCheck(L_58);
		String_t* L_59;
		L_59 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_58, NULL);
		return L_59;
	}
}
// hdi3RVbCUxS0q8IKdRD.MTr8f8bkTI3U1qepF9e`2<TKey,TValue> qLHb9iaAGIg460N4uku.p4Fj6KbzPsNH9Pl8Y5p::Create<System.Int32,System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MTr8f8bkTI3U1qepF9e_2_t2C48CDCC3D6CC8E57E078BD9F4078C687C72779D* p4Fj6KbzPsNH9Pl8Y5p_Create_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_mD5A7FE7A0D3527606C691AE817B9C78ABA8AAA1A_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		MTr8f8bkTI3U1qepF9e_2_t2C48CDCC3D6CC8E57E078BD9F4078C687C72779D* L_0 = ((MTr8f8bkTI3U1qepF9e_2_t2C48CDCC3D6CC8E57E078BD9F4078C687C72779D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___FPnbw5Ml3Y_0;
		return L_0;
	}
}
// hdi3RVbCUxS0q8IKdRD.MTr8f8bkTI3U1qepF9e`2<TKey,TValue> qLHb9iaAGIg460N4uku.p4Fj6KbzPsNH9Pl8Y5p::Create<System.Object,System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* p4Fj6KbzPsNH9Pl8Y5p_Create_TisRuntimeObject_TisRuntimeObject_m9F39FBC375DB44453DF6CEAB793BDDC770667E88_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* L_0 = ((MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___FPnbw5Ml3Y_0;
		return L_0;
	}
}
// hdi3RVbCUxS0q8IKdRD.MTr8f8bkTI3U1qepF9e`2<TKey,TValue> qLHb9iaAGIg460N4uku.p4Fj6KbzPsNH9Pl8Y5p::Create<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* p4Fj6KbzPsNH9Pl8Y5p_Create_TisRuntimeObject_TisRuntimeObject_m9E43CB54D7CF11D75BBAB17429B16B91CDAC5F64_gshared (RuntimeObject* ___0_items, const RuntimeMethod* method) 
{
	{
		MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* L_0;
		L_0 = ((  MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		RuntimeObject* L_1 = ___0_items;
		NullCheck(L_0);
		MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* L_2;
		L_2 = ((  MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* (*) (MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_2;
	}
}
// hdi3RVbCUxS0q8IKdRD.MTr8f8bkTI3U1qepF9e`2<TKey,TValue> qLHb9iaAGIg460N4uku.p4Fj6KbzPsNH9Pl8Y5p::Create<System.Object,System.Object>(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* p4Fj6KbzPsNH9Pl8Y5p_Create_TisRuntimeObject_TisRuntimeObject_m0E077DE9DC3B526743383717254628AF0324C698_gshared (RuntimeObject* ___0_keyComparer, const RuntimeMethod* method) 
{
	{
		MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* L_0;
		L_0 = ((  MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		RuntimeObject* L_1 = ___0_keyComparer;
		NullCheck(L_0);
		MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* L_2;
		L_2 = ((  MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* (*) (MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_2;
	}
}
// hdi3RVbCUxS0q8IKdRD.MTr8f8bkTI3U1qepF9e`2<TKey,TValue> qLHb9iaAGIg460N4uku.p4Fj6KbzPsNH9Pl8Y5p::Create<System.Object,System.Object>(System.Collections.Generic.IEqualityComparer`1<TKey>,System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* p4Fj6KbzPsNH9Pl8Y5p_Create_TisRuntimeObject_TisRuntimeObject_m0641833D822ECF83525CFF915293777CC61BA336_gshared (RuntimeObject* ___0_keyComparer, RuntimeObject* ___1_items, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_keyComparer;
		MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* L_1;
		L_1 = ((  MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		RuntimeObject* L_2 = ___1_items;
		NullCheck(L_1);
		MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* L_3;
		L_3 = ((  MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* (*) (MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
// hdi3RVbCUxS0q8IKdRD.MTr8f8bkTI3U1qepF9e`2<TKey,TValue> qLHb9iaAGIg460N4uku.p4Fj6KbzPsNH9Pl8Y5p::Create<System.Object,System.Object>(System.Collections.Generic.IEqualityComparer`1<TKey>,System.Collections.Generic.IEqualityComparer`1<TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* p4Fj6KbzPsNH9Pl8Y5p_Create_TisRuntimeObject_TisRuntimeObject_m391BBBC7C616AF478458AABDE216C4AE2CACA0A1_gshared (RuntimeObject* ___0_keyComparer, RuntimeObject* ___1_valueComparer, const RuntimeMethod* method) 
{
	{
		MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* L_0;
		L_0 = ((  MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		RuntimeObject* L_1 = ___0_keyComparer;
		RuntimeObject* L_2 = ___1_valueComparer;
		NullCheck(L_0);
		MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* L_3;
		L_3 = ((  MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* (*) (MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
// hdi3RVbCUxS0q8IKdRD.MTr8f8bkTI3U1qepF9e`2<TKey,TValue> qLHb9iaAGIg460N4uku.p4Fj6KbzPsNH9Pl8Y5p::Create<System.Object,System.Object>(System.Collections.Generic.IEqualityComparer`1<TKey>,System.Collections.Generic.IEqualityComparer`1<TValue>,System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* p4Fj6KbzPsNH9Pl8Y5p_Create_TisRuntimeObject_TisRuntimeObject_mF4DCA1D94E3DBF33FC4779881FFE6F82986E456E_gshared (RuntimeObject* ___0_keyComparer, RuntimeObject* ___1_valueComparer, RuntimeObject* ___2_items, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_keyComparer;
		RuntimeObject* L_1 = ___1_valueComparer;
		MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* L_2;
		L_2 = ((  MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		RuntimeObject* L_3 = ___2_items;
		NullCheck(L_2);
		MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* L_4;
		L_4 = ((  MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* (*) (MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_4;
	}
}
// hdi3RVbCUxS0q8IKdRD.MTr8f8bkTI3U1qepF9e`2<lskc9jaqhJq3oVBsArd,mr6iwvay8eTJrEikJMq> qLHb9iaAGIg460N4uku.p4Fj6KbzPsNH9Pl8Y5p::Ejda9S2JxB<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<lskc9jaqhJq3oVBsArd,mr6iwvay8eTJrEikJMq>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* p4Fj6KbzPsNH9Pl8Y5p_Ejda9S2JxB_TisRuntimeObject_TisRuntimeObject_mBCE77B4C264871A3D1378DF4795519CEA20BA4F0_gshared (RuntimeObject* ___0_U20, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_U20;
		MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* L_1;
		L_1 = ((  MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* (*) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, (RuntimeObject*)NULL, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
// yZi5KJaMokNs3Ny1f42 qLHb9iaAGIg460N4uku.p4Fj6KbzPsNH9Pl8Y5p::KZ1aY9XhXj<System.Object,System.Object>(System.Collections.Generic.IReadOnlyDictionary`2<AMMDVSaxR4EgQPPlLU7,yZi5KJaMokNs3Ny1f42>,AMMDVSaxR4EgQPPlLU7,yZi5KJaMokNs3Ny1f42)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* p4Fj6KbzPsNH9Pl8Y5p_KZ1aY9XhXj_TisRuntimeObject_TisRuntimeObject_m599796638BAD8DBCF5A1A27EA56291AE1D4F738C_gshared (RuntimeObject* ___0_U20, RuntimeObject* ___1_vXIbASan1DFnDCDF7VO, RuntimeObject* ___2_h6MAZpa3GJR8aT7uamp, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_U20;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&p4Fj6KbzPsNH9Pl8Y5p_KZ1aY9XhXj_TisRuntimeObject_TisRuntimeObject_m599796638BAD8DBCF5A1A27EA56291AE1D4F738C_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_U20;
		RuntimeObject* L_3 = ___1_vXIbASan1DFnDCDF7VO;
		NullCheck(L_2);
		bool L_4;
		L_4 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject** >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&) */, il2cpp_rgctx_data(method->rgctx_data, 0), L_2, L_3, (&V_0));
		if (!L_4)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		return L_5;
	}

IL_001b:
	{
		RuntimeObject* L_6 = ___2_h6MAZpa3GJR8aT7uamp;
		return L_6;
	}
}
// hdi3RVbCUxS0q8IKdRD.MTr8f8bkTI3U1qepF9e`2<s6Z3bkawDwarEycah6f,uRDx3maeAEqaPLeadpe> qLHb9iaAGIg460N4uku.p4Fj6KbzPsNH9Pl8Y5p::LJcaURV6Pv<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<s6Z3bkawDwarEycah6f,uRDx3maeAEqaPLeadpe>>,System.Collections.Generic.IEqualityComparer`1<s6Z3bkawDwarEycah6f>,System.Collections.Generic.IEqualityComparer`1<uRDx3maeAEqaPLeadpe>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* p4Fj6KbzPsNH9Pl8Y5p_LJcaURV6Pv_TisRuntimeObject_TisRuntimeObject_m5D7C54DBC15F05815A261C7FCB93CB25E7019D64_gshared (RuntimeObject* ___0_U20, RuntimeObject* ___1_U20, RuntimeObject* ___2_U20, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_U20;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&p4Fj6KbzPsNH9Pl8Y5p_LJcaURV6Pv_TisRuntimeObject_TisRuntimeObject_m5D7C54DBC15F05815A261C7FCB93CB25E7019D64_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___1_U20;
		RuntimeObject* L_3 = ___2_U20;
		MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* L_4;
		L_4 = ((  MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		RuntimeObject* L_5 = ___0_U20;
		NullCheck(L_4);
		MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* L_6;
		L_6 = ((  MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* (*) (MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_6;
	}
}
// hdi3RVbCUxS0q8IKdRD.MTr8f8bkTI3U1qepF9e`2<U3GL5waaFVEJvD3idQl,nrdb3ZamWEABVGqpDkX> qLHb9iaAGIg460N4uku.p4Fj6KbzPsNH9Pl8Y5p::ObLa7fS2vt<System.Object,System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<Qb4kbNabYGJGTOoI8gq>,System.Func`2<Qb4kbNabYGJGTOoI8gq,U3GL5waaFVEJvD3idQl>,System.Func`2<Qb4kbNabYGJGTOoI8gq,nrdb3ZamWEABVGqpDkX>,System.Collections.Generic.IEqualityComparer`1<U3GL5waaFVEJvD3idQl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* p4Fj6KbzPsNH9Pl8Y5p_ObLa7fS2vt_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m4BD88B1756EA31B4E64395C1021A7F58A6A745A5_gshared (RuntimeObject* ___0_U20, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___1_U20, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___2_U20, RuntimeObject* ___3_U20, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_U20;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_1 = ___1_U20;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = ___2_U20;
		RuntimeObject* L_3 = ___3_U20;
		MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* L_4;
		L_4 = ((  MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* (*) (RuntimeObject*, Func_2_tACBF5A1656250800CE861707354491F0611F6624*, Func_2_tACBF5A1656250800CE861707354491F0611F6624*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}
}
// System.Boolean qLHb9iaAGIg460N4uku.p4Fj6KbzPsNH9Pl8Y5p::T9paIp1CuF<System.Object,System.Object>(rBMcyk7i1qpBQWPQMMV.RNHGah7mjCbyEIni6WI`2<ojJgGlaTwsfb3XCVx5R,rRB8kXalCxwBVG6Fs6y>,ojJgGlaTwsfb3XCVx5R,rRB8kXalCxwBVG6Fs6y)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool p4Fj6KbzPsNH9Pl8Y5p_T9paIp1CuF_TisRuntimeObject_TisRuntimeObject_m71B08DE526B4F98847AD7FC4681883AA50FAB839_gshared (RuntimeObject* ___0_U20, RuntimeObject* ___1_XXKUYeak4WY62ytkXlF, RuntimeObject* ___2_y7D7AwaclvQj8tyZKyD, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_U20;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&p4Fj6KbzPsNH9Pl8Y5p_T9paIp1CuF_TisRuntimeObject_TisRuntimeObject_m71B08DE526B4F98847AD7FC4681883AA50FAB839_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_U20;
		RuntimeObject* L_3 = ___1_XXKUYeak4WY62ytkXlF;
		RuntimeObject* L_4 = ___2_y7D7AwaclvQj8tyZKyD;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_5;
		memset((&L_5), 0, sizeof(L_5));
		KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950((&L_5), L_3, L_4, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_2);
		bool L_6;
		L_6 = InterfaceFuncInvoker1< bool, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 >::Invoke(4 /* System.Boolean rBMcyk7i1qpBQWPQMMV.RNHGah7mjCbyEIni6WI`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<Rjs8f878VS9wb3fhM0I,sV0t6t7JllJKtJ3nDdU>) */, il2cpp_rgctx_data(method->rgctx_data, 2), L_2, L_5);
		return L_6;
	}
}
// RkqyRRaW964M6dvXBnQ qLHb9iaAGIg460N4uku.p4Fj6KbzPsNH9Pl8Y5p::VUeap0yUJs<System.Object,System.Object>(System.Collections.Generic.IDictionary`2<dURuEQaNdjpDVjZk0hn,RkqyRRaW964M6dvXBnQ>,dURuEQaNdjpDVjZk0hn,RkqyRRaW964M6dvXBnQ)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* p4Fj6KbzPsNH9Pl8Y5p_VUeap0yUJs_TisRuntimeObject_TisRuntimeObject_m0DEB4A2E2172D9C23325DF16FC84E309A21526CF_gshared (RuntimeObject* ___0_U20, RuntimeObject* ___1_IUGbsjavpIpBCQ96bX2, RuntimeObject* ___2_vl6n74auK1uocVrW2lY, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_U20;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&p4Fj6KbzPsNH9Pl8Y5p_VUeap0yUJs_TisRuntimeObject_TisRuntimeObject_m0DEB4A2E2172D9C23325DF16FC84E309A21526CF_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_U20;
		RuntimeObject* L_3 = ___1_IUGbsjavpIpBCQ96bX2;
		NullCheck(L_2);
		bool L_4;
		L_4 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&) */, il2cpp_rgctx_data(method->rgctx_data, 0), L_2, L_3, (&V_0));
		if (!L_4)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		return L_5;
	}

IL_001b:
	{
		RuntimeObject* L_6 = ___2_vl6n74auK1uocVrW2lY;
		return L_6;
	}
}
// hdi3RVbCUxS0q8IKdRD.MTr8f8bkTI3U1qepF9e`2<MOuQRtaFt1BNVdso8KW,UmeaHmagMBrv7t1yLLo> qLHb9iaAGIg460N4uku.p4Fj6KbzPsNH9Pl8Y5p::chmaPVbnQX<System.Object,System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<Mg97rBaESZMKpKRmovl>,System.Func`2<Mg97rBaESZMKpKRmovl,MOuQRtaFt1BNVdso8KW>,System.Func`2<Mg97rBaESZMKpKRmovl,UmeaHmagMBrv7t1yLLo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* p4Fj6KbzPsNH9Pl8Y5p_chmaPVbnQX_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mB1EEA58D3FDB3D49758F0B3E89D81C5E9D174218_gshared (RuntimeObject* ___0_U20, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___1_U20, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___2_U20, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_U20;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_1 = ___1_U20;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = ___2_U20;
		MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* L_3;
		L_3 = ((  MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* (*) (RuntimeObject*, Func_2_tACBF5A1656250800CE861707354491F0611F6624*, Func_2_tACBF5A1656250800CE861707354491F0611F6624*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, (RuntimeObject*)NULL, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_3;
	}
}
// hdi3RVbCUxS0q8IKdRD.MTr8f8bkTI3U1qepF9e`2<SNj03laBgPvKqD8qVoY,pyu04TatALvr5Dlcehv> qLHb9iaAGIg460N4uku.p4Fj6KbzPsNH9Pl8Y5p::h75aLxxJEj<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<SNj03laBgPvKqD8qVoY,pyu04TatALvr5Dlcehv>>,System.Collections.Generic.IEqualityComparer`1<SNj03laBgPvKqD8qVoY>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* p4Fj6KbzPsNH9Pl8Y5p_h75aLxxJEj_TisRuntimeObject_TisRuntimeObject_m991F645616960653DF853FD7738A965198CA8DAE_gshared (RuntimeObject* ___0_U20, RuntimeObject* ___1_U20, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_U20;
		RuntimeObject* L_1 = ___1_U20;
		MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* L_2;
		L_2 = ((  MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* (*) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
// uXNdXKaOIis0vtE57if qLHb9iaAGIg460N4uku.p4Fj6KbzPsNH9Pl8Y5p::mqhaSPMDXJ<System.Object,System.Object>(System.Collections.Generic.IReadOnlyDictionary`2<PaIVavaCLR9fbC05BgU,uXNdXKaOIis0vtE57if>,PaIVavaCLR9fbC05BgU)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* p4Fj6KbzPsNH9Pl8Y5p_mqhaSPMDXJ_TisRuntimeObject_TisRuntimeObject_m2AAE80FB8F84718C56BEFDE30D0A8BE794509336_gshared (RuntimeObject* ___0_U20, RuntimeObject* ___1_XdkEeWaZq97sIsWdWtl, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_U20;
		RuntimeObject* L_1 = ___1_XdkEeWaZq97sIsWdWtl;
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_2 = V_0;
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_3;
	}
}
// yNB6ybaH7JAgq3HqFF1 qLHb9iaAGIg460N4uku.p4Fj6KbzPsNH9Pl8Y5p::tbhajuner3<System.Object,System.Object>(System.Collections.Generic.IDictionary`2<puTIyWa0ekZQqnd49FI,yNB6ybaH7JAgq3HqFF1>,puTIyWa0ekZQqnd49FI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* p4Fj6KbzPsNH9Pl8Y5p_tbhajuner3_TisRuntimeObject_TisRuntimeObject_m652DE05E4F8E1DF0FE80A385BD404AA4585300CC_gshared (RuntimeObject* ___0_U20, RuntimeObject* ___1_loKeL2aGoOBSWO98La7, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_U20;
		RuntimeObject* L_1 = ___1_loKeL2aGoOBSWO98La7;
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_2 = V_0;
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_3;
	}
}
// hdi3RVbCUxS0q8IKdRD.MTr8f8bkTI3U1qepF9e`2<mkSMRVaiCwjkP4gl56X,WjqsKOaDqBYtsdKRFhK> qLHb9iaAGIg460N4uku.p4Fj6KbzPsNH9Pl8Y5p::zT3a8966d7<System.Object,System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<bBbXnQaJTVxJYOwGqxV>,System.Func`2<bBbXnQaJTVxJYOwGqxV,mkSMRVaiCwjkP4gl56X>,System.Func`2<bBbXnQaJTVxJYOwGqxV,WjqsKOaDqBYtsdKRFhK>,System.Collections.Generic.IEqualityComparer`1<mkSMRVaiCwjkP4gl56X>,System.Collections.Generic.IEqualityComparer`1<WjqsKOaDqBYtsdKRFhK>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* p4Fj6KbzPsNH9Pl8Y5p_zT3a8966d7_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mFEAB90D0771B0092682204C06F2522CBE7171074_gshared (RuntimeObject* ___0_U20, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___1_U20, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___2_U20, RuntimeObject* ___3_U20, RuntimeObject* ___4_U20, const RuntimeMethod* method) 
{
	U3CU3Ec__DisplayClass15_0_3_t14204BAAC998349F0BDE6F5A8F4176BD1CC294AE* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass15_0_3_t14204BAAC998349F0BDE6F5A8F4176BD1CC294AE* L_0 = (U3CU3Ec__DisplayClass15_0_3_t14204BAAC998349F0BDE6F5A8F4176BD1CC294AE*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (U3CU3Ec__DisplayClass15_0_3_t14204BAAC998349F0BDE6F5A8F4176BD1CC294AE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		U3CU3Ec__DisplayClass15_0_3_t14204BAAC998349F0BDE6F5A8F4176BD1CC294AE* L_1 = V_0;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = ___1_U20;
		NullCheck(L_1);
		L_1->___keySelector_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___keySelector_0), (void*)L_2);
		U3CU3Ec__DisplayClass15_0_3_t14204BAAC998349F0BDE6F5A8F4176BD1CC294AE* L_3 = V_0;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_4 = ___2_U20;
		NullCheck(L_3);
		L_3->___elementSelector_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___elementSelector_1), (void*)L_4);
		RuntimeObject* L_5 = ___0_U20;
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&p4Fj6KbzPsNH9Pl8Y5p_zT3a8966d7_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mFEAB90D0771B0092682204C06F2522CBE7171074_RuntimeMethod_var)));
	}

IL_0022:
	{
		RuntimeObject* L_7 = ___3_U20;
		RuntimeObject* L_8 = ___4_U20;
		MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* L_9;
		L_9 = ((  MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		RuntimeObject* L_10 = ___0_U20;
		U3CU3Ec__DisplayClass15_0_3_t14204BAAC998349F0BDE6F5A8F4176BD1CC294AE* L_11 = V_0;
		Func_2_t499DDE5E46331A56DAB11C983B806E4A9BE3B5D2* L_12 = (Func_2_t499DDE5E46331A56DAB11C983B806E4A9BE3B5D2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 4));
		NullCheck(L_12);
		((  void (*) (Func_2_t499DDE5E46331A56DAB11C983B806E4A9BE3B5D2*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_12, (RuntimeObject*)L_11, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 5));
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t499DDE5E46331A56DAB11C983B806E4A9BE3B5D2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_10, L_12, il2cpp_rgctx_method(method->rgctx_data, 6));
		NullCheck(L_9);
		MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* L_14;
		L_14 = ((  MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4* (*) (MTr8f8bkTI3U1qepF9e_2_t2E07C188C593DE790E74C64A748F15E18CBB4AE4*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)))(L_9, L_13, il2cpp_rgctx_method(method->rgctx_data, 8));
		return L_14;
	}
}
// s6xHm5Iyv4xHGETg442C HbifHiIyCnWmHH0USMVu.pRIki9IyStHqBwnoedAT::H9QIyWllX78<System.Object>(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* pRIki9IyStHqBwnoedAT_H9QIyWllX78_TisRuntimeObject_m9117B586E7C897035BF4552F7575C0886164AC14_gshared (MemberInfo_t* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pxdx4NIjoIfmCFcUEecO_tEF8C580AFE2B34F24CCD7C8F26C54D67A7F716CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&pRIki9IyStHqBwnoedAT_tCEC0F8D00757FCA4ED786D195FDEE44E77519FBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	MemberInfo_t* V_2 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_3 = NULL;
	int32_t V_4 = 0;
	MemberInfo_t* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		MemberInfo_t* L_0 = ___0_U20;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		il2cpp_codegen_runtime_class_init_inline(pRIki9IyStHqBwnoedAT_tCEC0F8D00757FCA4ED786D195FDEE44E77519FBA_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = pRIki9IyStHqBwnoedAT_DQfIyHRc8NG_mEF1B4B21EAA6B5963808D199E97EF916FEACD9A0(L_1, NULL);
		V_1 = L_2;
		Type_t* L_3 = V_1;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		Type_t* L_4 = V_1;
		MemberInfo_t* L_5 = ___0_U20;
		il2cpp_codegen_runtime_class_init_inline(Pxdx4NIjoIfmCFcUEecO_tEF8C580AFE2B34F24CCD7C8F26C54D67A7F716CF_il2cpp_TypeInfo_var);
		MemberInfo_t* L_6;
		L_6 = Pxdx4NIjoIfmCFcUEecO_jxBI0wbWFxF_mC507F4981E0CCE34CCA28C89219287E4A68B7665(L_4, L_5, NULL);
		V_2 = L_6;
		MemberInfo_t* L_7 = V_2;
		if (!L_7)
		{
			goto IL_002c;
		}
	}
	{
		MemberInfo_t* L_8 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Pxdx4NIjoIfmCFcUEecO_tEF8C580AFE2B34F24CCD7C8F26C54D67A7F716CF_il2cpp_TypeInfo_var);
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (RuntimeObject*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((RuntimeObject*)L_8, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_9;
		RuntimeObject* L_10 = V_0;
		if (!L_10)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_11 = V_0;
		return L_11;
	}

IL_002c:
	{
		MemberInfo_t* L_12 = ___0_U20;
		il2cpp_codegen_runtime_class_init_inline(Pxdx4NIjoIfmCFcUEecO_tEF8C580AFE2B34F24CCD7C8F26C54D67A7F716CF_il2cpp_TypeInfo_var);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (RuntimeObject*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((RuntimeObject*)L_12, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_13;
		RuntimeObject* L_14 = V_0;
		if (!L_14)
		{
			goto IL_003e;
		}
	}
	{
		RuntimeObject* L_15 = V_0;
		return L_15;
	}

IL_003e:
	{
		MemberInfo_t* L_16 = ___0_U20;
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_16);
		if (!L_17)
		{
			goto IL_0087;
		}
	}
	{
		MemberInfo_t* L_18 = ___0_U20;
		NullCheck(L_18);
		Type_t* L_19;
		L_19 = VirtualFuncInvoker0< Type_t* >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_18);
		NullCheck(L_19);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_20;
		L_20 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(119 /* System.Type[] System.Type::GetInterfaces() */, L_19);
		V_3 = L_20;
		V_4 = 0;
		goto IL_0080;
	}

IL_0057:
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_21 = V_3;
		int32_t L_22 = V_4;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		Type_t* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		MemberInfo_t* L_25 = ___0_U20;
		il2cpp_codegen_runtime_class_init_inline(Pxdx4NIjoIfmCFcUEecO_tEF8C580AFE2B34F24CCD7C8F26C54D67A7F716CF_il2cpp_TypeInfo_var);
		MemberInfo_t* L_26;
		L_26 = Pxdx4NIjoIfmCFcUEecO_jxBI0wbWFxF_mC507F4981E0CCE34CCA28C89219287E4A68B7665(L_24, L_25, NULL);
		V_5 = L_26;
		MemberInfo_t* L_27 = V_5;
		if (!L_27)
		{
			goto IL_007a;
		}
	}
	{
		MemberInfo_t* L_28 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Pxdx4NIjoIfmCFcUEecO_tEF8C580AFE2B34F24CCD7C8F26C54D67A7F716CF_il2cpp_TypeInfo_var);
		RuntimeObject* L_29;
		L_29 = ((  RuntimeObject* (*) (RuntimeObject*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((RuntimeObject*)L_28, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_29;
		RuntimeObject* L_30 = V_0;
		if (!L_30)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_31 = V_0;
		return L_31;
	}

IL_007a:
	{
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0080:
	{
		int32_t L_33 = V_4;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_34 = V_3;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)))))
		{
			goto IL_0057;
		}
	}

IL_0087:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_35 = V_6;
		return L_35;
	}
}
// S9p6YjIyZRwonxJRcucK HbifHiIyCnWmHH0USMVu.pRIki9IyStHqBwnoedAT::d2IIyOv0Anx<System.Object>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* pRIki9IyStHqBwnoedAT_d2IIyOv0Anx_TisRuntimeObject_m58CCA8BD32ECFD8856B10850F5AC8676412F6BE4_gshared (RuntimeObject* ___0_U20, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_U20;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
// bHgac0IyNwvvOJkVR6K4 HbifHiIyCnWmHH0USMVu.pRIki9IyStHqBwnoedAT::hrgIyppa5u1<System.Object>(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* pRIki9IyStHqBwnoedAT_hrgIyppa5u1_TisRuntimeObject_mE4932DC9C68A5FB45A0F7B5D6DDF87E9BFF6305D_gshared (Type_t* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pxdx4NIjoIfmCFcUEecO_tEF8C580AFE2B34F24CCD7C8F26C54D67A7F716CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&pRIki9IyStHqBwnoedAT_tCEC0F8D00757FCA4ED786D195FDEE44E77519FBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		Type_t* L_0 = ___0_U20;
		il2cpp_codegen_runtime_class_init_inline(pRIki9IyStHqBwnoedAT_tCEC0F8D00757FCA4ED786D195FDEE44E77519FBA_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = pRIki9IyStHqBwnoedAT_DQfIyHRc8NG_mEF1B4B21EAA6B5963808D199E97EF916FEACD9A0(L_0, NULL);
		V_1 = L_1;
		Type_t* L_2 = V_1;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Type_t* L_3 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Pxdx4NIjoIfmCFcUEecO_tEF8C580AFE2B34F24CCD7C8F26C54D67A7F716CF_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = ((  RuntimeObject* (*) (RuntimeObject*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((RuntimeObject*)L_3, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		RuntimeObject* L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		return L_6;
	}

IL_001c:
	{
		Type_t* L_7 = ___0_U20;
		il2cpp_codegen_runtime_class_init_inline(Pxdx4NIjoIfmCFcUEecO_tEF8C580AFE2B34F24CCD7C8F26C54D67A7F716CF_il2cpp_TypeInfo_var);
		RuntimeObject* L_8;
		L_8 = ((  RuntimeObject* (*) (RuntimeObject*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((RuntimeObject*)L_7, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_8;
		RuntimeObject* L_9 = V_0;
		if (!L_9)
		{
			goto IL_002e;
		}
	}
	{
		RuntimeObject* L_10 = V_0;
		return L_10;
	}

IL_002e:
	{
		Type_t* L_11 = ___0_U20;
		NullCheck(L_11);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_12;
		L_12 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(119 /* System.Type[] System.Type::GetInterfaces() */, L_11);
		V_2 = L_12;
		V_3 = 0;
		goto IL_0051;
	}

IL_0039:
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_13 = V_2;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Type_t* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		il2cpp_codegen_runtime_class_init_inline(Pxdx4NIjoIfmCFcUEecO_tEF8C580AFE2B34F24CCD7C8F26C54D67A7F716CF_il2cpp_TypeInfo_var);
		RuntimeObject* L_17;
		L_17 = ((  RuntimeObject* (*) (RuntimeObject*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((RuntimeObject*)L_16, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_17;
		RuntimeObject* L_18 = V_0;
		if (!L_18)
		{
			goto IL_004d;
		}
	}
	{
		RuntimeObject* L_19 = V_0;
		return L_19;
	}

IL_004d:
	{
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0051:
	{
		int32_t L_21 = V_3;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_22 = V_2;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0039;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject*));
		RuntimeObject* L_23 = V_4;
		return L_23;
	}
}
// sl5V1LIyL9JVFkroNSHv HbifHiIyCnWmHH0USMVu.pRIki9IyStHqBwnoedAT::m8WIyuTouoi<System.Object>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* pRIki9IyStHqBwnoedAT_m8WIyuTouoi_TisRuntimeObject_mF662390DE481A9FDBD1CD7E22193A8A089CFE73F_gshared (RuntimeObject* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pxdx4NIjoIfmCFcUEecO_tEF8C580AFE2B34F24CCD7C8F26C54D67A7F716CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&pRIki9IyStHqBwnoedAT_tCEC0F8D00757FCA4ED786D195FDEE44E77519FBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	MemberInfo_t* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_U20;
		V_0 = ((Type_t*)IsInstClass((RuntimeObject*)L_0, Type_t_il2cpp_TypeInfo_var));
		Type_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		Type_t* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(pRIki9IyStHqBwnoedAT_tCEC0F8D00757FCA4ED786D195FDEE44E77519FBA_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Type_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_3;
	}

IL_0011:
	{
		RuntimeObject* L_4 = ___0_U20;
		V_1 = ((MemberInfo_t*)IsInstClass((RuntimeObject*)L_4, MemberInfo_t_il2cpp_TypeInfo_var));
		MemberInfo_t* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		MemberInfo_t* L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(pRIki9IyStHqBwnoedAT_tCEC0F8D00757FCA4ED786D195FDEE44E77519FBA_il2cpp_TypeInfo_var);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (MemberInfo_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_7;
	}

IL_0022:
	{
		RuntimeObject* L_8 = ___0_U20;
		il2cpp_codegen_runtime_class_init_inline(Pxdx4NIjoIfmCFcUEecO_tEF8C580AFE2B34F24CCD7C8F26C54D67A7F716CF_il2cpp_TypeInfo_var);
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (RuntimeObject*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_8, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_9;
	}
}
// C9nH13a5oV83F8lBXvp.GWjGQNadWhjklk3KWL5`1<T> roIE5qmzjbcxwNjLw8s.t5Zn1EmretqgRed7mnZ::Create<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* t5Zn1EmretqgRed7mnZ_Create_TisRuntimeObject_m03932B2D265F2358B3118FD8DB15BAC78E59DF77_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* L_0 = ((GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___msEmFSHyUj_0;
		return L_0;
	}
}
// C9nH13a5oV83F8lBXvp.GWjGQNadWhjklk3KWL5`1<T> roIE5qmzjbcxwNjLw8s.t5Zn1EmretqgRed7mnZ::Create<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* t5Zn1EmretqgRed7mnZ_Create_TisRuntimeObject_m4211CBB45614A10F6FFB664B9903656340FCB22A_gshared (RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0;
		L_0 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		RuntimeObject* L_1 = ___0_item;
		GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* L_2;
		L_2 = ((  GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((RuntimeObject*)L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_2;
	}
}
// C9nH13a5oV83F8lBXvp.GWjGQNadWhjklk3KWL5`1<T> roIE5qmzjbcxwNjLw8s.t5Zn1EmretqgRed7mnZ::Create<System.Object>(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* t5Zn1EmretqgRed7mnZ_Create_TisRuntimeObject_mFD3B7002DDE3A41F4DE58437E7CEE81E1483D331_gshared (RuntimeObject* ___0_items, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_items;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* L_2;
		L_2 = ((  GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
// C9nH13a5oV83F8lBXvp.GWjGQNadWhjklk3KWL5`1<T> roIE5qmzjbcxwNjLw8s.t5Zn1EmretqgRed7mnZ::Create<System.Object>(System.Collections.Generic.IEqualityComparer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* t5Zn1EmretqgRed7mnZ_Create_TisRuntimeObject_m3E53A7236B17BED08AF637C4973CA2970F86843E_gshared (RuntimeObject* ___0_equalityComparer, const RuntimeMethod* method) 
{
	{
		GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* L_0;
		L_0 = ((  GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		RuntimeObject* L_1 = ___0_equalityComparer;
		NullCheck(L_0);
		GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* L_2;
		L_2 = ((  GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* (*) (GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_2;
	}
}
// C9nH13a5oV83F8lBXvp.GWjGQNadWhjklk3KWL5`1<T> roIE5qmzjbcxwNjLw8s.t5Zn1EmretqgRed7mnZ::Create<System.Object>(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* t5Zn1EmretqgRed7mnZ_Create_TisRuntimeObject_mD1AB98F57D8D7A8C56094196B0B330BDF6C89244_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_items, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0;
		L_0 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_items;
		GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* L_2;
		L_2 = ((  GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* (*) (RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((RuntimeObject*)L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_2;
	}
}
// C9nH13a5oV83F8lBXvp.GWjGQNadWhjklk3KWL5`1<T> roIE5qmzjbcxwNjLw8s.t5Zn1EmretqgRed7mnZ::Create<System.Boolean>(System.Collections.Generic.IEqualityComparer`1<T>,System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GWjGQNadWhjklk3KWL5_1_tAC30F52F4A47116A3A023E954C6F83D2E71F0217* t5Zn1EmretqgRed7mnZ_Create_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m36468DCCB3ECF14E902E7B2A1EB94089124DD687_gshared (RuntimeObject* ___0_equalityComparer, RuntimeObject* ___1_items, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_equalityComparer;
		RuntimeObject* L_1 = ___1_items;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2;
		L_2 = ((  BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		GWjGQNadWhjklk3KWL5_1_tAC30F52F4A47116A3A023E954C6F83D2E71F0217* L_3;
		L_3 = ((  GWjGQNadWhjklk3KWL5_1_tAC30F52F4A47116A3A023E954C6F83D2E71F0217* (*) (RuntimeObject*, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
// C9nH13a5oV83F8lBXvp.GWjGQNadWhjklk3KWL5`1<T> roIE5qmzjbcxwNjLw8s.t5Zn1EmretqgRed7mnZ::Create<System.Boolean>(System.Collections.Generic.IEqualityComparer`1<T>,T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GWjGQNadWhjklk3KWL5_1_tAC30F52F4A47116A3A023E954C6F83D2E71F0217* t5Zn1EmretqgRed7mnZ_Create_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9B0EC5DBAAA0762A28A74FAFE27CFA48BDF5565F_gshared (RuntimeObject* ___0_equalityComparer, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___1_items, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		GWjGQNadWhjklk3KWL5_1_tAC30F52F4A47116A3A023E954C6F83D2E71F0217* L_0 = ((GWjGQNadWhjklk3KWL5_1_tAC30F52F4A47116A3A023E954C6F83D2E71F0217_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___msEmFSHyUj_0;
		RuntimeObject* L_1 = ___0_equalityComparer;
		NullCheck(L_0);
		GWjGQNadWhjklk3KWL5_1_tAC30F52F4A47116A3A023E954C6F83D2E71F0217* L_2;
		L_2 = ((  GWjGQNadWhjklk3KWL5_1_tAC30F52F4A47116A3A023E954C6F83D2E71F0217* (*) (GWjGQNadWhjklk3KWL5_1_tAC30F52F4A47116A3A023E954C6F83D2E71F0217*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_3 = ___1_items;
		NullCheck(L_2);
		GWjGQNadWhjklk3KWL5_1_tAC30F52F4A47116A3A023E954C6F83D2E71F0217* L_4;
		L_4 = ((  GWjGQNadWhjklk3KWL5_1_tAC30F52F4A47116A3A023E954C6F83D2E71F0217* (*) (GWjGQNadWhjklk3KWL5_1_tAC30F52F4A47116A3A023E954C6F83D2E71F0217*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_2, (RuntimeObject*)L_3, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_4;
	}
}
// C9nH13a5oV83F8lBXvp.GWjGQNadWhjklk3KWL5`1<T> roIE5qmzjbcxwNjLw8s.t5Zn1EmretqgRed7mnZ::Create<System.Object>(System.Collections.Generic.IEqualityComparer`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* t5Zn1EmretqgRed7mnZ_Create_TisRuntimeObject_m615EA013B60B1728A643FC3A1B45C15FC190DCDE_gshared (RuntimeObject* ___0_equalityComparer, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* L_0 = ((GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___msEmFSHyUj_0;
		RuntimeObject* L_1 = ___0_equalityComparer;
		NullCheck(L_0);
		GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* L_2;
		L_2 = ((  GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* (*) (GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
		RuntimeObject* L_3 = ___1_item;
		NullCheck(L_2);
		GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* L_4;
		L_4 = ((  GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* (*) (GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_4;
	}
}
// C9nH13a5oV83F8lBXvp.GWjGQNadWhjklk3KWL5`1<T> roIE5qmzjbcxwNjLw8s.t5Zn1EmretqgRed7mnZ::Create<System.Object>(System.Collections.Generic.IEqualityComparer`1<T>,System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* t5Zn1EmretqgRed7mnZ_Create_TisRuntimeObject_mCA46F8B64DEBD1504594925524C9CD9C52F43B28_gshared (RuntimeObject* ___0_equalityComparer, RuntimeObject* ___1_items, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_equalityComparer;
		RuntimeObject* L_1 = ___1_items;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* L_3;
		L_3 = ((  GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* (*) (RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
// C9nH13a5oV83F8lBXvp.GWjGQNadWhjklk3KWL5`1<T> roIE5qmzjbcxwNjLw8s.t5Zn1EmretqgRed7mnZ::Create<System.Object>(System.Collections.Generic.IEqualityComparer`1<T>,T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* t5Zn1EmretqgRed7mnZ_Create_TisRuntimeObject_mD9D879CE84DBCB6C8B6C1210580B899BEA9822EF_gshared (RuntimeObject* ___0_equalityComparer, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_items, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* L_0 = ((GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___msEmFSHyUj_0;
		RuntimeObject* L_1 = ___0_equalityComparer;
		NullCheck(L_0);
		GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* L_2;
		L_2 = ((  GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* (*) (GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_items;
		NullCheck(L_2);
		GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* L_4;
		L_4 = ((  GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* (*) (GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_2, (RuntimeObject*)L_3, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_4;
	}
}
// C9nH13a5oV83F8lBXvp.GWjGQNadWhjklk3KWL5`1<U79IQO8IlCIaM9aw4NO> roIE5qmzjbcxwNjLw8s.t5Zn1EmretqgRed7mnZ::iOS8AFXXmC<System.Object>(System.Collections.Generic.IEnumerable`1<U79IQO8IlCIaM9aw4NO>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* t5Zn1EmretqgRed7mnZ_iOS8AFXXmC_TisRuntimeObject_m5F3DD8AC8DFABD038D0356AAA4BFA8224BE7F5CB_gshared (RuntimeObject* ___0_U20, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_U20;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&t5Zn1EmretqgRed7mnZ_iOS8AFXXmC_TisRuntimeObject_m5F3DD8AC8DFABD038D0356AAA4BFA8224BE7F5CB_RuntimeMethod_var)));
	}

IL_000e:
	{
		GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* L_2;
		L_2 = ((  GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		RuntimeObject* L_3 = ___0_U20;
		NullCheck(L_2);
		GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* L_4;
		L_4 = ((  GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* (*) (GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_4;
	}
}
// C9nH13a5oV83F8lBXvp.GWjGQNadWhjklk3KWL5`1<lSLNrn8lRDkfHYU1EeU> roIE5qmzjbcxwNjLw8s.t5Zn1EmretqgRed7mnZ::siY8TlNnCT<System.Object>(System.Collections.Generic.IEnumerable`1<lSLNrn8lRDkfHYU1EeU>,System.Collections.Generic.IEqualityComparer`1<lSLNrn8lRDkfHYU1EeU>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* t5Zn1EmretqgRed7mnZ_siY8TlNnCT_TisRuntimeObject_m2C9D52D90AB131331241BFF4A21070294F40FB72_gshared (RuntimeObject* ___0_U20, RuntimeObject* ___1_U20, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_U20;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&t5Zn1EmretqgRed7mnZ_siY8TlNnCT_TisRuntimeObject_m2C9D52D90AB131331241BFF4A21070294F40FB72_RuntimeMethod_var)));
	}

IL_000e:
	{
		GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* L_2;
		L_2 = ((  GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		RuntimeObject* L_3 = ___1_U20;
		NullCheck(L_2);
		GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* L_4;
		L_4 = ((  GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* (*) (GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		RuntimeObject* L_5 = ___0_U20;
		NullCheck(L_4);
		GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* L_6;
		L_6 = ((  GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021* (*) (GWjGQNadWhjklk3KWL5_1_t8A3B4A104AF781DB4C6A653DACA47793FAA15021*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_6;
	}
}
// PsW3naIGaZm9HdS4EyEy t3SaX0IG7o0cjrjhWTLu.wwSKWiIGeGnmmBQ83LgT::ODPIGbgQyKW<System.Boolean>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool wwSKWiIGeGnmmBQ83LgT_ODPIGbgQyKW_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA00CBB39EB703367667AAB085C0F590E279263CE_gshared (wwSKWiIGeGnmmBQ83LgT_t9F5EFBFAC6D1C13D49C68D49CEC54A4B2AEE88C4* __this, RuntimeObject* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_U20;
		qHNsI1IHbt6MSvUAaMXD_gO3IHmVPH3W_m0DF8EA259C270017610BAAF1AA3F282D2D9FCB09(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		RuntimeObject* L_1 = ___0_U20;
		NullCheck(((MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21*)CastclassClass((RuntimeObject*)L_1, MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var)));
		RuntimeObject* L_2;
		L_2 = MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline(((MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21*)CastclassClass((RuntimeObject*)L_1, MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var)), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
		L_5 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_6;
		L_6 = Convert_ChangeType_m2AA053891B5D1BD5CA7689B72EE5ADC95CD3E14B(L_2, L_4, (RuntimeObject*)L_5, NULL);
		return ((*(bool*)((bool*)(bool*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}
}
// PsW3naIGaZm9HdS4EyEy t3SaX0IG7o0cjrjhWTLu.wwSKWiIGeGnmmBQ83LgT::ODPIGbgQyKW<System.Byte>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t wwSKWiIGeGnmmBQ83LgT_ODPIGbgQyKW_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA475574EECA47C82A78A971FB2279E4A04F7A7ED_gshared (wwSKWiIGeGnmmBQ83LgT_t9F5EFBFAC6D1C13D49C68D49CEC54A4B2AEE88C4* __this, RuntimeObject* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_U20;
		qHNsI1IHbt6MSvUAaMXD_gO3IHmVPH3W_m0DF8EA259C270017610BAAF1AA3F282D2D9FCB09(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		RuntimeObject* L_1 = ___0_U20;
		NullCheck(((MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21*)CastclassClass((RuntimeObject*)L_1, MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var)));
		RuntimeObject* L_2;
		L_2 = MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline(((MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21*)CastclassClass((RuntimeObject*)L_1, MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var)), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
		L_5 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_6;
		L_6 = Convert_ChangeType_m2AA053891B5D1BD5CA7689B72EE5ADC95CD3E14B(L_2, L_4, (RuntimeObject*)L_5, NULL);
		return ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}
}
// PsW3naIGaZm9HdS4EyEy t3SaX0IG7o0cjrjhWTLu.wwSKWiIGeGnmmBQ83LgT::ODPIGbgQyKW<System.Char>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar wwSKWiIGeGnmmBQ83LgT_ODPIGbgQyKW_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m02D2C7741A71A852C26184896F7F9F4B6D7A44CC_gshared (wwSKWiIGeGnmmBQ83LgT_t9F5EFBFAC6D1C13D49C68D49CEC54A4B2AEE88C4* __this, RuntimeObject* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_U20;
		qHNsI1IHbt6MSvUAaMXD_gO3IHmVPH3W_m0DF8EA259C270017610BAAF1AA3F282D2D9FCB09(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		RuntimeObject* L_1 = ___0_U20;
		NullCheck(((MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21*)CastclassClass((RuntimeObject*)L_1, MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var)));
		RuntimeObject* L_2;
		L_2 = MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline(((MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21*)CastclassClass((RuntimeObject*)L_1, MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var)), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
		L_5 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_6;
		L_6 = Convert_ChangeType_m2AA053891B5D1BD5CA7689B72EE5ADC95CD3E14B(L_2, L_4, (RuntimeObject*)L_5, NULL);
		return ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}
}
// PsW3naIGaZm9HdS4EyEy t3SaX0IG7o0cjrjhWTLu.wwSKWiIGeGnmmBQ83LgT::ODPIGbgQyKW<System.DateTime>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D wwSKWiIGeGnmmBQ83LgT_ODPIGbgQyKW_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_mD9BA343CAF3F9CC9641EE3237EEA61754FEC0A76_gshared (wwSKWiIGeGnmmBQ83LgT_t9F5EFBFAC6D1C13D49C68D49CEC54A4B2AEE88C4* __this, RuntimeObject* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_U20;
		qHNsI1IHbt6MSvUAaMXD_gO3IHmVPH3W_m0DF8EA259C270017610BAAF1AA3F282D2D9FCB09(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		RuntimeObject* L_1 = ___0_U20;
		NullCheck(((MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21*)CastclassClass((RuntimeObject*)L_1, MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var)));
		RuntimeObject* L_2;
		L_2 = MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline(((MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21*)CastclassClass((RuntimeObject*)L_1, MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var)), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
		L_5 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_6;
		L_6 = Convert_ChangeType_m2AA053891B5D1BD5CA7689B72EE5ADC95CD3E14B(L_2, L_4, (RuntimeObject*)L_5, NULL);
		return ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}
}
// PsW3naIGaZm9HdS4EyEy t3SaX0IG7o0cjrjhWTLu.wwSKWiIGeGnmmBQ83LgT::ODPIGbgQyKW<System.Decimal>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F wwSKWiIGeGnmmBQ83LgT_ODPIGbgQyKW_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_m449B06C12469C08086A6464AA54559326979C513_gshared (wwSKWiIGeGnmmBQ83LgT_t9F5EFBFAC6D1C13D49C68D49CEC54A4B2AEE88C4* __this, RuntimeObject* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_U20;
		qHNsI1IHbt6MSvUAaMXD_gO3IHmVPH3W_m0DF8EA259C270017610BAAF1AA3F282D2D9FCB09(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		RuntimeObject* L_1 = ___0_U20;
		NullCheck(((MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21*)CastclassClass((RuntimeObject*)L_1, MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var)));
		RuntimeObject* L_2;
		L_2 = MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline(((MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21*)CastclassClass((RuntimeObject*)L_1, MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var)), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
		L_5 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_6;
		L_6 = Convert_ChangeType_m2AA053891B5D1BD5CA7689B72EE5ADC95CD3E14B(L_2, L_4, (RuntimeObject*)L_5, NULL);
		return ((*(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)((Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}
}
// PsW3naIGaZm9HdS4EyEy t3SaX0IG7o0cjrjhWTLu.wwSKWiIGeGnmmBQ83LgT::ODPIGbgQyKW<System.Double>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double wwSKWiIGeGnmmBQ83LgT_ODPIGbgQyKW_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m7F962AE082145BC177A38D2372B580C88E21FB6D_gshared (wwSKWiIGeGnmmBQ83LgT_t9F5EFBFAC6D1C13D49C68D49CEC54A4B2AEE88C4* __this, RuntimeObject* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_U20;
		qHNsI1IHbt6MSvUAaMXD_gO3IHmVPH3W_m0DF8EA259C270017610BAAF1AA3F282D2D9FCB09(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		RuntimeObject* L_1 = ___0_U20;
		NullCheck(((MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21*)CastclassClass((RuntimeObject*)L_1, MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var)));
		RuntimeObject* L_2;
		L_2 = MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline(((MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21*)CastclassClass((RuntimeObject*)L_1, MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var)), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
		L_5 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_6;
		L_6 = Convert_ChangeType_m2AA053891B5D1BD5CA7689B72EE5ADC95CD3E14B(L_2, L_4, (RuntimeObject*)L_5, NULL);
		return ((*(double*)((double*)(double*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}
}
// PsW3naIGaZm9HdS4EyEy t3SaX0IG7o0cjrjhWTLu.wwSKWiIGeGnmmBQ83LgT::ODPIGbgQyKW<System.Int16>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t wwSKWiIGeGnmmBQ83LgT_ODPIGbgQyKW_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m4BBC7D077D2F796B9BB9776C5576F4BF2152FD75_gshared (wwSKWiIGeGnmmBQ83LgT_t9F5EFBFAC6D1C13D49C68D49CEC54A4B2AEE88C4* __this, RuntimeObject* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_U20;
		qHNsI1IHbt6MSvUAaMXD_gO3IHmVPH3W_m0DF8EA259C270017610BAAF1AA3F282D2D9FCB09(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		RuntimeObject* L_1 = ___0_U20;
		NullCheck(((MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21*)CastclassClass((RuntimeObject*)L_1, MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var)));
		RuntimeObject* L_2;
		L_2 = MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline(((MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21*)CastclassClass((RuntimeObject*)L_1, MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var)), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
		L_5 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_6;
		L_6 = Convert_ChangeType_m2AA053891B5D1BD5CA7689B72EE5ADC95CD3E14B(L_2, L_4, (RuntimeObject*)L_5, NULL);
		return ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}
}
// PsW3naIGaZm9HdS4EyEy t3SaX0IG7o0cjrjhWTLu.wwSKWiIGeGnmmBQ83LgT::ODPIGbgQyKW<System.Int32>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t wwSKWiIGeGnmmBQ83LgT_ODPIGbgQyKW_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBCC1CC795BE740E5E20F8B1EC59401BCF444A86C_gshared (wwSKWiIGeGnmmBQ83LgT_t9F5EFBFAC6D1C13D49C68D49CEC54A4B2AEE88C4* __this, RuntimeObject* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_U20;
		qHNsI1IHbt6MSvUAaMXD_gO3IHmVPH3W_m0DF8EA259C270017610BAAF1AA3F282D2D9FCB09(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		RuntimeObject* L_1 = ___0_U20;
		NullCheck(((MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21*)CastclassClass((RuntimeObject*)L_1, MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var)));
		RuntimeObject* L_2;
		L_2 = MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline(((MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21*)CastclassClass((RuntimeObject*)L_1, MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var)), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
		L_5 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_6;
		L_6 = Convert_ChangeType_m2AA053891B5D1BD5CA7689B72EE5ADC95CD3E14B(L_2, L_4, (RuntimeObject*)L_5, NULL);
		return ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}
}
// PsW3naIGaZm9HdS4EyEy t3SaX0IG7o0cjrjhWTLu.wwSKWiIGeGnmmBQ83LgT::ODPIGbgQyKW<System.Int64>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t wwSKWiIGeGnmmBQ83LgT_ODPIGbgQyKW_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA1DA5F90AEC5C5A2F979E0F4418D176CF53BF548_gshared (wwSKWiIGeGnmmBQ83LgT_t9F5EFBFAC6D1C13D49C68D49CEC54A4B2AEE88C4* __this, RuntimeObject* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_U20;
		qHNsI1IHbt6MSvUAaMXD_gO3IHmVPH3W_m0DF8EA259C270017610BAAF1AA3F282D2D9FCB09(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		RuntimeObject* L_1 = ___0_U20;
		NullCheck(((MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21*)CastclassClass((RuntimeObject*)L_1, MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var)));
		RuntimeObject* L_2;
		L_2 = MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline(((MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21*)CastclassClass((RuntimeObject*)L_1, MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var)), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
		L_5 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_6;
		L_6 = Convert_ChangeType_m2AA053891B5D1BD5CA7689B72EE5ADC95CD3E14B(L_2, L_4, (RuntimeObject*)L_5, NULL);
		return ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}
}
// PsW3naIGaZm9HdS4EyEy t3SaX0IG7o0cjrjhWTLu.wwSKWiIGeGnmmBQ83LgT::ODPIGbgQyKW<System.Object>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* wwSKWiIGeGnmmBQ83LgT_ODPIGbgQyKW_TisRuntimeObject_mA5C6450C04C0F6C4CD3164B36CB74306DD709AFA_gshared (wwSKWiIGeGnmmBQ83LgT_t9F5EFBFAC6D1C13D49C68D49CEC54A4B2AEE88C4* __this, RuntimeObject* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_U20;
		qHNsI1IHbt6MSvUAaMXD_gO3IHmVPH3W_m0DF8EA259C270017610BAAF1AA3F282D2D9FCB09(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		RuntimeObject* L_1 = ___0_U20;
		NullCheck(((MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21*)CastclassClass((RuntimeObject*)L_1, MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var)));
		RuntimeObject* L_2;
		L_2 = MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline(((MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21*)CastclassClass((RuntimeObject*)L_1, MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var)), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
		L_5 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_6;
		L_6 = Convert_ChangeType_m2AA053891B5D1BD5CA7689B72EE5ADC95CD3E14B(L_2, L_4, (RuntimeObject*)L_5, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
// PsW3naIGaZm9HdS4EyEy t3SaX0IG7o0cjrjhWTLu.wwSKWiIGeGnmmBQ83LgT::ODPIGbgQyKW<System.SByte>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t wwSKWiIGeGnmmBQ83LgT_ODPIGbgQyKW_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mDB6301D5E200AABF553B5A82709B3E355F27574D_gshared (wwSKWiIGeGnmmBQ83LgT_t9F5EFBFAC6D1C13D49C68D49CEC54A4B2AEE88C4* __this, RuntimeObject* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_U20;
		qHNsI1IHbt6MSvUAaMXD_gO3IHmVPH3W_m0DF8EA259C270017610BAAF1AA3F282D2D9FCB09(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		RuntimeObject* L_1 = ___0_U20;
		NullCheck(((MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21*)CastclassClass((RuntimeObject*)L_1, MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var)));
		RuntimeObject* L_2;
		L_2 = MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline(((MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21*)CastclassClass((RuntimeObject*)L_1, MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var)), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
		L_5 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_6;
		L_6 = Convert_ChangeType_m2AA053891B5D1BD5CA7689B72EE5ADC95CD3E14B(L_2, L_4, (RuntimeObject*)L_5, NULL);
		return ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}
}
// PsW3naIGaZm9HdS4EyEy t3SaX0IG7o0cjrjhWTLu.wwSKWiIGeGnmmBQ83LgT::ODPIGbgQyKW<System.Single>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float wwSKWiIGeGnmmBQ83LgT_ODPIGbgQyKW_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBA299209EE9B7804935F0AF263A87EFDCE153E01_gshared (wwSKWiIGeGnmmBQ83LgT_t9F5EFBFAC6D1C13D49C68D49CEC54A4B2AEE88C4* __this, RuntimeObject* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_U20;
		qHNsI1IHbt6MSvUAaMXD_gO3IHmVPH3W_m0DF8EA259C270017610BAAF1AA3F282D2D9FCB09(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		RuntimeObject* L_1 = ___0_U20;
		NullCheck(((MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21*)CastclassClass((RuntimeObject*)L_1, MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var)));
		RuntimeObject* L_2;
		L_2 = MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline(((MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21*)CastclassClass((RuntimeObject*)L_1, MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var)), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
		L_5 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_6;
		L_6 = Convert_ChangeType_m2AA053891B5D1BD5CA7689B72EE5ADC95CD3E14B(L_2, L_4, (RuntimeObject*)L_5, NULL);
		return ((*(float*)((float*)(float*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}
}
// PsW3naIGaZm9HdS4EyEy t3SaX0IG7o0cjrjhWTLu.wwSKWiIGeGnmmBQ83LgT::ODPIGbgQyKW<System.UInt16>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t wwSKWiIGeGnmmBQ83LgT_ODPIGbgQyKW_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD3744AF404AF4FA8803BF04BCAF9C147A3A09592_gshared (wwSKWiIGeGnmmBQ83LgT_t9F5EFBFAC6D1C13D49C68D49CEC54A4B2AEE88C4* __this, RuntimeObject* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_U20;
		qHNsI1IHbt6MSvUAaMXD_gO3IHmVPH3W_m0DF8EA259C270017610BAAF1AA3F282D2D9FCB09(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		RuntimeObject* L_1 = ___0_U20;
		NullCheck(((MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21*)CastclassClass((RuntimeObject*)L_1, MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var)));
		RuntimeObject* L_2;
		L_2 = MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline(((MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21*)CastclassClass((RuntimeObject*)L_1, MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var)), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
		L_5 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_6;
		L_6 = Convert_ChangeType_m2AA053891B5D1BD5CA7689B72EE5ADC95CD3E14B(L_2, L_4, (RuntimeObject*)L_5, NULL);
		return ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}
}
// PsW3naIGaZm9HdS4EyEy t3SaX0IG7o0cjrjhWTLu.wwSKWiIGeGnmmBQ83LgT::ODPIGbgQyKW<System.UInt32>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t wwSKWiIGeGnmmBQ83LgT_ODPIGbgQyKW_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m1498B8353F2CEF27F1AEFA89EF9B71DDDF600EF6_gshared (wwSKWiIGeGnmmBQ83LgT_t9F5EFBFAC6D1C13D49C68D49CEC54A4B2AEE88C4* __this, RuntimeObject* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_U20;
		qHNsI1IHbt6MSvUAaMXD_gO3IHmVPH3W_m0DF8EA259C270017610BAAF1AA3F282D2D9FCB09(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		RuntimeObject* L_1 = ___0_U20;
		NullCheck(((MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21*)CastclassClass((RuntimeObject*)L_1, MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var)));
		RuntimeObject* L_2;
		L_2 = MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline(((MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21*)CastclassClass((RuntimeObject*)L_1, MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var)), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
		L_5 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_6;
		L_6 = Convert_ChangeType_m2AA053891B5D1BD5CA7689B72EE5ADC95CD3E14B(L_2, L_4, (RuntimeObject*)L_5, NULL);
		return ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}
}
// PsW3naIGaZm9HdS4EyEy t3SaX0IG7o0cjrjhWTLu.wwSKWiIGeGnmmBQ83LgT::ODPIGbgQyKW<System.UInt64>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t wwSKWiIGeGnmmBQ83LgT_ODPIGbgQyKW_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4496D50421CB6F2CFBB00D6EB4133E02354BBC43_gshared (wwSKWiIGeGnmmBQ83LgT_t9F5EFBFAC6D1C13D49C68D49CEC54A4B2AEE88C4* __this, RuntimeObject* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_U20;
		qHNsI1IHbt6MSvUAaMXD_gO3IHmVPH3W_m0DF8EA259C270017610BAAF1AA3F282D2D9FCB09(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		RuntimeObject* L_1 = ___0_U20;
		NullCheck(((MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21*)CastclassClass((RuntimeObject*)L_1, MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var)));
		RuntimeObject* L_2;
		L_2 = MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline(((MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21*)CastclassClass((RuntimeObject*)L_1, MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var)), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
		L_5 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_6;
		L_6 = Convert_ChangeType_m2AA053891B5D1BD5CA7689B72EE5ADC95CD3E14B(L_2, L_4, (RuntimeObject*)L_5, NULL);
		return ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}
}
// ymgEqJIU5emOkIEDa8WI.dlBNo8IUdTB9OvDiafIL`1<bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ> KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk::CY2IUosC1Rc<System.Object>(System.Collections.Generic.IEnumerable`1<YvdJmLIU64NWapbsXKpQ>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* x5rwaxIU1lgC3gy0hDDk_CY2IUosC1Rc_TisRuntimeObject_mE2A6C3715ABE508C9ED4BF6ABE87CF15325F9D38_gshared (RuntimeObject* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_U20;
		qHNsI1IHbt6MSvUAaMXD_gO3IHmVPH3W_m0DF8EA259C270017610BAAF1AA3F282D2D9FCB09((RuntimeObject*)L_0, _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5, NULL);
		RuntimeObject* L_1 = ___0_U20;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E* L_2 = ((U3CU3Ec__0_1_tE0BE74224AF91240FB34F7A8C0A4C8A6B6A50652_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___U3CU3E9__0_0_1;
		Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		U3CU3Ec__0_1_tE0BE74224AF91240FB34F7A8C0A4C8A6B6A50652* L_4 = ((U3CU3Ec__0_1_tE0BE74224AF91240FB34F7A8C0A4C8A6B6A50652_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___U3CU3E9_0;
		Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E* L_5 = (Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		NullCheck(L_5);
		((  void (*) (Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_5, (RuntimeObject*)L_4, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 3));
		Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E* L_6 = L_5;
		((U3CU3Ec__0_1_tE0BE74224AF91240FB34F7A8C0A4C8A6B6A50652_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___U3CU3E9__0_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__0_1_tE0BE74224AF91240FB34F7A8C0A4C8A6B6A50652_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___U3CU3E9__0_0_1), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002b:
	{
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(G_B2_1, G_B2_0, il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_8;
		L_8 = x5rwaxIU1lgC3gy0hDDk_E4iIwWxobRy_m766C659A23C2D490B19343D3F373DEF7998D5069(L_7, NULL);
		return L_8;
	}
}
// ymgEqJIU5emOkIEDa8WI.dlBNo8IUdTB9OvDiafIL`1<bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ> KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk::EtlIUf9YqbA<System.Object>(System.Collections.Generic.IEnumerable`1<sqMhL4IUXSVQ3jUr2OXn>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* x5rwaxIU1lgC3gy0hDDk_EtlIUf9YqbA_TisRuntimeObject_m5B7BE4B535D0C8A8E2895290EB6C2A630AEC0A01_gshared (RuntimeObject* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_U20;
		qHNsI1IHbt6MSvUAaMXD_gO3IHmVPH3W_m0DF8EA259C270017610BAAF1AA3F282D2D9FCB09((RuntimeObject*)L_0, _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5, NULL);
		RuntimeObject* L_1 = ___0_U20;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E* L_2 = ((U3CU3Ec__2_1_tD9CC8E8B68712880473A649070B4C5E420FE7B7E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___U3CU3E9__2_0_1;
		Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		U3CU3Ec__2_1_tD9CC8E8B68712880473A649070B4C5E420FE7B7E* L_4 = ((U3CU3Ec__2_1_tD9CC8E8B68712880473A649070B4C5E420FE7B7E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___U3CU3E9_0;
		Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E* L_5 = (Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		NullCheck(L_5);
		((  void (*) (Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_5, (RuntimeObject*)L_4, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 3));
		Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E* L_6 = L_5;
		((U3CU3Ec__2_1_tD9CC8E8B68712880473A649070B4C5E420FE7B7E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___U3CU3E9__2_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__2_1_tD9CC8E8B68712880473A649070B4C5E420FE7B7E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___U3CU3E9__2_0_1), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002b:
	{
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(G_B2_1, G_B2_0, il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_8;
		L_8 = x5rwaxIU1lgC3gy0hDDk_E4iIwWxobRy_m766C659A23C2D490B19343D3F373DEF7998D5069(L_7, NULL);
		return L_8;
	}
}
// System.Collections.Generic.IEnumerable`1<mCZvhGIwlUC5WLBDmXUW> KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk::FGxIwTOAWpx<System.Object>(System.Collections.Generic.IEnumerable`1<bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* x5rwaxIU1lgC3gy0hDDk_FGxIwTOAWpx_TisRuntimeObject_mC4D6488265F4FCBD5FCC7F54DE4AFD6603A5DCD8_gshared (RuntimeObject* ___0_U20, RuntimeObject* ___1_U20, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_U20;
		RuntimeObject* L_1 = ___1_U20;
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
// ymgEqJIU5emOkIEDa8WI.dlBNo8IUdTB9OvDiafIL`1<bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ> KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk::ImXIUKj1leL<System.Object>(System.Collections.Generic.IEnumerable`1<cZt3eVIUVwfP6C360rp5>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* x5rwaxIU1lgC3gy0hDDk_ImXIUKj1leL_TisRuntimeObject_m6EBE85681EC958CC28EFDF74CF18F36C77DBABF6_gshared (RuntimeObject* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_U20;
		qHNsI1IHbt6MSvUAaMXD_gO3IHmVPH3W_m0DF8EA259C270017610BAAF1AA3F282D2D9FCB09((RuntimeObject*)L_0, _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5, NULL);
		RuntimeObject* L_1 = ___0_U20;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E* L_2 = ((U3CU3Ec__1_1_t6BECFF0052993C618B678CEA3B331B69453C8C5A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___U3CU3E9__1_0_1;
		Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		U3CU3Ec__1_1_t6BECFF0052993C618B678CEA3B331B69453C8C5A* L_4 = ((U3CU3Ec__1_1_t6BECFF0052993C618B678CEA3B331B69453C8C5A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___U3CU3E9_0;
		Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E* L_5 = (Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		NullCheck(L_5);
		((  void (*) (Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_5, (RuntimeObject*)L_4, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 3));
		Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E* L_6 = L_5;
		((U3CU3Ec__1_1_t6BECFF0052993C618B678CEA3B331B69453C8C5A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___U3CU3E9__1_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__1_1_t6BECFF0052993C618B678CEA3B331B69453C8C5A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___U3CU3E9__1_0_1), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002b:
	{
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(G_B2_1, G_B2_0, il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_8;
		L_8 = x5rwaxIU1lgC3gy0hDDk_E4iIwWxobRy_m766C659A23C2D490B19343D3F373DEF7998D5069(L_7, NULL);
		return L_8;
	}
}
// U KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk::Value<System.Int64>(System.Collections.Generic.IEnumerable`1<bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t x5rwaxIU1lgC3gy0hDDk_Value_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m2ABED02E3E05B6199F48EC56F584D18003B11E8C_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		int64_t L_1;
		L_1 = ((  int64_t (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
// U KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk::Value<System.Object>(System.Collections.Generic.IEnumerable`1<bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* x5rwaxIU1lgC3gy0hDDk_Value_TisRuntimeObject_m83CA099254FA669D1AC46A59667688E49940C14E_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
// U KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk::Value<System.Single>(System.Collections.Generic.IEnumerable`1<bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float x5rwaxIU1lgC3gy0hDDk_Value_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m0913F9AC935DADD4430091B2362C9EA0C476DDB7_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		float L_1;
		L_1 = ((  float (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
// U KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk::Value<System.Object,System.Int64>(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t x5rwaxIU1lgC3gy0hDDk_Value_TisRuntimeObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m773E72F7DAFED17A36F838CED46E869469217F34_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&a2gGKII7j9Qd3ZepQemJ_t621214B9B0AE4E89A9DA12DA3D6D3051F579C037_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	a2gGKII7j9Qd3ZepQemJ_t621214B9B0AE4E89A9DA12DA3D6D3051F579C037* G_B2_0 = NULL;
	a2gGKII7j9Qd3ZepQemJ_t621214B9B0AE4E89A9DA12DA3D6D3051F579C037* G_B1_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_value;
		qHNsI1IHbt6MSvUAaMXD_gO3IHmVPH3W_m0DF8EA259C270017610BAAF1AA3F282D2D9FCB09((RuntimeObject*)L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		RuntimeObject* L_1 = ___0_value;
		a2gGKII7j9Qd3ZepQemJ_t621214B9B0AE4E89A9DA12DA3D6D3051F579C037* L_2 = ((a2gGKII7j9Qd3ZepQemJ_t621214B9B0AE4E89A9DA12DA3D6D3051F579C037*)IsInstClass((RuntimeObject*)L_1, a2gGKII7j9Qd3ZepQemJ_t621214B9B0AE4E89A9DA12DA3D6D3051F579C037_il2cpp_TypeInfo_var));
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC79AE10DF38CEBD5131D205BA33F16E8B87ED170)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&x5rwaxIU1lgC3gy0hDDk_Value_TisRuntimeObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m773E72F7DAFED17A36F838CED46E869469217F34_RuntimeMethod_var)));
	}

IL_001f:
	{
		int64_t L_4;
		L_4 = ((  int64_t (*) (a2gGKII7j9Qd3ZepQemJ_t621214B9B0AE4E89A9DA12DA3D6D3051F579C037*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(G_B2_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}
}
// U KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk::Value<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* x5rwaxIU1lgC3gy0hDDk_Value_TisRuntimeObject_TisRuntimeObject_m80D8C9F26EDC3C4469843F3F16250E0F34D58C2E_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&a2gGKII7j9Qd3ZepQemJ_t621214B9B0AE4E89A9DA12DA3D6D3051F579C037_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	a2gGKII7j9Qd3ZepQemJ_t621214B9B0AE4E89A9DA12DA3D6D3051F579C037* G_B2_0 = NULL;
	a2gGKII7j9Qd3ZepQemJ_t621214B9B0AE4E89A9DA12DA3D6D3051F579C037* G_B1_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_value;
		qHNsI1IHbt6MSvUAaMXD_gO3IHmVPH3W_m0DF8EA259C270017610BAAF1AA3F282D2D9FCB09((RuntimeObject*)L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		RuntimeObject* L_1 = ___0_value;
		a2gGKII7j9Qd3ZepQemJ_t621214B9B0AE4E89A9DA12DA3D6D3051F579C037* L_2 = ((a2gGKII7j9Qd3ZepQemJ_t621214B9B0AE4E89A9DA12DA3D6D3051F579C037*)IsInstClass((RuntimeObject*)L_1, a2gGKII7j9Qd3ZepQemJ_t621214B9B0AE4E89A9DA12DA3D6D3051F579C037_il2cpp_TypeInfo_var));
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC79AE10DF38CEBD5131D205BA33F16E8B87ED170)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&x5rwaxIU1lgC3gy0hDDk_Value_TisRuntimeObject_TisRuntimeObject_m80D8C9F26EDC3C4469843F3F16250E0F34D58C2E_RuntimeMethod_var)));
	}

IL_001f:
	{
		RuntimeObject* L_4;
		L_4 = ((  RuntimeObject* (*) (a2gGKII7j9Qd3ZepQemJ_t621214B9B0AE4E89A9DA12DA3D6D3051F579C037*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(G_B2_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}
}
// U KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk::Value<System.Object,System.Single>(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float x5rwaxIU1lgC3gy0hDDk_Value_TisRuntimeObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m582948C38DB3C0ACF5813EDAC4D4B36E491A3C94_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&a2gGKII7j9Qd3ZepQemJ_t621214B9B0AE4E89A9DA12DA3D6D3051F579C037_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	a2gGKII7j9Qd3ZepQemJ_t621214B9B0AE4E89A9DA12DA3D6D3051F579C037* G_B2_0 = NULL;
	a2gGKII7j9Qd3ZepQemJ_t621214B9B0AE4E89A9DA12DA3D6D3051F579C037* G_B1_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_value;
		qHNsI1IHbt6MSvUAaMXD_gO3IHmVPH3W_m0DF8EA259C270017610BAAF1AA3F282D2D9FCB09((RuntimeObject*)L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		RuntimeObject* L_1 = ___0_value;
		a2gGKII7j9Qd3ZepQemJ_t621214B9B0AE4E89A9DA12DA3D6D3051F579C037* L_2 = ((a2gGKII7j9Qd3ZepQemJ_t621214B9B0AE4E89A9DA12DA3D6D3051F579C037*)IsInstClass((RuntimeObject*)L_1, a2gGKII7j9Qd3ZepQemJ_t621214B9B0AE4E89A9DA12DA3D6D3051F579C037_il2cpp_TypeInfo_var));
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC79AE10DF38CEBD5131D205BA33F16E8B87ED170)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&x5rwaxIU1lgC3gy0hDDk_Value_TisRuntimeObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m582948C38DB3C0ACF5813EDAC4D4B36E491A3C94_RuntimeMethod_var)));
	}

IL_001f:
	{
		float L_4;
		L_4 = ((  float (*) (a2gGKII7j9Qd3ZepQemJ_t621214B9B0AE4E89A9DA12DA3D6D3051F579C037*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(G_B2_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}
}
// ymgEqJIU5emOkIEDa8WI.dlBNo8IUdTB9OvDiafIL`1<bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ> KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk::aF9IwZiP8R7<System.Object>(System.Collections.Generic.IEnumerable`1<xEAboNIwYXiPiU5g2sHi>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* x5rwaxIU1lgC3gy0hDDk_aF9IwZiP8R7_TisRuntimeObject_m97070AA841577F420E61272327470EB8A224DE75_gshared (RuntimeObject* ___0_U20, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_U20;
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		RuntimeObject* L_2;
		L_2 = x5rwaxIU1lgC3gy0hDDk_E4iIwWxobRy_m766C659A23C2D490B19343D3F373DEF7998D5069(L_1, NULL);
		return L_2;
	}
}
// veSEQAIwpmcZJ6vmHS0m KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk::gZyIwHaWVWD<System.Object,System.Boolean>(tC57LKIwGKqFaaVCLe81)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool x5rwaxIU1lgC3gy0hDDk_gZyIwHaWVWD_TisRuntimeObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m895060EEA8B8E54049F7843DB0F79B835ECDB982_gshared (RuntimeObject* ___0_auAV1qIwN6mN3IDk0iPU, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pxdx4NIjoIfmCFcUEecO_tEF8C580AFE2B34F24CCD7C8F26C54D67A7F716CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21* V_1 = NULL;
	Type_t* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_auAV1qIwN6mN3IDk0iPU;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		RuntimeObject* L_2 = ___0_auAV1qIwN6mN3IDk0iPU;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1))))
		{
			goto IL_0057;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_0_0_0_var) };
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		if ((((RuntimeObject*)(Type_t*)L_4) == ((RuntimeObject*)(Type_t*)L_6)))
		{
			goto IL_0057;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		if ((((RuntimeObject*)(Type_t*)L_8) == ((RuntimeObject*)(Type_t*)L_10)))
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_11 = ___0_auAV1qIwN6mN3IDk0iPU;
		return ((*(bool*)((bool*)(bool*)UnBox(L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}

IL_0057:
	{
		RuntimeObject* L_12 = ___0_auAV1qIwN6mN3IDk0iPU;
		V_1 = ((MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21*)IsInstClass((RuntimeObject*)L_12, MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var));
		MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21* L_13 = V_1;
		if (L_13)
		{
			goto IL_0090;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_14;
		L_14 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		RuntimeObject* L_15 = ___0_auAV1qIwN6mN3IDk0iPU;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		String_t* L_19;
		L_19 = fduRGHI0VRd5tjqPwiyf_TgdI04liofE_m55D122CB0DDEE25A6C3E7C0D3D2D1202166C83AD(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral663651D94667E59612E8078B3B8A1CA07ABFC6D6)), (RuntimeObject*)L_14, (RuntimeObject*)L_16, (RuntimeObject*)L_18, NULL);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_20 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_20, L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&x5rwaxIU1lgC3gy0hDDk_gZyIwHaWVWD_TisRuntimeObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m895060EEA8B8E54049F7843DB0F79B835ECDB982_RuntimeMethod_var)));
	}

IL_0090:
	{
		MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21* L_21 = V_1;
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline(L_21, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))))
		{
			goto IL_00a9;
		}
	}
	{
		MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21* L_23 = V_1;
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline(L_23, NULL);
		return ((*(bool*)((bool*)(bool*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}

IL_00a9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		V_2 = L_26;
		Type_t* L_27 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Pxdx4NIjoIfmCFcUEecO_tEF8C580AFE2B34F24CCD7C8F26C54D67A7F716CF_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Pxdx4NIjoIfmCFcUEecO_oXpI0lHqJLP_mAAB5095DD7B77D6AE0CED69929E2AA87A9F877AA(L_27, NULL);
		if (!L_28)
		{
			goto IL_00d5;
		}
	}
	{
		MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21* L_29 = V_1;
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline(L_29, NULL);
		if (L_30)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_31 = V_0;
		return L_31;
	}

IL_00ce:
	{
		Type_t* L_32 = V_2;
		Type_t* L_33;
		L_33 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_32, NULL);
		V_2 = L_33;
	}

IL_00d5:
	{
		MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21* L_34 = V_1;
		NullCheck(L_34);
		RuntimeObject* L_35;
		L_35 = MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline(L_34, NULL);
		Type_t* L_36 = V_2;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_37;
		L_37 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_38;
		L_38 = Convert_ChangeType_m2AA053891B5D1BD5CA7689B72EE5ADC95CD3E14B(L_35, L_36, (RuntimeObject*)L_37, NULL);
		return ((*(bool*)((bool*)(bool*)UnBox(L_38, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}
}
// veSEQAIwpmcZJ6vmHS0m KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk::gZyIwHaWVWD<System.Object,System.DateTime>(tC57LKIwGKqFaaVCLe81)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D x5rwaxIU1lgC3gy0hDDk_gZyIwHaWVWD_TisRuntimeObject_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_mB4A4235C1F31A3195D60F0A02E8DCC0392DEB19A_gshared (RuntimeObject* ___0_auAV1qIwN6mN3IDk0iPU, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pxdx4NIjoIfmCFcUEecO_tEF8C580AFE2B34F24CCD7C8F26C54D67A7F716CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21* V_1 = NULL;
	Type_t* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_auAV1qIwN6mN3IDk0iPU;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		RuntimeObject* L_2 = ___0_auAV1qIwN6mN3IDk0iPU;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1))))
		{
			goto IL_0057;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_0_0_0_var) };
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		if ((((RuntimeObject*)(Type_t*)L_4) == ((RuntimeObject*)(Type_t*)L_6)))
		{
			goto IL_0057;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		if ((((RuntimeObject*)(Type_t*)L_8) == ((RuntimeObject*)(Type_t*)L_10)))
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_11 = ___0_auAV1qIwN6mN3IDk0iPU;
		return ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}

IL_0057:
	{
		RuntimeObject* L_12 = ___0_auAV1qIwN6mN3IDk0iPU;
		V_1 = ((MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21*)IsInstClass((RuntimeObject*)L_12, MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var));
		MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21* L_13 = V_1;
		if (L_13)
		{
			goto IL_0090;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_14;
		L_14 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		RuntimeObject* L_15 = ___0_auAV1qIwN6mN3IDk0iPU;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		String_t* L_19;
		L_19 = fduRGHI0VRd5tjqPwiyf_TgdI04liofE_m55D122CB0DDEE25A6C3E7C0D3D2D1202166C83AD(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral663651D94667E59612E8078B3B8A1CA07ABFC6D6)), (RuntimeObject*)L_14, (RuntimeObject*)L_16, (RuntimeObject*)L_18, NULL);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_20 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_20, L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&x5rwaxIU1lgC3gy0hDDk_gZyIwHaWVWD_TisRuntimeObject_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_mB4A4235C1F31A3195D60F0A02E8DCC0392DEB19A_RuntimeMethod_var)));
	}

IL_0090:
	{
		MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21* L_21 = V_1;
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline(L_21, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))))
		{
			goto IL_00a9;
		}
	}
	{
		MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21* L_23 = V_1;
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline(L_23, NULL);
		return ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}

IL_00a9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		V_2 = L_26;
		Type_t* L_27 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Pxdx4NIjoIfmCFcUEecO_tEF8C580AFE2B34F24CCD7C8F26C54D67A7F716CF_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Pxdx4NIjoIfmCFcUEecO_oXpI0lHqJLP_mAAB5095DD7B77D6AE0CED69929E2AA87A9F877AA(L_27, NULL);
		if (!L_28)
		{
			goto IL_00d5;
		}
	}
	{
		MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21* L_29 = V_1;
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline(L_29, NULL);
		if (L_30)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_31 = V_0;
		return L_31;
	}

IL_00ce:
	{
		Type_t* L_32 = V_2;
		Type_t* L_33;
		L_33 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_32, NULL);
		V_2 = L_33;
	}

IL_00d5:
	{
		MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21* L_34 = V_1;
		NullCheck(L_34);
		RuntimeObject* L_35;
		L_35 = MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline(L_34, NULL);
		Type_t* L_36 = V_2;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_37;
		L_37 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_38;
		L_38 = Convert_ChangeType_m2AA053891B5D1BD5CA7689B72EE5ADC95CD3E14B(L_35, L_36, (RuntimeObject*)L_37, NULL);
		return ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_38, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}
}
// veSEQAIwpmcZJ6vmHS0m KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk::gZyIwHaWVWD<System.Object,System.Int64>(tC57LKIwGKqFaaVCLe81)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t x5rwaxIU1lgC3gy0hDDk_gZyIwHaWVWD_TisRuntimeObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m689455B8F846443C21A6040D792BC37C2CCDD9EE_gshared (RuntimeObject* ___0_auAV1qIwN6mN3IDk0iPU, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pxdx4NIjoIfmCFcUEecO_tEF8C580AFE2B34F24CCD7C8F26C54D67A7F716CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21* V_1 = NULL;
	Type_t* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_auAV1qIwN6mN3IDk0iPU;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		int64_t L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		RuntimeObject* L_2 = ___0_auAV1qIwN6mN3IDk0iPU;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1))))
		{
			goto IL_0057;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_0_0_0_var) };
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		if ((((RuntimeObject*)(Type_t*)L_4) == ((RuntimeObject*)(Type_t*)L_6)))
		{
			goto IL_0057;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		if ((((RuntimeObject*)(Type_t*)L_8) == ((RuntimeObject*)(Type_t*)L_10)))
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_11 = ___0_auAV1qIwN6mN3IDk0iPU;
		return ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}

IL_0057:
	{
		RuntimeObject* L_12 = ___0_auAV1qIwN6mN3IDk0iPU;
		V_1 = ((MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21*)IsInstClass((RuntimeObject*)L_12, MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var));
		MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21* L_13 = V_1;
		if (L_13)
		{
			goto IL_0090;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_14;
		L_14 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		RuntimeObject* L_15 = ___0_auAV1qIwN6mN3IDk0iPU;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		String_t* L_19;
		L_19 = fduRGHI0VRd5tjqPwiyf_TgdI04liofE_m55D122CB0DDEE25A6C3E7C0D3D2D1202166C83AD(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral663651D94667E59612E8078B3B8A1CA07ABFC6D6)), (RuntimeObject*)L_14, (RuntimeObject*)L_16, (RuntimeObject*)L_18, NULL);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_20 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_20, L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&x5rwaxIU1lgC3gy0hDDk_gZyIwHaWVWD_TisRuntimeObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m689455B8F846443C21A6040D792BC37C2CCDD9EE_RuntimeMethod_var)));
	}

IL_0090:
	{
		MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21* L_21 = V_1;
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline(L_21, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))))
		{
			goto IL_00a9;
		}
	}
	{
		MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21* L_23 = V_1;
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline(L_23, NULL);
		return ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}

IL_00a9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		V_2 = L_26;
		Type_t* L_27 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Pxdx4NIjoIfmCFcUEecO_tEF8C580AFE2B34F24CCD7C8F26C54D67A7F716CF_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Pxdx4NIjoIfmCFcUEecO_oXpI0lHqJLP_mAAB5095DD7B77D6AE0CED69929E2AA87A9F877AA(L_27, NULL);
		if (!L_28)
		{
			goto IL_00d5;
		}
	}
	{
		MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21* L_29 = V_1;
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline(L_29, NULL);
		if (L_30)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		int64_t L_31 = V_0;
		return L_31;
	}

IL_00ce:
	{
		Type_t* L_32 = V_2;
		Type_t* L_33;
		L_33 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_32, NULL);
		V_2 = L_33;
	}

IL_00d5:
	{
		MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21* L_34 = V_1;
		NullCheck(L_34);
		RuntimeObject* L_35;
		L_35 = MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline(L_34, NULL);
		Type_t* L_36 = V_2;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_37;
		L_37 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_38;
		L_38 = Convert_ChangeType_m2AA053891B5D1BD5CA7689B72EE5ADC95CD3E14B(L_35, L_36, (RuntimeObject*)L_37, NULL);
		return ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_38, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}
}
// veSEQAIwpmcZJ6vmHS0m KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk::gZyIwHaWVWD<System.Object,System.Object>(tC57LKIwGKqFaaVCLe81)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* x5rwaxIU1lgC3gy0hDDk_gZyIwHaWVWD_TisRuntimeObject_TisRuntimeObject_m4FC97F2EFEDCA65B6EB02CE69C4CA045F6EF1B91_gshared (RuntimeObject* ___0_auAV1qIwN6mN3IDk0iPU, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pxdx4NIjoIfmCFcUEecO_tEF8C580AFE2B34F24CCD7C8F26C54D67A7F716CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21* V_1 = NULL;
	Type_t* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_auAV1qIwN6mN3IDk0iPU;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		RuntimeObject* L_2 = ___0_auAV1qIwN6mN3IDk0iPU;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1))))
		{
			goto IL_0057;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_0_0_0_var) };
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		if ((((RuntimeObject*)(Type_t*)L_4) == ((RuntimeObject*)(Type_t*)L_6)))
		{
			goto IL_0057;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		if ((((RuntimeObject*)(Type_t*)L_8) == ((RuntimeObject*)(Type_t*)L_10)))
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_11 = ___0_auAV1qIwN6mN3IDk0iPU;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0057:
	{
		RuntimeObject* L_12 = ___0_auAV1qIwN6mN3IDk0iPU;
		V_1 = ((MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21*)IsInstClass((RuntimeObject*)L_12, MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var));
		MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21* L_13 = V_1;
		if (L_13)
		{
			goto IL_0090;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_14;
		L_14 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		RuntimeObject* L_15 = ___0_auAV1qIwN6mN3IDk0iPU;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		String_t* L_19;
		L_19 = fduRGHI0VRd5tjqPwiyf_TgdI04liofE_m55D122CB0DDEE25A6C3E7C0D3D2D1202166C83AD(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral663651D94667E59612E8078B3B8A1CA07ABFC6D6)), (RuntimeObject*)L_14, (RuntimeObject*)L_16, (RuntimeObject*)L_18, NULL);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_20 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_20, L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&x5rwaxIU1lgC3gy0hDDk_gZyIwHaWVWD_TisRuntimeObject_TisRuntimeObject_m4FC97F2EFEDCA65B6EB02CE69C4CA045F6EF1B91_RuntimeMethod_var)));
	}

IL_0090:
	{
		MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21* L_21 = V_1;
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline(L_21, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))))
		{
			goto IL_00a9;
		}
	}
	{
		MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21* L_23 = V_1;
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline(L_23, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_24, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_00a9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		V_2 = L_26;
		Type_t* L_27 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Pxdx4NIjoIfmCFcUEecO_tEF8C580AFE2B34F24CCD7C8F26C54D67A7F716CF_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Pxdx4NIjoIfmCFcUEecO_oXpI0lHqJLP_mAAB5095DD7B77D6AE0CED69929E2AA87A9F877AA(L_27, NULL);
		if (!L_28)
		{
			goto IL_00d5;
		}
	}
	{
		MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21* L_29 = V_1;
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline(L_29, NULL);
		if (L_30)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_31 = V_0;
		return L_31;
	}

IL_00ce:
	{
		Type_t* L_32 = V_2;
		Type_t* L_33;
		L_33 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_32, NULL);
		V_2 = L_33;
	}

IL_00d5:
	{
		MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21* L_34 = V_1;
		NullCheck(L_34);
		RuntimeObject* L_35;
		L_35 = MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline(L_34, NULL);
		Type_t* L_36 = V_2;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_37;
		L_37 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_38;
		L_38 = Convert_ChangeType_m2AA053891B5D1BD5CA7689B72EE5ADC95CD3E14B(L_35, L_36, (RuntimeObject*)L_37, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
// veSEQAIwpmcZJ6vmHS0m KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk::gZyIwHaWVWD<System.Object,System.Single>(tC57LKIwGKqFaaVCLe81)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float x5rwaxIU1lgC3gy0hDDk_gZyIwHaWVWD_TisRuntimeObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m9F2BEE7A27D38F0BF0699345116EEA9679776A83_gshared (RuntimeObject* ___0_auAV1qIwN6mN3IDk0iPU, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pxdx4NIjoIfmCFcUEecO_tEF8C580AFE2B34F24CCD7C8F26C54D67A7F716CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21* V_1 = NULL;
	Type_t* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_auAV1qIwN6mN3IDk0iPU;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		float L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		RuntimeObject* L_2 = ___0_auAV1qIwN6mN3IDk0iPU;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1))))
		{
			goto IL_0057;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_0_0_0_var) };
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		if ((((RuntimeObject*)(Type_t*)L_4) == ((RuntimeObject*)(Type_t*)L_6)))
		{
			goto IL_0057;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		if ((((RuntimeObject*)(Type_t*)L_8) == ((RuntimeObject*)(Type_t*)L_10)))
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_11 = ___0_auAV1qIwN6mN3IDk0iPU;
		return ((*(float*)((float*)(float*)UnBox(L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}

IL_0057:
	{
		RuntimeObject* L_12 = ___0_auAV1qIwN6mN3IDk0iPU;
		V_1 = ((MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21*)IsInstClass((RuntimeObject*)L_12, MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21_il2cpp_TypeInfo_var));
		MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21* L_13 = V_1;
		if (L_13)
		{
			goto IL_0090;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_14;
		L_14 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		RuntimeObject* L_15 = ___0_auAV1qIwN6mN3IDk0iPU;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		String_t* L_19;
		L_19 = fduRGHI0VRd5tjqPwiyf_TgdI04liofE_m55D122CB0DDEE25A6C3E7C0D3D2D1202166C83AD(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral663651D94667E59612E8078B3B8A1CA07ABFC6D6)), (RuntimeObject*)L_14, (RuntimeObject*)L_16, (RuntimeObject*)L_18, NULL);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_20 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_20, L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&x5rwaxIU1lgC3gy0hDDk_gZyIwHaWVWD_TisRuntimeObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m9F2BEE7A27D38F0BF0699345116EEA9679776A83_RuntimeMethod_var)));
	}

IL_0090:
	{
		MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21* L_21 = V_1;
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline(L_21, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))))
		{
			goto IL_00a9;
		}
	}
	{
		MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21* L_23 = V_1;
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline(L_23, NULL);
		return ((*(float*)((float*)(float*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}

IL_00a9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		V_2 = L_26;
		Type_t* L_27 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Pxdx4NIjoIfmCFcUEecO_tEF8C580AFE2B34F24CCD7C8F26C54D67A7F716CF_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Pxdx4NIjoIfmCFcUEecO_oXpI0lHqJLP_mAAB5095DD7B77D6AE0CED69929E2AA87A9F877AA(L_27, NULL);
		if (!L_28)
		{
			goto IL_00d5;
		}
	}
	{
		MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21* L_29 = V_1;
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline(L_29, NULL);
		if (L_30)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		float L_31 = V_0;
		return L_31;
	}

IL_00ce:
	{
		Type_t* L_32 = V_2;
		Type_t* L_33;
		L_33 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_32, NULL);
		V_2 = L_33;
	}

IL_00d5:
	{
		MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21* L_34 = V_1;
		NullCheck(L_34);
		RuntimeObject* L_35;
		L_35 = MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline(L_34, NULL);
		Type_t* L_36 = V_2;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_37;
		L_37 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_38;
		L_38 = Convert_ChangeType_m2AA053891B5D1BD5CA7689B72EE5ADC95CD3E14B(L_35, L_36, (RuntimeObject*)L_37, NULL);
		return ((*(float*)((float*)(float*)UnBox(L_38, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}
}
// System.Collections.Generic.IEnumerable`1<Qv1dhVIwnKEMV4aca758> KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk::kX9Iwx7xnCG<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<w5X76rIwMJTiKgX3XoLc>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* x5rwaxIU1lgC3gy0hDDk_kX9Iwx7xnCG_TisRuntimeObject_TisRuntimeObject_m5AF9E5DCF3D848F42F1CBB2ED2081EAA39B04040_gshared (RuntimeObject* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_U20;
		qHNsI1IHbt6MSvUAaMXD_gO3IHmVPH3W_m0DF8EA259C270017610BAAF1AA3F282D2D9FCB09((RuntimeObject*)L_0, _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5, NULL);
		RuntimeObject* L_1 = ___0_U20;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E* L_2 = ((U3CU3Ec__13_2_t4C8DFD9B557916EB78BD4095054C3D7153CC4921_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___U3CU3E9__13_0_1;
		Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		U3CU3Ec__13_2_t4C8DFD9B557916EB78BD4095054C3D7153CC4921* L_4 = ((U3CU3Ec__13_2_t4C8DFD9B557916EB78BD4095054C3D7153CC4921_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___U3CU3E9_0;
		Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E* L_5 = (Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		NullCheck(L_5);
		((  void (*) (Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_5, (RuntimeObject*)L_4, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 3));
		Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E* L_6 = L_5;
		((U3CU3Ec__13_2_t4C8DFD9B557916EB78BD4095054C3D7153CC4921_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___U3CU3E9__13_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__13_2_t4C8DFD9B557916EB78BD4095054C3D7153CC4921_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___U3CU3E9__13_0_1), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002b:
	{
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(G_B2_1, G_B2_0, il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_8;
		L_8 = ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_7, il2cpp_rgctx_method(method->rgctx_data, 5));
		return L_8;
	}
}
// System.Collections.Generic.IEnumerable`1<oeFVgpIwOb8CulW2HV3G> KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk::mCMIwSX7kIM<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<ofcmrOIwCs1FmYlxKqAD>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* x5rwaxIU1lgC3gy0hDDk_mCMIwSX7kIM_TisRuntimeObject_TisRuntimeObject_m9F405058A86A679CB83F93A1070D0AFA785BBC54_gshared (RuntimeObject* ___0_U20, RuntimeObject* ___1_U20, const RuntimeMethod* method) 
{
	{
		U3CValuesU3Ed__11_2_tB0A59E22624F279E754B4AC4E12D0A9EF9F7AC61* L_0 = (U3CValuesU3Ed__11_2_tB0A59E22624F279E754B4AC4E12D0A9EF9F7AC61*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (U3CValuesU3Ed__11_2_tB0A59E22624F279E754B4AC4E12D0A9EF9F7AC61*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, ((int32_t)-2), il2cpp_rgctx_method(method->rgctx_data, 1));
		U3CValuesU3Ed__11_2_tB0A59E22624F279E754B4AC4E12D0A9EF9F7AC61* L_1 = L_0;
		RuntimeObject* L_2 = ___0_U20;
		NullCheck(L_1);
		L_1->___U3CU3E3__source_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E3__source_4), (void*)L_2);
		U3CValuesU3Ed__11_2_tB0A59E22624F279E754B4AC4E12D0A9EF9F7AC61* L_3 = L_1;
		RuntimeObject* L_4 = ___1_U20;
		NullCheck(L_3);
		L_3->___U3CU3E3__key_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E3__key_6), (void*)L_4);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<rUPGX7Iw0EpVF6jCSDLm> KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk::oPMIw34dF4a<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<SyrJYIIwjNZi8Nyl0pd0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* x5rwaxIU1lgC3gy0hDDk_oPMIw34dF4a_TisRuntimeObject_TisRuntimeObject_m861E2084D28BE870E08A18ACB7573E6B51AC1C88_gshared (RuntimeObject* ___0_U20, const RuntimeMethod* method) 
{
	{
		U3CConvertU3Ed__14_2_tD857EEC61425F81FFA8430106880F044E3B31BC9* L_0 = (U3CConvertU3Ed__14_2_tD857EEC61425F81FFA8430106880F044E3B31BC9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (U3CConvertU3Ed__14_2_tD857EEC61425F81FFA8430106880F044E3B31BC9*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, ((int32_t)-2), il2cpp_rgctx_method(method->rgctx_data, 1));
		U3CConvertU3Ed__14_2_tD857EEC61425F81FFA8430106880F044E3B31BC9* L_1 = L_0;
		RuntimeObject* L_2 = ___0_U20;
		NullCheck(L_1);
		L_1->___U3CU3E3__source_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E3__source_4), (void*)L_2);
		return (RuntimeObject*)L_1;
	}
}
// ymgEqJIU5emOkIEDa8WI.dlBNo8IUdTB9OvDiafIL`1<LL0STKIwuR3gvJsarIbl> KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk::purIwv7OThl<System.Object>(System.Collections.Generic.IEnumerable`1<LL0STKIwuR3gvJsarIbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* x5rwaxIU1lgC3gy0hDDk_purIwv7OThl_TisRuntimeObject_m469FA6638E0DF76EAE745E7FC31C15C59984CEF4_gshared (RuntimeObject* ___0_U20, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_U20;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_U20;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->rgctx_data, 0))))
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_2 = ___0_U20;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 0)));
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_U20;
		jaq7wfIex8bBMQFOq7l9_1_t173A3EF7D605437B902F320ED702CC71F2C3E02D L_4;
		memset((&L_4), 0, sizeof(L_4));
		jaq7wfIex8bBMQFOq7l9_1__ctor_m20170059DA89337524F4FE98B0A66B2F87904A2D((&L_4), L_3, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 2));
		jaq7wfIex8bBMQFOq7l9_1_t173A3EF7D605437B902F320ED702CC71F2C3E02D L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_5);
		return (RuntimeObject*)L_6;
	}
}
// System.Collections.Generic.IEnumerable`1<u0uSveIwcfdvSdhYBUuc> KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk::xGBIwkVXNdA<System.Object>(System.Collections.Generic.IEnumerable`1<bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* x5rwaxIU1lgC3gy0hDDk_xGBIwkVXNdA_TisRuntimeObject_mBA98E3AEF10E5F783CBC518D8EB0178BE9E67ADE_gshared (RuntimeObject* ___0_U20, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_U20;
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, NULL, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
// ymgEqJIU5emOkIEDa8WI.dlBNo8IUdTB9OvDiafIL`1<bASGIfI70vl11yvvUVSc.a2gGKII7j9Qd3ZepQemJ> KgBXWeIUs5amH6uH3WXn.x5rwaxIU1lgC3gy0hDDk::xhsIU4PQVbi<System.Object>(System.Collections.Generic.IEnumerable`1<XfkQs9IUrgpIfoAGZIHV>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* x5rwaxIU1lgC3gy0hDDk_xhsIU4PQVbi_TisRuntimeObject_m449598C56B85F78FA5C7078D4D6AE38BE24F3275_gshared (RuntimeObject* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_U20;
		qHNsI1IHbt6MSvUAaMXD_gO3IHmVPH3W_m0DF8EA259C270017610BAAF1AA3F282D2D9FCB09((RuntimeObject*)L_0, _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5, NULL);
		RuntimeObject* L_1 = ___0_U20;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E* L_2 = ((U3CU3Ec__3_1_t4086104763D72563D5B9F9F0A06841A18FDF5286_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___U3CU3E9__3_0_1;
		Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		U3CU3Ec__3_1_t4086104763D72563D5B9F9F0A06841A18FDF5286* L_4 = ((U3CU3Ec__3_1_t4086104763D72563D5B9F9F0A06841A18FDF5286_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___U3CU3E9_0;
		Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E* L_5 = (Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		NullCheck(L_5);
		((  void (*) (Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_5, (RuntimeObject*)L_4, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 3));
		Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E* L_6 = L_5;
		((U3CU3Ec__3_1_t4086104763D72563D5B9F9F0A06841A18FDF5286_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___U3CU3E9__3_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__3_1_t4086104763D72563D5B9F9F0A06841A18FDF5286_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___U3CU3E9__3_0_1), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002b:
	{
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t5B59C39C2CA98B40FEA95BE38832CD3EC7BC127E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(G_B2_1, G_B2_0, il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_8;
		L_8 = x5rwaxIU1lgC3gy0hDDk_E4iIwWxobRy_m766C659A23C2D490B19343D3F373DEF7998D5069(L_7, NULL);
		return L_8;
	}
}
// mrsER6IY5FwIyj0NthCP.GaELVDIY2dLa2BLZTh0W`2<EcsXYsIYL8no3GlJxbge,System.Object> ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP::AmPIVBNTr4n<System.Object>(System.Reflection.MethodBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GaELVDIY2dLa2BLZTh0W_2_tA8D55027EBADED6B8B585C72F06C2202B8063B3D* yDPgyIIYvL6HKuASy0XP_AmPIVBNTr4n_TisRuntimeObject_m7FE6349851478D2A16FB43FB2D0EC5AD3E2E14E1_gshared (yDPgyIIYvL6HKuASy0XP_t72A374C34ED1E894BED1E856D81548FDC05B902E* __this, MethodBase_t* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82EA3C9AFC08F0CECEBC1B257606B3106346FCAF);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_1_t8F3DE6B995C68EB07455C221679A98EB3C0F21AE* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_1_t8F3DE6B995C68EB07455C221679A98EB3C0F21AE* L_0 = (U3CU3Ec__DisplayClass4_0_1_t8F3DE6B995C68EB07455C221679A98EB3C0F21AE*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (U3CU3Ec__DisplayClass4_0_1_t8F3DE6B995C68EB07455C221679A98EB3C0F21AE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_1_t8F3DE6B995C68EB07455C221679A98EB3C0F21AE* L_1 = V_0;
		MethodBase_t* L_2 = ___0_U20;
		NullCheck(L_1);
		L_1->___method_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___method_1), (void*)L_2);
		U3CU3Ec__DisplayClass4_0_1_t8F3DE6B995C68EB07455C221679A98EB3C0F21AE* L_3 = V_0;
		NullCheck(L_3);
		MethodBase_t* L_4 = (MethodBase_t*)L_3->___method_1;
		qHNsI1IHbt6MSvUAaMXD_gO3IHmVPH3W_m0DF8EA259C270017610BAAF1AA3F282D2D9FCB09((RuntimeObject*)L_4, _stringLiteral82EA3C9AFC08F0CECEBC1B257606B3106346FCAF, NULL);
		U3CU3Ec__DisplayClass4_0_1_t8F3DE6B995C68EB07455C221679A98EB3C0F21AE* L_5 = V_0;
		U3CU3Ec__DisplayClass4_0_1_t8F3DE6B995C68EB07455C221679A98EB3C0F21AE* L_6 = V_0;
		NullCheck(L_6);
		MethodBase_t* L_7 = (MethodBase_t*)L_6->___method_1;
		NullCheck(L_5);
		L_5->___c_0 = ((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)IsInstClass((RuntimeObject*)L_7, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___c_0), (void*)((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)IsInstClass((RuntimeObject*)L_7, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var)));
		U3CU3Ec__DisplayClass4_0_1_t8F3DE6B995C68EB07455C221679A98EB3C0F21AE* L_8 = V_0;
		NullCheck(L_8);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_9 = (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)L_8->___c_0;
		if (!L_9)
		{
			goto IL_0043;
		}
	}
	{
		U3CU3Ec__DisplayClass4_0_1_t8F3DE6B995C68EB07455C221679A98EB3C0F21AE* L_10 = V_0;
		GaELVDIY2dLa2BLZTh0W_2_tA8D55027EBADED6B8B585C72F06C2202B8063B3D* L_11 = (GaELVDIY2dLa2BLZTh0W_2_tA8D55027EBADED6B8B585C72F06C2202B8063B3D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_11);
		((  void (*) (GaELVDIY2dLa2BLZTh0W_2_tA8D55027EBADED6B8B585C72F06C2202B8063B3D*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_11, (RuntimeObject*)L_10, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_11;
	}

IL_0043:
	{
		U3CU3Ec__DisplayClass4_0_1_t8F3DE6B995C68EB07455C221679A98EB3C0F21AE* L_12 = V_0;
		GaELVDIY2dLa2BLZTh0W_2_tA8D55027EBADED6B8B585C72F06C2202B8063B3D* L_13 = (GaELVDIY2dLa2BLZTh0W_2_tA8D55027EBADED6B8B585C72F06C2202B8063B3D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_13);
		((  void (*) (GaELVDIY2dLa2BLZTh0W_2_tA8D55027EBADED6B8B585C72F06C2202B8063B3D*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_13, (RuntimeObject*)L_12, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_13;
	}
}
// System.Func`1<VDj2PxIYBg4Z2nvXntok> ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP::VUpIV9m2OjU<System.Object>(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* yDPgyIIYvL6HKuASy0XP_VUpIV9m2OjU_TisRuntimeObject_mE7CB8E372256EF10C536A329E94431B9079A629A_gshared (yDPgyIIYvL6HKuASy0XP_t72A374C34ED1E894BED1E856D81548FDC05B902E* __this, Type_t* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pxdx4NIjoIfmCFcUEecO_tEF8C580AFE2B34F24CCD7C8F26C54D67A7F716CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_1_t3695A9BA48A16412054233B1800FBF4479BBEF0A* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass5_0_1_t3695A9BA48A16412054233B1800FBF4479BBEF0A* L_0 = (U3CU3Ec__DisplayClass5_0_1_t3695A9BA48A16412054233B1800FBF4479BBEF0A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (U3CU3Ec__DisplayClass5_0_1_t3695A9BA48A16412054233B1800FBF4479BBEF0A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_1_t3695A9BA48A16412054233B1800FBF4479BBEF0A* L_1 = V_0;
		Type_t* L_2 = ___0_U20;
		NullCheck(L_1);
		L_1->___type_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___type_0), (void*)L_2);
		U3CU3Ec__DisplayClass5_0_1_t3695A9BA48A16412054233B1800FBF4479BBEF0A* L_3 = V_0;
		NullCheck(L_3);
		Type_t* L_4 = (Type_t*)L_3->___type_0;
		qHNsI1IHbt6MSvUAaMXD_gO3IHmVPH3W_m0DF8EA259C270017610BAAF1AA3F282D2D9FCB09((RuntimeObject*)L_4, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		U3CU3Ec__DisplayClass5_0_1_t3695A9BA48A16412054233B1800FBF4479BBEF0A* L_5 = V_0;
		NullCheck(L_5);
		Type_t* L_6 = (Type_t*)L_5->___type_0;
		bool L_7;
		L_7 = kgvn0uIHjZTRpwB26bcc_VAOIHU2nfvV_m5958007A2EB1A6CB8DB05DD7C5896608D89F384C(L_6, NULL);
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		U3CU3Ec__DisplayClass5_0_1_t3695A9BA48A16412054233B1800FBF4479BBEF0A* L_8 = V_0;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_9 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_9);
		((  void (*) (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_9, (RuntimeObject*)L_8, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_9;
	}

IL_0037:
	{
		U3CU3Ec__DisplayClass5_0_1_t3695A9BA48A16412054233B1800FBF4479BBEF0A* L_10 = V_0;
		U3CU3Ec__DisplayClass5_0_1_t3695A9BA48A16412054233B1800FBF4479BBEF0A* L_11 = V_0;
		NullCheck(L_11);
		Type_t* L_12 = (Type_t*)L_11->___type_0;
		il2cpp_codegen_runtime_class_init_inline(Pxdx4NIjoIfmCFcUEecO_tEF8C580AFE2B34F24CCD7C8F26C54D67A7F716CF_il2cpp_TypeInfo_var);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_13;
		L_13 = Pxdx4NIjoIfmCFcUEecO_hoeI0IMX0gv_m26E5055F2C0F4CEF3A7FB1B6FF88702C237EE64C(L_12, (bool)1, NULL);
		NullCheck(L_10);
		L_10->___constructorInfo_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___constructorInfo_1), (void*)L_13);
		U3CU3Ec__DisplayClass5_0_1_t3695A9BA48A16412054233B1800FBF4479BBEF0A* L_14 = V_0;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_15 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_15);
		((  void (*) (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_15, (RuntimeObject*)L_14, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_15;
	}
}
// System.Action`2<mIoPyhIYqEvACdSjJVQM,System.Object> ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP::tDWIVyiKUSA<System.Object>(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* yDPgyIIYvL6HKuASy0XP_tDWIVyiKUSA_TisRuntimeObject_mD34B13763ABAA4EFEA9CB7DE4424E1EE020CB579_gshared (yDPgyIIYvL6HKuASy0XP_t72A374C34ED1E894BED1E856D81548FDC05B902E* __this, FieldInfo_t* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24B384F1E033EC12CCBD648496627CAE231B092D);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass8_0_1_tE74EC767684D04F3C658190BCFDFFA81996741F7* L_0 = (U3CU3Ec__DisplayClass8_0_1_tE74EC767684D04F3C658190BCFDFFA81996741F7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (U3CU3Ec__DisplayClass8_0_1_tE74EC767684D04F3C658190BCFDFFA81996741F7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		U3CU3Ec__DisplayClass8_0_1_tE74EC767684D04F3C658190BCFDFFA81996741F7* L_1 = L_0;
		FieldInfo_t* L_2 = ___0_U20;
		NullCheck(L_1);
		L_1->___fieldInfo_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___fieldInfo_0), (void*)L_2);
		U3CU3Ec__DisplayClass8_0_1_tE74EC767684D04F3C658190BCFDFFA81996741F7* L_3 = L_1;
		NullCheck(L_3);
		FieldInfo_t* L_4 = (FieldInfo_t*)L_3->___fieldInfo_0;
		qHNsI1IHbt6MSvUAaMXD_gO3IHmVPH3W_m0DF8EA259C270017610BAAF1AA3F282D2D9FCB09((RuntimeObject*)L_4, _stringLiteral24B384F1E033EC12CCBD648496627CAE231B092D, NULL);
		Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* L_5 = (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_5);
		((  void (*) (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_5, (RuntimeObject*)L_3, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_5;
	}
}
// System.Action`2<n0tkrnIYyt2J5eIgjBfe,System.Object> ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP::tDWIVyiKUSA<System.Object>(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* yDPgyIIYvL6HKuASy0XP_tDWIVyiKUSA_TisRuntimeObject_mE768C76C0C6A3090BAF550E53F161BF4A90C69DC_gshared (yDPgyIIYvL6HKuASy0XP_t72A374C34ED1E894BED1E856D81548FDC05B902E* __this, PropertyInfo_t* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBC35FFDE20578F35F7D80AA15EBCB02F42463C4);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass9_0_1_tCF26C045CFAB29A45CD2BB902582FE5D191C1DEE* L_0 = (U3CU3Ec__DisplayClass9_0_1_tCF26C045CFAB29A45CD2BB902582FE5D191C1DEE*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (U3CU3Ec__DisplayClass9_0_1_tCF26C045CFAB29A45CD2BB902582FE5D191C1DEE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		U3CU3Ec__DisplayClass9_0_1_tCF26C045CFAB29A45CD2BB902582FE5D191C1DEE* L_1 = L_0;
		PropertyInfo_t* L_2 = ___0_U20;
		NullCheck(L_1);
		L_1->___propertyInfo_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___propertyInfo_0), (void*)L_2);
		U3CU3Ec__DisplayClass9_0_1_tCF26C045CFAB29A45CD2BB902582FE5D191C1DEE* L_3 = L_1;
		NullCheck(L_3);
		PropertyInfo_t* L_4 = (PropertyInfo_t*)L_3->___propertyInfo_0;
		qHNsI1IHbt6MSvUAaMXD_gO3IHmVPH3W_m0DF8EA259C270017610BAAF1AA3F282D2D9FCB09((RuntimeObject*)L_4, _stringLiteralFBC35FFDE20578F35F7D80AA15EBCB02F42463C4, NULL);
		Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* L_5 = (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_5);
		((  void (*) (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_5, (RuntimeObject*)L_3, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_5;
	}
}
// System.Func`2<FcT3ZlIY9QqKdcun8NNm,System.Object> ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP::wiVIVqTghLf<System.Object>(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_tACBF5A1656250800CE861707354491F0611F6624* yDPgyIIYvL6HKuASy0XP_wiVIVqTghLf_TisRuntimeObject_mD70AFEE5477908D0112D8E4BB69C25887DF9DBBF_gshared (yDPgyIIYvL6HKuASy0XP_t72A374C34ED1E894BED1E856D81548FDC05B902E* __this, FieldInfo_t* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24B384F1E033EC12CCBD648496627CAE231B092D);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass7_0_1_t9D429628836F7523D385531C1AA54A01F23E786C* L_0 = (U3CU3Ec__DisplayClass7_0_1_t9D429628836F7523D385531C1AA54A01F23E786C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (U3CU3Ec__DisplayClass7_0_1_t9D429628836F7523D385531C1AA54A01F23E786C*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		U3CU3Ec__DisplayClass7_0_1_t9D429628836F7523D385531C1AA54A01F23E786C* L_1 = L_0;
		FieldInfo_t* L_2 = ___0_U20;
		NullCheck(L_1);
		L_1->___fieldInfo_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___fieldInfo_0), (void*)L_2);
		U3CU3Ec__DisplayClass7_0_1_t9D429628836F7523D385531C1AA54A01F23E786C* L_3 = L_1;
		NullCheck(L_3);
		FieldInfo_t* L_4 = (FieldInfo_t*)L_3->___fieldInfo_0;
		qHNsI1IHbt6MSvUAaMXD_gO3IHmVPH3W_m0DF8EA259C270017610BAAF1AA3F282D2D9FCB09((RuntimeObject*)L_4, _stringLiteral24B384F1E033EC12CCBD648496627CAE231B092D, NULL);
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_5 = (Func_2_tACBF5A1656250800CE861707354491F0611F6624*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_5);
		((  void (*) (Func_2_tACBF5A1656250800CE861707354491F0611F6624*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_5, (RuntimeObject*)L_3, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_5;
	}
}
// System.Func`2<IoFQdOIYt6yZUuUdYZ31,System.Object> ETDckAIYu4bcFmseVAYj.yDPgyIIYvL6HKuASy0XP::wiVIVqTghLf<System.Object>(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_tACBF5A1656250800CE861707354491F0611F6624* yDPgyIIYvL6HKuASy0XP_wiVIVqTghLf_TisRuntimeObject_m681B64C46C2B7D0259682E88B93190E9AF9548FD_gshared (yDPgyIIYvL6HKuASy0XP_t72A374C34ED1E894BED1E856D81548FDC05B902E* __this, PropertyInfo_t* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBC35FFDE20578F35F7D80AA15EBCB02F42463C4);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass6_0_1_t02F36D9DBA5D9A3022D2AE5AD37C91D582B63F03* L_0 = (U3CU3Ec__DisplayClass6_0_1_t02F36D9DBA5D9A3022D2AE5AD37C91D582B63F03*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (U3CU3Ec__DisplayClass6_0_1_t02F36D9DBA5D9A3022D2AE5AD37C91D582B63F03*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		U3CU3Ec__DisplayClass6_0_1_t02F36D9DBA5D9A3022D2AE5AD37C91D582B63F03* L_1 = L_0;
		PropertyInfo_t* L_2 = ___0_U20;
		NullCheck(L_1);
		L_1->___propertyInfo_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___propertyInfo_0), (void*)L_2);
		U3CU3Ec__DisplayClass6_0_1_t02F36D9DBA5D9A3022D2AE5AD37C91D582B63F03* L_3 = L_1;
		NullCheck(L_3);
		PropertyInfo_t* L_4 = (PropertyInfo_t*)L_3->___propertyInfo_0;
		qHNsI1IHbt6MSvUAaMXD_gO3IHmVPH3W_m0DF8EA259C270017610BAAF1AA3F282D2D9FCB09((RuntimeObject*)L_4, _stringLiteralFBC35FFDE20578F35F7D80AA15EBCB02F42463C4, NULL);
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_5 = (Func_2_tACBF5A1656250800CE861707354491F0611F6624*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_5);
		((  void (*) (Func_2_tACBF5A1656250800CE861707354491F0611F6624*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_5, (RuntimeObject*)L_3, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_5;
	}
}
// d5olJIICc69f4fLQZ7Mg Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq::XYTICknvdWc<System.Int32Enum>(t6aCVRIkpp2SgR9piVLE.upoLbGIkG3EWbjXCVTnk)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t yu6shyISV0cgPHoH4Fuq_XYTICknvdWc_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m3A65B1B968CCDD533504D48D61A97C3DA8C9D373_gshared (yu6shyISV0cgPHoH4Fuq_t0A16977B178E0CC5C1EE91476FD242F00AC3E0B3* __this, upoLbGIkG3EWbjXCVTnk_t733914D925D667921802DE07AFE63A3663751D38* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		upoLbGIkG3EWbjXCVTnk_t733914D925D667921802DE07AFE63A3663751D38* L_0 = ___0_U20;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeObject* L_3;
		L_3 = yu6shyISV0cgPHoH4Fuq_tHKICSFQrC9_mBCA8DF0CB2754A434F6B819FCBCBD3CD777624AB(__this, L_0, L_2, NULL);
		return ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_3, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}
}
// d5olJIICc69f4fLQZ7Mg Wv23Z8ISfcWlEsNtqM3n.yu6shyISV0cgPHoH4Fuq::XYTICknvdWc<System.Object>(t6aCVRIkpp2SgR9piVLE.upoLbGIkG3EWbjXCVTnk)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* yu6shyISV0cgPHoH4Fuq_XYTICknvdWc_TisRuntimeObject_m63957FE851136CEB6A0FDBCF2606714E6279A701_gshared (yu6shyISV0cgPHoH4Fuq_t0A16977B178E0CC5C1EE91476FD242F00AC3E0B3* __this, upoLbGIkG3EWbjXCVTnk_t733914D925D667921802DE07AFE63A3663751D38* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		upoLbGIkG3EWbjXCVTnk_t733914D925D667921802DE07AFE63A3663751D38* L_0 = ___0_U20;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeObject* L_3;
		L_3 = yu6shyISV0cgPHoH4Fuq_tHKICSFQrC9_mBCA8DF0CB2754A434F6B819FCBCBD3CD777624AB(__this, L_0, L_2, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::VisitLambda<System.Object>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* QuoteVisitor_VisitLambda_TisRuntimeObject_m8546CE5243FDDEFA3C7483FEB44BF91BD8F91DAF_gshared (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* V_2 = NULL;
	int32_t V_3 = 0;
	{
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_0;
		L_0 = Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_inline(Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_1 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4 = V_1;
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_5 = (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*)il2cpp_codegen_object_new(List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D(L_5, L_4, List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		V_2 = L_5;
		V_3 = 0;
		goto IL_002d;
	}

IL_001c:
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_6 = V_2;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_7 = ___0_node;
		int32_t L_8 = V_3;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_9;
		L_9 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(16 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.LambdaExpression::GetParameter(System.Int32) */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7, L_8);
		NullCheck(L_6);
		List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline(L_6, L_9, List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001c;
		}
	}
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_13 = V_2;
		V_0 = (RuntimeObject*)L_13;
	}

IL_0033:
	{
		RuntimeObject* L_14 = V_0;
		QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76(__this, L_14, NULL);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_15 = ___0_node;
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = ((  Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* (*) (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_15, il2cpp_rgctx_method(method->rgctx_data, 0));
		RuntimeObject* L_17 = V_0;
		QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9(__this, L_17, NULL);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_18 = ___0_node;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_18;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::VisitLambda<System.Object>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionQuoter_VisitLambda_TisRuntimeObject_m367D8F5D10D80B4A1A34D42A5339BAF95A51FE5E_gshared (ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536* __this, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_0 = NULL;
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_0 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_2 = (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*)il2cpp_codegen_object_new(HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B(L_2, HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_3 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		V_3 = L_4;
		goto IL_002c;
	}

IL_001a:
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_5 = V_1;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_6 = ___0_node;
		int32_t L_7 = V_2;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_8;
		L_8 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(16 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.LambdaExpression::GetParameter(System.Int32) */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6, L_7);
		NullCheck(L_5);
		bool L_9;
		L_9 = HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69(L_5, L_8, HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002c:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_13 = (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*)__this->____shadowedVars_2;
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_14 = V_1;
		NullCheck(L_13);
		Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE(L_13, L_14, Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
	}

IL_003c:
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_15 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15, NULL);
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_17;
		L_17 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_16);
		V_0 = L_17;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_18 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_20 = (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*)__this->____shadowedVars_2;
		NullCheck(L_20);
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_21;
		L_21 = Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5(L_20, Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
	}

IL_005e:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_22 = V_0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_23 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_24;
		L_24 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23, NULL);
		if ((!(((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_22) == ((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_24))))
		{
			goto IL_0069;
		}
	}
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_25 = ___0_node;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_25;
	}

IL_0069:
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_26 = ___0_node;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_27 = V_0;
		NullCheck(L_26);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_28;
		L_28 = VirtualFuncInvoker2< Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* >::Invoke(18 /* System.Linq.Expressions.Expression`1<TDelegate> System.Linq.Expressions.Expression`1<System.Object>::Rewrite(System.Linq.Expressions.Expression,System.Linq.Expressions.ParameterExpression[]) */, L_26, L_27, (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)NULL);
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_28;
	}
}
// System.Collections.IEnumerator UniRx.Scheduler/EndOfFrameMainThreadScheduler::ImmediateAction<System.Object>(T,System.Action`1<T>,UniRx.ICancelable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EndOfFrameMainThreadScheduler_ImmediateAction_TisRuntimeObject_m6AD60B2643B378CA2AFDB97302CA9B95207B6780_gshared (EndOfFrameMainThreadScheduler_tDEB00F3663F7A0E73714B59763FB10C194429663* __this, RuntimeObject* ___0_state, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___1_action, RuntimeObject* ___2_cancellation, const RuntimeMethod* method) 
{
	{
		U3CImmediateActionU3Ed__1_1_tFF93CB0C459F032A5684C57C2EE8C0CB0C863DE1* L_0 = (U3CImmediateActionU3Ed__1_1_tFF93CB0C459F032A5684C57C2EE8C0CB0C863DE1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (U3CImmediateActionU3Ed__1_1_tFF93CB0C459F032A5684C57C2EE8C0CB0C863DE1*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		U3CImmediateActionU3Ed__1_1_tFF93CB0C459F032A5684C57C2EE8C0CB0C863DE1* L_1 = L_0;
		RuntimeObject* L_2 = ___0_state;
		NullCheck(L_1);
		L_1->___state_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___state_4), (void*)L_2);
		U3CImmediateActionU3Ed__1_1_tFF93CB0C459F032A5684C57C2EE8C0CB0C863DE1* L_3 = L_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4 = ___1_action;
		NullCheck(L_3);
		L_3->___action_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___action_3), (void*)L_4);
		U3CImmediateActionU3Ed__1_1_tFF93CB0C459F032A5684C57C2EE8C0CB0C863DE1* L_5 = L_3;
		RuntimeObject* L_6 = ___2_cancellation;
		NullCheck(L_5);
		L_5->___cancellation_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___cancellation_2), (void*)L_6);
		return (RuntimeObject*)L_5;
	}
}
// System.Collections.IEnumerator UniRx.Scheduler/EndOfFrameMainThreadScheduler::ImmediateAction<UniRx.Unit>(T,System.Action`1<T>,UniRx.ICancelable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EndOfFrameMainThreadScheduler_ImmediateAction_TisUnit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662_m0B380FABB88EF2EF64AD33A51527D5743334FCE0_gshared (EndOfFrameMainThreadScheduler_tDEB00F3663F7A0E73714B59763FB10C194429663* __this, Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 ___0_state, Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A* ___1_action, RuntimeObject* ___2_cancellation, const RuntimeMethod* method) 
{
	{
		U3CImmediateActionU3Ed__1_1_t43A5F4D318EFF1FC95B25C97F1FA5805B1F41342* L_0 = (U3CImmediateActionU3Ed__1_1_t43A5F4D318EFF1FC95B25C97F1FA5805B1F41342*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (U3CImmediateActionU3Ed__1_1_t43A5F4D318EFF1FC95B25C97F1FA5805B1F41342*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		U3CImmediateActionU3Ed__1_1_t43A5F4D318EFF1FC95B25C97F1FA5805B1F41342* L_1 = L_0;
		Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 L_2 = ___0_state;
		NullCheck(L_1);
		L_1->___state_4 = L_2;
		U3CImmediateActionU3Ed__1_1_t43A5F4D318EFF1FC95B25C97F1FA5805B1F41342* L_3 = L_1;
		Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A* L_4 = ___1_action;
		NullCheck(L_3);
		L_3->___action_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___action_3), (void*)L_4);
		U3CImmediateActionU3Ed__1_1_t43A5F4D318EFF1FC95B25C97F1FA5805B1F41342* L_5 = L_3;
		RuntimeObject* L_6 = ___2_cancellation;
		NullCheck(L_5);
		L_5->___cancellation_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___cancellation_2), (void*)L_6);
		return (RuntimeObject*)L_5;
	}
}
// System.Void UniRx.Scheduler/EndOfFrameMainThreadScheduler::ScheduleQueueing<System.Object>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfFrameMainThreadScheduler_ScheduleQueueing_TisRuntimeObject_mABE86F6F1E2451171952278B9558F890176A6F19_gshared (EndOfFrameMainThreadScheduler_tDEB00F3663F7A0E73714B59763FB10C194429663* __this, RuntimeObject* ___0_cancel, RuntimeObject* ___1_state, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___2_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MainThreadDispatcher.StartEndOfFrameMicroCoroutine(ImmediateAction(state, action, cancel));
		RuntimeObject* L_0 = ___1_state;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = ___2_action;
		RuntimeObject* L_2 = ___0_cancel;
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (EndOfFrameMainThreadScheduler_tDEB00F3663F7A0E73714B59763FB10C194429663*, RuntimeObject*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_runtime_class_init_inline(MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		MainThreadDispatcher_StartEndOfFrameMicroCoroutine_mF882DADDE3048CBA9A2B2CFB706C7DA7732B4880(L_3, NULL);
		// }
		return;
	}
}
// System.Void UniRx.Scheduler/EndOfFrameMainThreadScheduler::ScheduleQueueing<UniRx.Unit>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfFrameMainThreadScheduler_ScheduleQueueing_TisUnit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662_m03D32E350491CA1BFE30B81B1CEE468E2C132CBC_gshared (EndOfFrameMainThreadScheduler_tDEB00F3663F7A0E73714B59763FB10C194429663* __this, RuntimeObject* ___0_cancel, Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 ___1_state, Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A* ___2_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MainThreadDispatcher.StartEndOfFrameMicroCoroutine(ImmediateAction(state, action, cancel));
		Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 L_0 = ___1_state;
		Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A* L_1 = ___2_action;
		RuntimeObject* L_2 = ___0_cancel;
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (EndOfFrameMainThreadScheduler_tDEB00F3663F7A0E73714B59763FB10C194429663*, Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662, Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_runtime_class_init_inline(MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		MainThreadDispatcher_StartEndOfFrameMicroCoroutine_mF882DADDE3048CBA9A2B2CFB706C7DA7732B4880(L_3, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator UniRx.Scheduler/FixedUpdateMainThreadScheduler::ImmediateAction<System.Object>(T,System.Action`1<T>,UniRx.ICancelable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FixedUpdateMainThreadScheduler_ImmediateAction_TisRuntimeObject_mFC2F93923867F348B79BDA2F23316C114373C07A_gshared (FixedUpdateMainThreadScheduler_tCA7241F8BC3311A70DD07CFD2748CDFC2DEA11E3* __this, RuntimeObject* ___0_state, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___1_action, RuntimeObject* ___2_cancellation, const RuntimeMethod* method) 
{
	{
		U3CImmediateActionU3Ed__1_1_t34E37F43941C42289DB79C3661100E07BECD9168* L_0 = (U3CImmediateActionU3Ed__1_1_t34E37F43941C42289DB79C3661100E07BECD9168*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (U3CImmediateActionU3Ed__1_1_t34E37F43941C42289DB79C3661100E07BECD9168*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		U3CImmediateActionU3Ed__1_1_t34E37F43941C42289DB79C3661100E07BECD9168* L_1 = L_0;
		RuntimeObject* L_2 = ___0_state;
		NullCheck(L_1);
		L_1->___state_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___state_4), (void*)L_2);
		U3CImmediateActionU3Ed__1_1_t34E37F43941C42289DB79C3661100E07BECD9168* L_3 = L_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4 = ___1_action;
		NullCheck(L_3);
		L_3->___action_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___action_3), (void*)L_4);
		U3CImmediateActionU3Ed__1_1_t34E37F43941C42289DB79C3661100E07BECD9168* L_5 = L_3;
		RuntimeObject* L_6 = ___2_cancellation;
		NullCheck(L_5);
		L_5->___cancellation_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___cancellation_2), (void*)L_6);
		return (RuntimeObject*)L_5;
	}
}
// System.Collections.IEnumerator UniRx.Scheduler/FixedUpdateMainThreadScheduler::ImmediateAction<UniRx.Unit>(T,System.Action`1<T>,UniRx.ICancelable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FixedUpdateMainThreadScheduler_ImmediateAction_TisUnit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662_m5CC7C3733BB2859DB13579C9F42974F78F501CA5_gshared (FixedUpdateMainThreadScheduler_tCA7241F8BC3311A70DD07CFD2748CDFC2DEA11E3* __this, Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 ___0_state, Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A* ___1_action, RuntimeObject* ___2_cancellation, const RuntimeMethod* method) 
{
	{
		U3CImmediateActionU3Ed__1_1_t8487A9985C20BA03526EA40D18F122714F0C3D8D* L_0 = (U3CImmediateActionU3Ed__1_1_t8487A9985C20BA03526EA40D18F122714F0C3D8D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (U3CImmediateActionU3Ed__1_1_t8487A9985C20BA03526EA40D18F122714F0C3D8D*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		U3CImmediateActionU3Ed__1_1_t8487A9985C20BA03526EA40D18F122714F0C3D8D* L_1 = L_0;
		Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 L_2 = ___0_state;
		NullCheck(L_1);
		L_1->___state_4 = L_2;
		U3CImmediateActionU3Ed__1_1_t8487A9985C20BA03526EA40D18F122714F0C3D8D* L_3 = L_1;
		Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A* L_4 = ___1_action;
		NullCheck(L_3);
		L_3->___action_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___action_3), (void*)L_4);
		U3CImmediateActionU3Ed__1_1_t8487A9985C20BA03526EA40D18F122714F0C3D8D* L_5 = L_3;
		RuntimeObject* L_6 = ___2_cancellation;
		NullCheck(L_5);
		L_5->___cancellation_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___cancellation_2), (void*)L_6);
		return (RuntimeObject*)L_5;
	}
}
// System.Void UniRx.Scheduler/FixedUpdateMainThreadScheduler::ScheduleQueueing<System.Object>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedUpdateMainThreadScheduler_ScheduleQueueing_TisRuntimeObject_m06A0148A7301F3A4145707F7D1F03BBE423467AF_gshared (FixedUpdateMainThreadScheduler_tCA7241F8BC3311A70DD07CFD2748CDFC2DEA11E3* __this, RuntimeObject* ___0_cancel, RuntimeObject* ___1_state, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___2_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MainThreadDispatcher.StartFixedUpdateMicroCoroutine(ImmediateAction(state, action, cancel));
		RuntimeObject* L_0 = ___1_state;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = ___2_action;
		RuntimeObject* L_2 = ___0_cancel;
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (FixedUpdateMainThreadScheduler_tCA7241F8BC3311A70DD07CFD2748CDFC2DEA11E3*, RuntimeObject*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_runtime_class_init_inline(MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		MainThreadDispatcher_StartFixedUpdateMicroCoroutine_m7B5A7DD59FB62E461CDDEFFE178DBDE0A6570DF9(L_3, NULL);
		// }
		return;
	}
}
// System.Void UniRx.Scheduler/FixedUpdateMainThreadScheduler::ScheduleQueueing<UniRx.Unit>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedUpdateMainThreadScheduler_ScheduleQueueing_TisUnit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662_m24895A01DAC21467BACDE786BD8A19AB024F8E2B_gshared (FixedUpdateMainThreadScheduler_tCA7241F8BC3311A70DD07CFD2748CDFC2DEA11E3* __this, RuntimeObject* ___0_cancel, Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 ___1_state, Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A* ___2_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MainThreadDispatcher.StartFixedUpdateMicroCoroutine(ImmediateAction(state, action, cancel));
		Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 L_0 = ___1_state;
		Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A* L_1 = ___2_action;
		RuntimeObject* L_2 = ___0_cancel;
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (FixedUpdateMainThreadScheduler_tCA7241F8BC3311A70DD07CFD2748CDFC2DEA11E3*, Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662, Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_runtime_class_init_inline(MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		MainThreadDispatcher_StartFixedUpdateMicroCoroutine_m7B5A7DD59FB62E461CDDEFFE178DBDE0A6570DF9(L_3, NULL);
		// }
		return;
	}
}
// System.Void UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler::ScheduleQueueing<System.Object>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IgnoreTimeScaleMainThreadScheduler_ScheduleQueueing_TisRuntimeObject_m6EB3BE16A4553640D35EC641B2E9D1CD9440D364_gshared (IgnoreTimeScaleMainThreadScheduler_t15A43252BE809D3C28FB0C3D1BE5A3D8B4E9614F* __this, RuntimeObject* ___0_cancel, RuntimeObject* ___1_state, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___2_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MainThreadDispatcher.Post(QueuedAction<T>.Instance, Tuple.Create(cancel, state, action));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ((QueuedAction_1_t6C75CFFA426C16AC7A45FE40ED2DD9ABC0A8A790_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Instance_0;
		RuntimeObject* L_1 = ___0_cancel;
		RuntimeObject* L_2 = ___1_state;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ___2_action;
		Tuple_3_t8E8637D2528F51948BF742E89FAF8590E18A8C43* L_4;
		L_4 = ((  Tuple_3_t8E8637D2528F51948BF742E89FAF8590E18A8C43* (*) (RuntimeObject*, RuntimeObject*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_runtime_class_init_inline(MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		MainThreadDispatcher_Post_m34EA78B903F2F3282D9B5080E7C7FDEBB36EB25F(L_0, (RuntimeObject*)L_4, NULL);
		// }
		return;
	}
}
// System.Void UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler::ScheduleQueueing<UniRx.Unit>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IgnoreTimeScaleMainThreadScheduler_ScheduleQueueing_TisUnit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662_m69D466740B2014227A8F077F90F60A2B3F98D247_gshared (IgnoreTimeScaleMainThreadScheduler_t15A43252BE809D3C28FB0C3D1BE5A3D8B4E9614F* __this, RuntimeObject* ___0_cancel, Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 ___1_state, Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A* ___2_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MainThreadDispatcher.Post(QueuedAction<T>.Instance, Tuple.Create(cancel, state, action));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ((QueuedAction_1_t07F49A76F2AFCA834825566E329075B151B16630_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Instance_0;
		RuntimeObject* L_1 = ___0_cancel;
		Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 L_2 = ___1_state;
		Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A* L_3 = ___2_action;
		Tuple_3_tA9647D22FE7E2E8FBD298636E7A5EC84C9E158A0* L_4;
		L_4 = ((  Tuple_3_tA9647D22FE7E2E8FBD298636E7A5EC84C9E158A0* (*) (RuntimeObject*, Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662, Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_runtime_class_init_inline(MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		MainThreadDispatcher_Post_m34EA78B903F2F3282D9B5080E7C7FDEBB36EB25F(L_0, (RuntimeObject*)L_4, NULL);
		// }
		return;
	}
}
// System.Void UniRx.Scheduler/MainThreadScheduler::ScheduleQueueing<System.Object>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadScheduler_ScheduleQueueing_TisRuntimeObject_mAB2D2521130A66655FE35B511B8611AC5FFA9DDF_gshared (MainThreadScheduler_t79381B64713DB60DDBD10B86155CEBD9AFF8C586* __this, RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICancelable_tB1DEE5D3AD44B45D562C30F81A032B6CDF33DCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_3_t8E8637D2528F51948BF742E89FAF8590E18A8C43* V_0 = NULL;
	{
		// var t = (Tuple<ICancelable, T, Action<T>>)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((Tuple_3_t8E8637D2528F51948BF742E89FAF8590E18A8C43*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->rgctx_data, 0)));
		// if (!t.Item1.IsDisposed)
		Tuple_3_t8E8637D2528F51948BF742E89FAF8590E18A8C43* L_1 = V_0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (Tuple_3_t8E8637D2528F51948BF742E89FAF8590E18A8C43*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UniRx.ICancelable::get_IsDisposed() */, ICancelable_tB1DEE5D3AD44B45D562C30F81A032B6CDF33DCF4_il2cpp_TypeInfo_var, L_2);
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		// t.Item3(t.Item2);
		Tuple_3_t8E8637D2528F51948BF742E89FAF8590E18A8C43* L_4 = V_0;
		NullCheck(L_4);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5;
		L_5 = ((  Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* (*) (Tuple_3_t8E8637D2528F51948BF742E89FAF8590E18A8C43*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		Tuple_3_t8E8637D2528F51948BF742E89FAF8590E18A8C43* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (Tuple_3_t8E8637D2528F51948BF742E89FAF8590E18A8C43*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->rgctx_data, 3));
		NullCheck(L_5);
		((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_5, L_7, il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void UniRx.Scheduler/MainThreadScheduler::ScheduleQueueing<System.Object>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadScheduler_ScheduleQueueing_TisRuntimeObject_mDADABD1E56A9A8F5ECAC4E71A3FD28F17EBC221B_gshared (MainThreadScheduler_t79381B64713DB60DDBD10B86155CEBD9AFF8C586* __this, RuntimeObject* ___0_cancel, RuntimeObject* ___1_state, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___2_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MainThreadDispatcher.Post(QueuedAction<T>.Instance, Tuple.Create(cancel, state, action));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ((QueuedAction_1_t6A5CAEEB4E725A313A2340A9260501A1FBA36B19_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Instance_0;
		RuntimeObject* L_1 = ___0_cancel;
		RuntimeObject* L_2 = ___1_state;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ___2_action;
		Tuple_3_t8E8637D2528F51948BF742E89FAF8590E18A8C43* L_4;
		L_4 = ((  Tuple_3_t8E8637D2528F51948BF742E89FAF8590E18A8C43* (*) (RuntimeObject*, RuntimeObject*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_runtime_class_init_inline(MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		MainThreadDispatcher_Post_m34EA78B903F2F3282D9B5080E7C7FDEBB36EB25F(L_0, (RuntimeObject*)L_4, NULL);
		// }
		return;
	}
}
// System.Void UniRx.Scheduler/MainThreadScheduler::ScheduleQueueing<UniRx.Unit>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadScheduler_ScheduleQueueing_TisUnit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662_m3418EE79070399475C6E3AD2B8EF354541993F8B_gshared (MainThreadScheduler_t79381B64713DB60DDBD10B86155CEBD9AFF8C586* __this, RuntimeObject* ___0_cancel, Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 ___1_state, Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A* ___2_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MainThreadDispatcher.Post(QueuedAction<T>.Instance, Tuple.Create(cancel, state, action));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ((QueuedAction_1_tF4DAACFE6CE13BB80D7DF87A5B9C4485D491C289_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Instance_0;
		RuntimeObject* L_1 = ___0_cancel;
		Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 L_2 = ___1_state;
		Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A* L_3 = ___2_action;
		Tuple_3_tA9647D22FE7E2E8FBD298636E7A5EC84C9E158A0* L_4;
		L_4 = ((  Tuple_3_tA9647D22FE7E2E8FBD298636E7A5EC84C9E158A0* (*) (RuntimeObject*, Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662, Action_1_t0491393F13DBBD689134834811487CF1F3C4D36A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_runtime_class_init_inline(MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		MainThreadDispatcher_Post_m34EA78B903F2F3282D9B5080E7C7FDEBB36EB25F(L_0, (RuntimeObject*)L_4, NULL);
		// }
		return;
	}
}
// System.Void UniRx.Scheduler/ThreadPoolScheduler::ScheduleQueueing<System.Object>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadPoolScheduler_ScheduleQueueing_TisRuntimeObject_m572942CEF9BD26A0B3510AA7903134E9DE89ACFD_gshared (ThreadPoolScheduler_tD70CA88940F9339327969057F716FA31BE56F840* __this, RuntimeObject* ___0_cancel, RuntimeObject* ___1_state, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___2_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass7_0_1_t278307FF040551BA151B7E74692991D34921AA60* L_0 = (U3CU3Ec__DisplayClass7_0_1_t278307FF040551BA151B7E74692991D34921AA60*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (U3CU3Ec__DisplayClass7_0_1_t278307FF040551BA151B7E74692991D34921AA60*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		U3CU3Ec__DisplayClass7_0_1_t278307FF040551BA151B7E74692991D34921AA60* L_1 = L_0;
		RuntimeObject* L_2 = ___0_cancel;
		NullCheck(L_1);
		L_1->___cancel_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___cancel_0), (void*)L_2);
		U3CU3Ec__DisplayClass7_0_1_t278307FF040551BA151B7E74692991D34921AA60* L_3 = L_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4 = ___2_action;
		NullCheck(L_3);
		L_3->___action_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___action_1), (void*)L_4);
		// System.Threading.ThreadPool.QueueUserWorkItem(callBackState =>
		// {
		//     if (!cancel.IsDisposed)
		//     {
		//         action((T)callBackState);
		//     }
		// }, state);
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_5 = (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3*)il2cpp_codegen_object_new(WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C(L_5, (RuntimeObject*)L_3, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 2)), NULL);
		RuntimeObject* L_6 = ___1_state;
		bool L_7;
		L_7 = ThreadPool_QueueUserWorkItem_mE534D14C47699D1D37288AE0710B19FC7EC02BAB(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void U1L86SI2NwC7tKFjSTyx.Y4pbxKI2pVJcC3viTGJn/XcYrWcI1nMP0aZ9SOJym::GFhI1jpcadG<System.Object>(nReNSpI10p5vfExj6dJF)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XcYrWcI1nMP0aZ9SOJym_GFhI1jpcadG_TisRuntimeObject_m33FEB8F4D58C208BB0752F26E240DB436BB07B1B_gshared (XcYrWcI1nMP0aZ9SOJym_t400828C2B906FD2D8CB28B5628BB216290E61AD9* __this, RuntimeObject* ___0_jmFbStI1HchJKTwD6HcJ, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_jmFbStI1HchJKTwD6HcJ;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		StringBuilder_t* L_1 = (StringBuilder_t*)__this->___CdqI1whp6Os_0;
		RuntimeObject* L_2 = ___0_jmFbStI1HchJKTwD6HcJ;
		NullCheck(L_1);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_1, L_2, NULL);
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void XcYrWcI1nMP0aZ9SOJym_GFhI1jpcadG_TisRuntimeObject_m33FEB8F4D58C208BB0752F26E240DB436BB07B1B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_jmFbStI1HchJKTwD6HcJ, const RuntimeMethod* method)
{
	XcYrWcI1nMP0aZ9SOJym_t400828C2B906FD2D8CB28B5628BB216290E61AD9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XcYrWcI1nMP0aZ9SOJym_t400828C2B906FD2D8CB28B5628BB216290E61AD9*>(__this + _offset);
	XcYrWcI1nMP0aZ9SOJym_GFhI1jpcadG_TisRuntimeObject_m33FEB8F4D58C208BB0752F26E240DB436BB07B1B(_thisAdjusted, ___0_jmFbStI1HchJKTwD6HcJ, method);
}
// System.Void U1L86SI2NwC7tKFjSTyx.Y4pbxKI2pVJcC3viTGJn/XcYrWcI1nMP0aZ9SOJym::OxiI1Gvhneh<System.Object>(W66fjsI1p129343Id4qs,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XcYrWcI1nMP0aZ9SOJym_OxiI1Gvhneh_TisRuntimeObject_mF7E0971A3C9433DC6C6B9DB228206E7356061200_gshared (XcYrWcI1nMP0aZ9SOJym_t400828C2B906FD2D8CB28B5628BB216290E61AD9* __this, RuntimeObject* ___0_lKKTTnI1Nny4TjhlWcyu, String_t* ___1_U20, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___1_U20;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_1 = (StringBuilder_t*)__this->___CdqI1whp6Os_0;
		String_t* L_2 = ___1_U20;
		RuntimeObject* L_3 = ___0_lKKTTnI1Nny4TjhlWcyu;
		NullCheck(L_1);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_1, L_2, L_3, NULL);
		return;
	}

IL_0017:
	{
		StringBuilder_t* L_5 = (StringBuilder_t*)__this->___CdqI1whp6Os_0;
		RuntimeObject* L_6 = ___0_lKKTTnI1Nny4TjhlWcyu;
		NullCheck(L_5);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_5, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void XcYrWcI1nMP0aZ9SOJym_OxiI1Gvhneh_TisRuntimeObject_mF7E0971A3C9433DC6C6B9DB228206E7356061200_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_lKKTTnI1Nny4TjhlWcyu, String_t* ___1_U20, const RuntimeMethod* method)
{
	XcYrWcI1nMP0aZ9SOJym_t400828C2B906FD2D8CB28B5628BB216290E61AD9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XcYrWcI1nMP0aZ9SOJym_t400828C2B906FD2D8CB28B5628BB216290E61AD9*>(__this + _offset);
	XcYrWcI1nMP0aZ9SOJym_OxiI1Gvhneh_TisRuntimeObject_mF7E0971A3C9433DC6C6B9DB228206E7356061200(_thisAdjusted, ___0_lKKTTnI1Nny4TjhlWcyu, ___1_U20, method);
}
// System.Void U1L86SI2NwC7tKFjSTyx.Y4pbxKI2pVJcC3viTGJn/XcYrWcI1nMP0aZ9SOJym::hJhI1WXOpCn<System.Object>(wM2cQuI1v0RHhwpb3ne1,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XcYrWcI1nMP0aZ9SOJym_hJhI1WXOpCn_TisRuntimeObject_mED124B146005B472A524E98E89972D2CE7E73061_gshared (XcYrWcI1nMP0aZ9SOJym_t400828C2B906FD2D8CB28B5628BB216290E61AD9* __this, RuntimeObject* ___0_PFt6iJI1uGPQVr2pulFj, int32_t ___1_U20, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_PFt6iJI1uGPQVr2pulFj;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		StringBuilder_t* L_1 = (StringBuilder_t*)__this->___CdqI1whp6Os_0;
		RuntimeObject* L_2 = ___0_PFt6iJI1uGPQVr2pulFj;
		NullCheck(L_1);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_1, L_2, NULL);
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void XcYrWcI1nMP0aZ9SOJym_hJhI1WXOpCn_TisRuntimeObject_mED124B146005B472A524E98E89972D2CE7E73061_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_PFt6iJI1uGPQVr2pulFj, int32_t ___1_U20, const RuntimeMethod* method)
{
	XcYrWcI1nMP0aZ9SOJym_t400828C2B906FD2D8CB28B5628BB216290E61AD9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XcYrWcI1nMP0aZ9SOJym_t400828C2B906FD2D8CB28B5628BB216290E61AD9*>(__this + _offset);
	XcYrWcI1nMP0aZ9SOJym_hJhI1WXOpCn_TisRuntimeObject_mED124B146005B472A524E98E89972D2CE7E73061(_thisAdjusted, ___0_PFt6iJI1uGPQVr2pulFj, ___1_U20, method);
}
// System.Void U1L86SI2NwC7tKFjSTyx.Y4pbxKI2pVJcC3viTGJn/XcYrWcI1nMP0aZ9SOJym::vLLI1LTniRs<System.Object>(k4yfdCI1BPrZqoKUPxKt,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XcYrWcI1nMP0aZ9SOJym_vLLI1LTniRs_TisRuntimeObject_m150FFB7FFF52E1BCDE5DAC6E503BAA28D43F7955_gshared (XcYrWcI1nMP0aZ9SOJym_t400828C2B906FD2D8CB28B5628BB216290E61AD9* __this, RuntimeObject* ___0_l2x17xI1tuExW5byebX4, int32_t ___1_U20, String_t* ___2_U20, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___2_U20;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_1 = (StringBuilder_t*)__this->___CdqI1whp6Os_0;
		String_t* L_2 = ___2_U20;
		RuntimeObject* L_3 = ___0_l2x17xI1tuExW5byebX4;
		NullCheck(L_1);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_1, L_2, L_3, NULL);
		return;
	}

IL_0017:
	{
		StringBuilder_t* L_5 = (StringBuilder_t*)__this->___CdqI1whp6Os_0;
		RuntimeObject* L_6 = ___0_l2x17xI1tuExW5byebX4;
		NullCheck(L_5);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_5, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void XcYrWcI1nMP0aZ9SOJym_vLLI1LTniRs_TisRuntimeObject_m150FFB7FFF52E1BCDE5DAC6E503BAA28D43F7955_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_l2x17xI1tuExW5byebX4, int32_t ___1_U20, String_t* ___2_U20, const RuntimeMethod* method)
{
	XcYrWcI1nMP0aZ9SOJym_t400828C2B906FD2D8CB28B5628BB216290E61AD9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XcYrWcI1nMP0aZ9SOJym_t400828C2B906FD2D8CB28B5628BB216290E61AD9*>(__this + _offset);
	XcYrWcI1nMP0aZ9SOJym_vLLI1LTniRs_TisRuntimeObject_m150FFB7FFF52E1BCDE5DAC6E503BAA28D43F7955(_thisAdjusted, ___0_l2x17xI1tuExW5byebX4, ___1_U20, ___2_U20, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MCOuyCIb1l1L0qFaD25v_KFKIalOiXcy_m9098A048DE70E832EE811924DCE3F39ABE64901E_inline (MCOuyCIb1l1L0qFaD25v_t3A43278B8FB5D5E9CEBC4EE6B211A086241E3F21* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___f0vIaS0yb1a_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) 
{
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0 = __this->____body_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
