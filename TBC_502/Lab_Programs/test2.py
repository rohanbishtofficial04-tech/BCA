from sklearn.datasets import load_wine
from sklearn.model_selection import train_test_split
from sklearn.neighbors import KNeighborsClassifier
from sklearn.metrics import accuracy_score,confusion_matrix

data=load_wine()
X=data.data
y=data.target


X_train,X_test,y_train,y_test=train_test_split(X,y,test_size=0.3,random_state=42,stratify=y)


knn=KNeighborsClassifier(n_neighbors=3)
knn.fit(X_train,y_train)

knn_pred=knn.predict(X_test)

print("Accuracy: ",accuracy_score(y_test,knn_pred))
print("CM: \n",confusion_matrix(y_test,knn_pred))