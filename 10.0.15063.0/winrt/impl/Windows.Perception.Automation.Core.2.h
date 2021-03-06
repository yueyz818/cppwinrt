﻿// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Perception.Automation.Core.1.h"

WINRT_EXPORT namespace winrt::Windows::Perception::Automation::Core {

struct CorePerceptionAutomation
{
    CorePerceptionAutomation() = delete;
    static void SetActivationFactoryProvider(Windows::Foundation::IGetActivationFactory const& provider);
};

}
