$itemsToCleanUp = Get-ChildItem  -Recurse *.o, *.exe main

foreach ($item in $itemsToCleanUp) {
    Write-Output "Removing $item ..."  
    Remove-Item $item
}