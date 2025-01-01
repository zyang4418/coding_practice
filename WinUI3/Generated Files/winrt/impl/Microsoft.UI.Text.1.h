// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.240405.15

#pragma once
#ifndef WINRT_Microsoft_UI_Text_1_H
#define WINRT_Microsoft_UI_Text_1_H
#include "winrt/impl/Microsoft.UI.Text.0.h"
WINRT_EXPORT namespace winrt::Microsoft::UI::Text
{
    struct WINRT_IMPL_EMPTY_BASES IFontWeights :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFontWeights>
    {
        IFontWeights(std::nullptr_t = nullptr) noexcept {}
        IFontWeights(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IFontWeightsStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFontWeightsStatics>
    {
        IFontWeightsStatics(std::nullptr_t = nullptr) noexcept {}
        IFontWeightsStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ITextCharacterFormat :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ITextCharacterFormat>
    {
        ITextCharacterFormat(std::nullptr_t = nullptr) noexcept {}
        ITextCharacterFormat(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ITextConstantsStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ITextConstantsStatics>
    {
        ITextConstantsStatics(std::nullptr_t = nullptr) noexcept {}
        ITextConstantsStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ITextDocument :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ITextDocument>
    {
        ITextDocument(std::nullptr_t = nullptr) noexcept {}
        ITextDocument(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ITextParagraphFormat :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ITextParagraphFormat>
    {
        ITextParagraphFormat(std::nullptr_t = nullptr) noexcept {}
        ITextParagraphFormat(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ITextRange :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ITextRange>
    {
        ITextRange(std::nullptr_t = nullptr) noexcept {}
        ITextRange(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ITextSelection :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ITextSelection>,
        impl::require<winrt::Microsoft::UI::Text::ITextSelection, winrt::Microsoft::UI::Text::ITextRange>
    {
        ITextSelection(std::nullptr_t = nullptr) noexcept {}
        ITextSelection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif