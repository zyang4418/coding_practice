// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.240405.15

#pragma once
#ifndef WINRT_Microsoft_UI_Xaml_Media_Media3D_0_H
#define WINRT_Microsoft_UI_Xaml_Media_Media3D_0_H
WINRT_EXPORT namespace winrt::Microsoft::UI::Xaml
{
    struct DependencyProperty;
}
WINRT_EXPORT namespace winrt::Microsoft::UI::Xaml::Media::Media3D
{
    struct ICompositeTransform3D;
    struct ICompositeTransform3DStatics;
    struct IMatrix3DHelper;
    struct IMatrix3DHelperStatics;
    struct IPerspectiveTransform3D;
    struct IPerspectiveTransform3DStatics;
    struct ITransform3D;
    struct ITransform3DFactory;
    struct CompositeTransform3D;
    struct Matrix3DHelper;
    struct PerspectiveTransform3D;
    struct Transform3D;
    struct Matrix3D;
}
namespace winrt::impl
{
    template <> struct category<winrt::Microsoft::UI::Xaml::Media::Media3D::ICompositeTransform3D>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Media::Media3D::IMatrix3DHelper>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Media::Media3D::IPerspectiveTransform3D>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Media::Media3D::IPerspectiveTransform3DStatics>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Media::Media3D::ITransform3D>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Media::Media3D::ITransform3DFactory>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Media::Media3D::CompositeTransform3D>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Media::Media3D::Matrix3DHelper>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Media::Media3D::PerspectiveTransform3D>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Media::Media3D::Transform3D>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Media::Media3D::Matrix3D>{ using type = struct_category<double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double>; };
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Media::Media3D::CompositeTransform3D> = L"Microsoft.UI.Xaml.Media.Media3D.CompositeTransform3D";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Media::Media3D::Matrix3DHelper> = L"Microsoft.UI.Xaml.Media.Media3D.Matrix3DHelper";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Media::Media3D::PerspectiveTransform3D> = L"Microsoft.UI.Xaml.Media.Media3D.PerspectiveTransform3D";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Media::Media3D::Transform3D> = L"Microsoft.UI.Xaml.Media.Media3D.Transform3D";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Media::Media3D::Matrix3D> = L"Microsoft.UI.Xaml.Media.Media3D.Matrix3D";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Media::Media3D::ICompositeTransform3D> = L"Microsoft.UI.Xaml.Media.Media3D.ICompositeTransform3D";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics> = L"Microsoft.UI.Xaml.Media.Media3D.ICompositeTransform3DStatics";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Media::Media3D::IMatrix3DHelper> = L"Microsoft.UI.Xaml.Media.Media3D.IMatrix3DHelper";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics> = L"Microsoft.UI.Xaml.Media.Media3D.IMatrix3DHelperStatics";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Media::Media3D::IPerspectiveTransform3D> = L"Microsoft.UI.Xaml.Media.Media3D.IPerspectiveTransform3D";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Media::Media3D::IPerspectiveTransform3DStatics> = L"Microsoft.UI.Xaml.Media.Media3D.IPerspectiveTransform3DStatics";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Media::Media3D::ITransform3D> = L"Microsoft.UI.Xaml.Media.Media3D.ITransform3D";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Media::Media3D::ITransform3DFactory> = L"Microsoft.UI.Xaml.Media.Media3D.ITransform3DFactory";
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Xaml::Media::Media3D::ICompositeTransform3D>{ 0xCBAF163F,0xC254,0x5DCF,{ 0x8A,0xE4,0x40,0xE2,0x1C,0xE1,0xB4,0xCA } }; // CBAF163F-C254-5DCF-8AE4-40E21CE1B4CA
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics>{ 0xB64D4181,0x6988,0x5D46,{ 0x85,0x8A,0x22,0x4D,0xB7,0x08,0x9D,0xC4 } }; // B64D4181-6988-5D46-858A-224DB7089DC4
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Xaml::Media::Media3D::IMatrix3DHelper>{ 0xD2909BE1,0x9C28,0x5B38,{ 0xB6,0x3C,0x88,0xE8,0x38,0x64,0x45,0x33 } }; // D2909BE1-9C28-5B38-B63C-88E838644533
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics>{ 0x930E447B,0x265C,0x5DED,{ 0x9E,0x64,0x57,0xB8,0x93,0x3C,0x55,0xC3 } }; // 930E447B-265C-5DED-9E64-57B8933C55C3
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Xaml::Media::Media3D::IPerspectiveTransform3D>{ 0x4006CC46,0x684E,0x54EA,{ 0xA4,0x21,0xDA,0xE5,0xB0,0x55,0x6B,0x85 } }; // 4006CC46-684E-54EA-A421-DAE5B0556B85
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Xaml::Media::Media3D::IPerspectiveTransform3DStatics>{ 0x3B16AA8D,0x0EE2,0x5D46,{ 0xA7,0x23,0xDC,0x8E,0x5C,0x1C,0x0B,0x19 } }; // 3B16AA8D-0EE2-5D46-A723-DC8E5C1C0B19
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Xaml::Media::Media3D::ITransform3D>{ 0xAFEA4941,0x2E49,0x533C,{ 0x9F,0x8F,0x2C,0x12,0x6E,0xF9,0x89,0x3A } }; // AFEA4941-2E49-533C-9F8F-2C126EF9893A
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Xaml::Media::Media3D::ITransform3DFactory>{ 0x9BCCE0A1,0x10AC,0x5319,{ 0xBD,0xF1,0x54,0x8D,0x2E,0x5A,0xE5,0x04 } }; // 9BCCE0A1-10AC-5319-BDF1-548D2E5AE504
    template <> struct default_interface<winrt::Microsoft::UI::Xaml::Media::Media3D::CompositeTransform3D>{ using type = winrt::Microsoft::UI::Xaml::Media::Media3D::ICompositeTransform3D; };
    template <> struct default_interface<winrt::Microsoft::UI::Xaml::Media::Media3D::Matrix3DHelper>{ using type = winrt::Microsoft::UI::Xaml::Media::Media3D::IMatrix3DHelper; };
    template <> struct default_interface<winrt::Microsoft::UI::Xaml::Media::Media3D::PerspectiveTransform3D>{ using type = winrt::Microsoft::UI::Xaml::Media::Media3D::IPerspectiveTransform3D; };
    template <> struct default_interface<winrt::Microsoft::UI::Xaml::Media::Media3D::Transform3D>{ using type = winrt::Microsoft::UI::Xaml::Media::Media3D::ITransform3D; };
    template <> struct abi<winrt::Microsoft::UI::Xaml::Media::Media3D::ICompositeTransform3D>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_CenterX(double*) noexcept = 0;
            virtual int32_t __stdcall put_CenterX(double) noexcept = 0;
            virtual int32_t __stdcall get_CenterY(double*) noexcept = 0;
            virtual int32_t __stdcall put_CenterY(double) noexcept = 0;
            virtual int32_t __stdcall get_CenterZ(double*) noexcept = 0;
            virtual int32_t __stdcall put_CenterZ(double) noexcept = 0;
            virtual int32_t __stdcall get_RotationX(double*) noexcept = 0;
            virtual int32_t __stdcall put_RotationX(double) noexcept = 0;
            virtual int32_t __stdcall get_RotationY(double*) noexcept = 0;
            virtual int32_t __stdcall put_RotationY(double) noexcept = 0;
            virtual int32_t __stdcall get_RotationZ(double*) noexcept = 0;
            virtual int32_t __stdcall put_RotationZ(double) noexcept = 0;
            virtual int32_t __stdcall get_ScaleX(double*) noexcept = 0;
            virtual int32_t __stdcall put_ScaleX(double) noexcept = 0;
            virtual int32_t __stdcall get_ScaleY(double*) noexcept = 0;
            virtual int32_t __stdcall put_ScaleY(double) noexcept = 0;
            virtual int32_t __stdcall get_ScaleZ(double*) noexcept = 0;
            virtual int32_t __stdcall put_ScaleZ(double) noexcept = 0;
            virtual int32_t __stdcall get_TranslateX(double*) noexcept = 0;
            virtual int32_t __stdcall put_TranslateX(double) noexcept = 0;
            virtual int32_t __stdcall get_TranslateY(double*) noexcept = 0;
            virtual int32_t __stdcall put_TranslateY(double) noexcept = 0;
            virtual int32_t __stdcall get_TranslateZ(double*) noexcept = 0;
            virtual int32_t __stdcall put_TranslateZ(double) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_CenterXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CenterYProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CenterZProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RotationXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RotationYProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RotationZProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ScaleXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ScaleYProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ScaleZProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TranslateXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TranslateYProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TranslateZProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Xaml::Media::Media3D::IMatrix3DHelper>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Identity(struct struct_Microsoft_UI_Xaml_Media_Media3D_Matrix3D*) noexcept = 0;
            virtual int32_t __stdcall Multiply(struct struct_Microsoft_UI_Xaml_Media_Media3D_Matrix3D, struct struct_Microsoft_UI_Xaml_Media_Media3D_Matrix3D, struct struct_Microsoft_UI_Xaml_Media_Media3D_Matrix3D*) noexcept = 0;
            virtual int32_t __stdcall FromElements(double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, struct struct_Microsoft_UI_Xaml_Media_Media3D_Matrix3D*) noexcept = 0;
            virtual int32_t __stdcall GetHasInverse(struct struct_Microsoft_UI_Xaml_Media_Media3D_Matrix3D, bool*) noexcept = 0;
            virtual int32_t __stdcall GetIsIdentity(struct struct_Microsoft_UI_Xaml_Media_Media3D_Matrix3D, bool*) noexcept = 0;
            virtual int32_t __stdcall Invert(struct struct_Microsoft_UI_Xaml_Media_Media3D_Matrix3D, struct struct_Microsoft_UI_Xaml_Media_Media3D_Matrix3D*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Xaml::Media::Media3D::IPerspectiveTransform3D>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Depth(double*) noexcept = 0;
            virtual int32_t __stdcall put_Depth(double) noexcept = 0;
            virtual int32_t __stdcall get_OffsetX(double*) noexcept = 0;
            virtual int32_t __stdcall put_OffsetX(double) noexcept = 0;
            virtual int32_t __stdcall get_OffsetY(double*) noexcept = 0;
            virtual int32_t __stdcall put_OffsetY(double) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Xaml::Media::Media3D::IPerspectiveTransform3DStatics>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_DepthProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_OffsetXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_OffsetYProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Xaml::Media::Media3D::ITransform3D>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Xaml::Media::Media3D::ITransform3DFactory>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Microsoft_UI_Xaml_Media_Media3D_ICompositeTransform3D
    {
        [[nodiscard]] auto CenterX() const;
        auto CenterX(double value) const;
        [[nodiscard]] auto CenterY() const;
        auto CenterY(double value) const;
        [[nodiscard]] auto CenterZ() const;
        auto CenterZ(double value) const;
        [[nodiscard]] auto RotationX() const;
        auto RotationX(double value) const;
        [[nodiscard]] auto RotationY() const;
        auto RotationY(double value) const;
        [[nodiscard]] auto RotationZ() const;
        auto RotationZ(double value) const;
        [[nodiscard]] auto ScaleX() const;
        auto ScaleX(double value) const;
        [[nodiscard]] auto ScaleY() const;
        auto ScaleY(double value) const;
        [[nodiscard]] auto ScaleZ() const;
        auto ScaleZ(double value) const;
        [[nodiscard]] auto TranslateX() const;
        auto TranslateX(double value) const;
        [[nodiscard]] auto TranslateY() const;
        auto TranslateY(double value) const;
        [[nodiscard]] auto TranslateZ() const;
        auto TranslateZ(double value) const;
    };
    template <> struct consume<winrt::Microsoft::UI::Xaml::Media::Media3D::ICompositeTransform3D>
    {
        template <typename D> using type = consume_Microsoft_UI_Xaml_Media_Media3D_ICompositeTransform3D<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Xaml_Media_Media3D_ICompositeTransform3DStatics
    {
        [[nodiscard]] auto CenterXProperty() const;
        [[nodiscard]] auto CenterYProperty() const;
        [[nodiscard]] auto CenterZProperty() const;
        [[nodiscard]] auto RotationXProperty() const;
        [[nodiscard]] auto RotationYProperty() const;
        [[nodiscard]] auto RotationZProperty() const;
        [[nodiscard]] auto ScaleXProperty() const;
        [[nodiscard]] auto ScaleYProperty() const;
        [[nodiscard]] auto ScaleZProperty() const;
        [[nodiscard]] auto TranslateXProperty() const;
        [[nodiscard]] auto TranslateYProperty() const;
        [[nodiscard]] auto TranslateZProperty() const;
    };
    template <> struct consume<winrt::Microsoft::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics>
    {
        template <typename D> using type = consume_Microsoft_UI_Xaml_Media_Media3D_ICompositeTransform3DStatics<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Xaml_Media_Media3D_IMatrix3DHelper
    {
    };
    template <> struct consume<winrt::Microsoft::UI::Xaml::Media::Media3D::IMatrix3DHelper>
    {
        template <typename D> using type = consume_Microsoft_UI_Xaml_Media_Media3D_IMatrix3DHelper<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Xaml_Media_Media3D_IMatrix3DHelperStatics
    {
        [[nodiscard]] auto Identity() const;
        auto Multiply(winrt::Microsoft::UI::Xaml::Media::Media3D::Matrix3D const& matrix1, winrt::Microsoft::UI::Xaml::Media::Media3D::Matrix3D const& matrix2) const;
        auto FromElements(double m11, double m12, double m13, double m14, double m21, double m22, double m23, double m24, double m31, double m32, double m33, double m34, double offsetX, double offsetY, double offsetZ, double m44) const;
        auto GetHasInverse(winrt::Microsoft::UI::Xaml::Media::Media3D::Matrix3D const& target) const;
        auto GetIsIdentity(winrt::Microsoft::UI::Xaml::Media::Media3D::Matrix3D const& target) const;
        auto Invert(winrt::Microsoft::UI::Xaml::Media::Media3D::Matrix3D const& target) const;
    };
    template <> struct consume<winrt::Microsoft::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics>
    {
        template <typename D> using type = consume_Microsoft_UI_Xaml_Media_Media3D_IMatrix3DHelperStatics<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Xaml_Media_Media3D_IPerspectiveTransform3D
    {
        [[nodiscard]] auto Depth() const;
        auto Depth(double value) const;
        [[nodiscard]] auto OffsetX() const;
        auto OffsetX(double value) const;
        [[nodiscard]] auto OffsetY() const;
        auto OffsetY(double value) const;
    };
    template <> struct consume<winrt::Microsoft::UI::Xaml::Media::Media3D::IPerspectiveTransform3D>
    {
        template <typename D> using type = consume_Microsoft_UI_Xaml_Media_Media3D_IPerspectiveTransform3D<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Xaml_Media_Media3D_IPerspectiveTransform3DStatics
    {
        [[nodiscard]] auto DepthProperty() const;
        [[nodiscard]] auto OffsetXProperty() const;
        [[nodiscard]] auto OffsetYProperty() const;
    };
    template <> struct consume<winrt::Microsoft::UI::Xaml::Media::Media3D::IPerspectiveTransform3DStatics>
    {
        template <typename D> using type = consume_Microsoft_UI_Xaml_Media_Media3D_IPerspectiveTransform3DStatics<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Xaml_Media_Media3D_ITransform3D
    {
    };
    template <> struct consume<winrt::Microsoft::UI::Xaml::Media::Media3D::ITransform3D>
    {
        template <typename D> using type = consume_Microsoft_UI_Xaml_Media_Media3D_ITransform3D<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Xaml_Media_Media3D_ITransform3DFactory
    {
        auto CreateInstance(winrt::Windows::Foundation::IInspectable const& baseInterface, winrt::Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<winrt::Microsoft::UI::Xaml::Media::Media3D::ITransform3DFactory>
    {
        template <typename D> using type = consume_Microsoft_UI_Xaml_Media_Media3D_ITransform3DFactory<D>;
    };
    struct struct_Microsoft_UI_Xaml_Media_Media3D_Matrix3D
    {
        double M11;
        double M12;
        double M13;
        double M14;
        double M21;
        double M22;
        double M23;
        double M24;
        double M31;
        double M32;
        double M33;
        double M34;
        double OffsetX;
        double OffsetY;
        double OffsetZ;
        double M44;
    };
    template <> struct abi<Microsoft::UI::Xaml::Media::Media3D::Matrix3D>
    {
        using type = struct_Microsoft_UI_Xaml_Media_Media3D_Matrix3D;
    };
}
#endif