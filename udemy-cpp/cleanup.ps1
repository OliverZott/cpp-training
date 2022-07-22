$itemsToCleanUp = Get-ChildItem  -Recurse *.o, *.exe 

foreach ($item in $itemsToCleanUp) {
    Write-Output "Removing $item ..."  
    Remove-Item $item
}