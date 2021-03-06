#pragma once

FString createKeyForVector(const FVector& vectorKey);

class GridNode;
typedef GridNode* GridNodePtr;
typedef TArray<GridNode*> GridNodePtrList;
typedef TMap<FString, GridNodePtr> GridNodeMap;
class GridEdge;
typedef GridEdge* GridEdgePtr;
typedef TArray<GridEdgePtr> GridEdgePtrList;
typedef TMap<FString, GridEdgePtr> GridEdgeMap;
class GridTile;
typedef GridTile* GridTilePtr;
typedef TArray<GridTilePtr> GridTilePtrList;
typedef TMap<FString, GridTilePtr> GridTileMap;

template<typename _PtrType>
void deleteOwnedItems(TArray<_PtrType*>& myArray)
{
	for (auto& pointer : myArray)
	{
		delete pointer;
		pointer = nullptr;
	}
	myArray.Empty();
}