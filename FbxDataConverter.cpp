#include "FbxDataConverter.h"

FbxVector4 ConvertToFbxPos(FVector Vector) {
    FbxVector4 Out{};
    Out[0] = Vector.X;
    Out[1] = -Vector.Y;
    Out[2] = Vector.Z;
    return Out;
}

FbxVector4 ConvertToFbxPos(FVector4 Vector) {
    FbxVector4 Out{};
    Out[0] = Vector.X;
    Out[1] = -Vector.Y;
    Out[2] = Vector.Z;
    return Out;
}

FbxVector4 ConvertToFbxRot(FVector Vector) {
    FbxVector4 Out{};
    Out[0] = Vector.X;
    Out[1] = -Vector.Y;
    Out[2] = -Vector.Z;
    return Out;
}

FbxVector4 ConvertToFbxScale(FVector Vector) {
    FbxVector4 Out{};
    Out[0] = Vector.X;
    Out[1] = Vector.Y;
    Out[2] = Vector.Z;
    return Out;
}