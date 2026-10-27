from sklearn.datasets import load_wine
from sklearn.model_selection import train_test_split
from sklearn.naive_bayes import GaussianNB
from sklearn.metrics import accuracy_score,confusion_matrix

data=load_wine()
X=data.data
y=data.target

X_train,X_test,y_train,y_test=train_test_split(X,y,test_size=0.2,random_state=42)

nb=GaussianNB()
nb.fit(X_train,y_train)

nb_pred=nb.predict(X_test)
print("Accuracy: ",accuracy_score(y_test,nb_pred))
